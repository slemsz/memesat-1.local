// ======================================================================
// \title  ActiveTextLoggerComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveTextLogger component base class
// ======================================================================

#include <cstdio>

#include "F-Prime/Svc/ActiveTextLogger/ActiveTextLoggerComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Svc {

  namespace {
    enum MsgTypeEnum {
      ACTIVETEXTLOGGER_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      INT_IF_TEXTQUEUE,
    };

    // Get the max size by constructing a union of the async input, command, and
    // internal port serialization sizes
    union BuffUnion {
      // Size of TextQueue argument list
      BYTE TextQueueIntIfSize[
        Fw::InternalInterfaceString::SERIALIZED_SIZE
      ];
    };

    // Define a message buffer class large enough to handle all the
    // asynchronous inputs to the component
    class ComponentIpcSerializableBuffer :
      public Fw::SerializeBufferBase
    {

      public:

        enum {
          // Max. message size = size of data + message id + port
          SERIALIZATION_SIZE =
            sizeof(BuffUnion) +
            sizeof(NATIVE_INT_TYPE) +
            sizeof(NATIVE_INT_TYPE)
        };

        NATIVE_UINT_TYPE getBuffCapacity() const {
          return sizeof(m_buff);
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:
        // Should be the max of all the input ports serialized sizes...
        U8 m_buff[SERIALIZATION_SIZE];

    };
  }

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void ActiveTextLoggerComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {
    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port TextLogger
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_TextLogger_InputPorts());
      port++
    ) {
      this->m_TextLogger_InputPort[port].init();
      this->m_TextLogger_InputPort[port].addCallComp(
        this,
        m_p_TextLogger_in
      );
      this->m_TextLogger_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_TextLogger_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_TextLogger_InputPort[port].setObjName(portName);
#endif
    }

    Os::Queue::QueueStatus qStat = this->createQueue(
      queueDepth,
      ComponentIpcSerializableBuffer::SERIALIZATION_SIZE
    );
    FW_ASSERT(
      Os::Queue::QUEUE_OK == qStat,
      static_cast<FwAssertArgType>(qStat)
    );
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Fw::InputLogTextPort* ActiveTextLoggerComponentBase ::
    get_TextLogger_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_TextLogger_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_TextLogger_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  ActiveTextLoggerComponentBase ::
    ActiveTextLoggerComponentBase(const char* compName) :
      Fw::ActiveComponentBase(compName)
  {

  }

  ActiveTextLoggerComponentBase ::
    ~ActiveTextLoggerComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveTextLoggerComponentBase ::
    getNum_TextLogger_InputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_TextLogger_InputPort));
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  void ActiveTextLoggerComponentBase ::
    TextLogger_handlerBase(
        NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time& timeTag,
        const Fw::LogSeverity& severity,
        Fw::TextLogString& text
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_TextLogger_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Down call to pure virtual handler method implemented in Impl class
    this->TextLogger_handler(
      portNum,
      id,
      timeTag,
      severity,
      text
    );
  }

  // ----------------------------------------------------------------------
  // Internal interface base-class functions
  // ----------------------------------------------------------------------

  void ActiveTextLoggerComponentBase ::
    TextQueue_internalInterfaceInvoke(const Fw::InternalInterfaceString& text)
  {
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<NATIVE_INT_TYPE>(INT_IF_TEXTQUEUE));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<NATIVE_INT_TYPE>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(text);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 1, _block);

    if (qStatus == Os::Queue::QUEUE_FULL) {
      this->incNumMsgDropped();
      return;
    }

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  // ----------------------------------------------------------------------
  // Message dispatch functions
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ActiveTextLoggerComponentBase ::
    doDispatch()
  {
    ComponentIpcSerializableBuffer msg;
    NATIVE_INT_TYPE priority = 0;

    Os::Queue::QueueStatus msgStatus = this->m_queue.receive(
      msg,
      priority,
      Os::Queue::QUEUE_BLOCKING
    );
    FW_ASSERT(
      msgStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(msgStatus)
    );

    // Reset to beginning of buffer
    msg.resetDeser();

    NATIVE_INT_TYPE desMsg = 0;
    Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    MsgTypeEnum msgType = static_cast<MsgTypeEnum>(desMsg);

    if (msgType == ACTIVETEXTLOGGER_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {
      // Handle internal interface TextQueue
      case INT_IF_TEXTQUEUE: {
        Fw::InternalInterfaceString text;
        deserStatus = msg.deserialize(text);

        // Internal interface should always deserialize
        FW_ASSERT(
          Fw::FW_SERIALIZE_OK == deserStatus,
          static_cast<FwAssertArgType>(deserStatus)
        );

        // Make sure there was no data left over.
        // That means the buffer size was incorrect.
        FW_ASSERT(
          msg.getBuffLeft() == 0,
          static_cast<FwAssertArgType>(msg.getBuffLeft())
        );

        // Call handler function
        this->TextQueue_internalInterfaceHandler(
          text
        );

        break;
      }

      default:
        return MSG_DISPATCH_ERROR;
    }

    return MSG_DISPATCH_OK;
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  void ActiveTextLoggerComponentBase ::
    m_p_TextLogger_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time& timeTag,
        const Fw::LogSeverity& severity,
        Fw::TextLogString& text
    )
  {
    FW_ASSERT(callComp);
    ActiveTextLoggerComponentBase* compPtr = static_cast<ActiveTextLoggerComponentBase*>(callComp);
    compPtr->TextLogger_handlerBase(
      portNum,
      id,
      timeTag,
      severity,
      text
    );
  }

}
