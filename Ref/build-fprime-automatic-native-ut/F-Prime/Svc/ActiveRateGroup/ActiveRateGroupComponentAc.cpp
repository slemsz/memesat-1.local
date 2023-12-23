// ======================================================================
// \title  ActiveRateGroupComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveRateGroup component base class
// ======================================================================

#include <cstdio>

#include "F-Prime/Svc/ActiveRateGroup/ActiveRateGroupComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Svc {

  namespace {
    enum MsgTypeEnum {
      ACTIVERATEGROUP_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      CYCLEIN_CYCLE,
      PINGIN_PING,
    };

    // Get the max size by doing a union of the input and internal port serialization sizes
    union BuffUnion {
      BYTE CycleInPortSize[Svc::InputCyclePort::SERIALIZED_SIZE];
      BYTE PingInPortSize[Svc::InputPingPort::SERIALIZED_SIZE];
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

  void ActiveRateGroupComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {
    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port CycleIn
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_CycleIn_InputPorts());
      port++
    ) {
      this->m_CycleIn_InputPort[port].init();
      this->m_CycleIn_InputPort[port].addCallComp(
        this,
        m_p_CycleIn_in
      );
      this->m_CycleIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_CycleIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_CycleIn_InputPort[port].setObjName(portName);
#endif
    }

    // Connect input port PingIn
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_PingIn_InputPorts());
      port++
    ) {
      this->m_PingIn_InputPort[port].init();
      this->m_PingIn_InputPort[port].addCallComp(
        this,
        m_p_PingIn_in
      );
      this->m_PingIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_PingIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_PingIn_InputPort[port].setObjName(portName);
#endif
    }

    // Connect output port Log
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_Log_OutputPorts());
      port++
    ) {
      this->m_Log_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_Log_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_Log_OutputPort[port].setObjName(portName);
#endif
    }

#if FW_ENABLE_TEXT_LOGGING == 1
    // Connect output port LogText
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_LogText_OutputPorts());
      port++
    ) {
      this->m_LogText_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_LogText_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_LogText_OutputPort[port].setObjName(portName);
#endif
    }
#endif

    // Connect output port Time
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_Time_OutputPorts());
      port++
    ) {
      this->m_Time_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_Time_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_Time_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port Tlm
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_Tlm_OutputPorts());
      port++
    ) {
      this->m_Tlm_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_Tlm_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_Tlm_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port PingOut
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_PingOut_OutputPorts());
      port++
    ) {
      this->m_PingOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_PingOut_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_PingOut_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port RateGroupMemberOut
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_RateGroupMemberOut_OutputPorts());
      port++
    ) {
      this->m_RateGroupMemberOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_RateGroupMemberOut_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_RateGroupMemberOut_OutputPort[port].setObjName(portName);
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

  Svc::InputCyclePort* ActiveRateGroupComponentBase ::
    get_CycleIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_CycleIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_CycleIn_InputPort[portNum];
  }

  Svc::InputPingPort* ActiveRateGroupComponentBase ::
    get_PingIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_PingIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_PingIn_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Connect special input ports to special output ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    set_Log_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Log_OutputPort[portNum].addCallPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  void ActiveRateGroupComponentBase ::
    set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogTextPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_LogText_OutputPort[portNum].addCallPort(port);
  }

#endif

  void ActiveRateGroupComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].addCallPort(port);
  }

  void ActiveRateGroupComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTlmPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Tlm_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Connect typed input ports to typed output ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    set_PingOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Svc::InputPingPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_PingOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_PingOut_OutputPort[portNum].addCallPort(port);
  }

  void ActiveRateGroupComponentBase ::
    set_RateGroupMemberOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_RateGroupMemberOut_OutputPort[portNum].addCallPort(port);
  }

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to special output ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    set_Log_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Log_OutputPort[portNum].registerSerialPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  void ActiveRateGroupComponentBase ::
    set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_LogText_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  void ActiveRateGroupComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].registerSerialPort(port);
  }

  void ActiveRateGroupComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Tlm_OutputPort[portNum].registerSerialPort(port);
  }

#endif

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to typed output ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    set_PingOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_PingOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_PingOut_OutputPort[portNum].registerSerialPort(port);
  }

  void ActiveRateGroupComponentBase ::
    set_RateGroupMemberOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_RateGroupMemberOut_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  ActiveRateGroupComponentBase ::
    ActiveRateGroupComponentBase(const char* compName) :
      Fw::ActiveComponentBase(compName)
  {
    // Write telemetry channel RgMaxTime
    this->m_first_update_RgMaxTime = true;
    this->m_last_RgMaxTime = 0;

    // Write telemetry channel RgCycleSlips
    this->m_first_update_RgCycleSlips = true;
    this->m_last_RgCycleSlips = 0;
  }

  ActiveRateGroupComponentBase ::
    ~ActiveRateGroupComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_CycleIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_CycleIn_InputPort));
  }

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_PingIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_PingIn_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of special output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_Log_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Log_OutputPort));
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_LogText_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_LogText_OutputPort));
  }

#endif

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_Time_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Time_OutputPort));
  }

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_Tlm_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Tlm_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_PingOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_PingOut_OutputPort));
  }

  NATIVE_INT_TYPE ActiveRateGroupComponentBase ::
    getNum_RateGroupMemberOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_RateGroupMemberOut_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for special output ports
  // ----------------------------------------------------------------------

  bool ActiveRateGroupComponentBase ::
    isConnected_Log_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Log_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  bool ActiveRateGroupComponentBase ::
    isConnected_LogText_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_LogText_OutputPort[portNum].isConnected();
  }

#endif

  bool ActiveRateGroupComponentBase ::
    isConnected_Time_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Time_OutputPort[portNum].isConnected();
  }

  bool ActiveRateGroupComponentBase ::
    isConnected_Tlm_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Tlm_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Connection status queries for typed output ports
  // ----------------------------------------------------------------------

  bool ActiveRateGroupComponentBase ::
    isConnected_PingOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_PingOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_PingOut_OutputPort[portNum].isConnected();
  }

  bool ActiveRateGroupComponentBase ::
    isConnected_RateGroupMemberOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_RateGroupMemberOut_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    CycleIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        Svc::TimerVal& cycleStart
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_CycleIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Call pre-message hook
    CycleIn_preMsgHook(
      portNum,
      cycleStart
    );
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize message ID
    _status = msg.serialize(
      static_cast<NATIVE_INT_TYPE>(CYCLEIN_CYCLE)
    );
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Serialize port number
    _status = msg.serialize(portNum);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Serialize argument cycleStart
    _status = msg.serialize(cycleStart);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 0, _block);

    if (qStatus == Os::Queue::QUEUE_FULL) {
      this->incNumMsgDropped();
      return;
    }

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveRateGroupComponentBase ::
    PingIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_PingIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Call pre-message hook
    PingIn_preMsgHook(
      portNum,
      key
    );
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize message ID
    _status = msg.serialize(
      static_cast<NATIVE_INT_TYPE>(PINGIN_PING)
    );
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Serialize port number
    _status = msg.serialize(portNum);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Serialize argument key
    _status = msg.serialize(key);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 0, _block);

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  // ----------------------------------------------------------------------
  // Pre-message hooks for typed async input ports
  //
  // Each of these functions is invoked just before processing a message
  // on the corresponding port. By default, they do nothing. You can
  // override them to provide specific pre-message behavior.
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    CycleIn_preMsgHook(
        NATIVE_INT_TYPE portNum,
        Svc::TimerVal& cycleStart
    )
  {
    // Default: no-op
  }

  void ActiveRateGroupComponentBase ::
    PingIn_preMsgHook(
        NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    // Default: no-op
  }

  // ----------------------------------------------------------------------
  // Invocation functions for typed output ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    PingOut_out(
        NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(
      portNum < this->getNum_PingOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_PingOut_OutputPort[portNum].invoke(
      key
    );
  }

  void ActiveRateGroupComponentBase ::
    RateGroupMemberOut_out(
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_RateGroupMemberOut_OutputPort[portNum].invoke(
      context
    );
  }

  // ----------------------------------------------------------------------
  // Event logging functions
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    log_DIAGNOSTIC_RateGroupStarted()
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_RATEGROUPSTARTED;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;

#if FW_AMPCS_COMPATIBLE
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(0));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::DIAGNOSTIC,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Rate group started.";
#else
      const char* _formatString =
        "%s: Rate group started.";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
        _textBuffer,
        FW_LOG_TEXT_BUFFER_SIZE,
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName,
#endif
        "RateGroupStarted "
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::DIAGNOSTIC,
        _logString
      );
    }
#endif
  }

  void ActiveRateGroupComponentBase ::
    log_WARNING_HI_RateGroupCycleSlip(U32 cycle)
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_RATEGROUPCYCLESLIP;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {
      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(1));
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
        static_cast<U8>(sizeof(U32))
      );
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(cycle);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

      this->m_Log_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::WARNING_HI,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Rate group cycle slipped on cycle %" PRIu32 "";
#else
      const char* _formatString =
        "%s: Rate group cycle slipped on cycle %" PRIu32 "";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
        _textBuffer,
        FW_LOG_TEXT_BUFFER_SIZE,
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName,
#endif
        "RateGroupCycleSlip ",
        cycle
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::WARNING_HI,
        _logString
      );
    }
#endif
  }

  // ----------------------------------------------------------------------
  // Telemetry write functions
  // ----------------------------------------------------------------------

  void ActiveRateGroupComponentBase ::
    tlmWrite_RgMaxTime(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
    // Check to see if it is the first time
    if (not this->m_first_update_RgMaxTime) {
      // Check to see if value has changed. If not, don't write it.
      if (arg == this->m_last_RgMaxTime) {
        return;
      }
      else {
        this->m_last_RgMaxTime = arg;
      }
    }
    else {
      this->m_first_update_RgMaxTime = false;
      this->m_last_RgMaxTime = arg;
    }

    if (this->m_Tlm_OutputPort[0].isConnected()) {
      if (
        this->m_Time_OutputPort[0].isConnected() &&
        (_tlmTime ==  Fw::ZERO_TIME)
      ) {
        this->m_Time_OutputPort[0].invoke(_tlmTime);
      }

      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
        _stat == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_RGMAXTIME;

      this->m_Tlm_OutputPort[0].invoke(
        _id,
        _tlmTime,
        _tlmBuff
      );
    }
  }

  void ActiveRateGroupComponentBase ::
    tlmWrite_RgCycleSlips(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
    // Check to see if it is the first time
    if (not this->m_first_update_RgCycleSlips) {
      // Check to see if value has changed. If not, don't write it.
      if (arg == this->m_last_RgCycleSlips) {
        return;
      }
      else {
        this->m_last_RgCycleSlips = arg;
      }
    }
    else {
      this->m_first_update_RgCycleSlips = false;
      this->m_last_RgCycleSlips = arg;
    }

    if (this->m_Tlm_OutputPort[0].isConnected()) {
      if (
        this->m_Time_OutputPort[0].isConnected() &&
        (_tlmTime ==  Fw::ZERO_TIME)
      ) {
        this->m_Time_OutputPort[0].invoke(_tlmTime);
      }

      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
        _stat == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_RGCYCLESLIPS;

      this->m_Tlm_OutputPort[0].invoke(
        _id,
        _tlmTime,
        _tlmBuff
      );
    }
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time ActiveRateGroupComponentBase ::
    getTime()
  {
    if (this->m_Time_OutputPort[0].isConnected()) {
      Fw::Time _time;
      this->m_Time_OutputPort[0].invoke(_time);
      return _time;
    }
    else {
      return Fw::Time(TB_NONE, 0, 0);
    }
  }

  // ----------------------------------------------------------------------
  // Message dispatch functions
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ActiveRateGroupComponentBase ::
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

    if (msgType == ACTIVERATEGROUP_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {
      // Handle async input port CycleIn
      case CYCLEIN_CYCLE: {
        // Deserialize argument cycleStart
        Svc::TimerVal cycleStart;
        deserStatus = msg.deserialize(cycleStart);
        FW_ASSERT(
          deserStatus == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(deserStatus)
        );
        // Call handler function
        this->CycleIn_handler(
          portNum,
          cycleStart
        );

        break;
      }

      // Handle async input port PingIn
      case PINGIN_PING: {
        // Deserialize argument key
        U32 key;
        deserStatus = msg.deserialize(key);
        FW_ASSERT(
          deserStatus == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(deserStatus)
        );
        // Call handler function
        this->PingIn_handler(
          portNum,
          key
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

  void ActiveRateGroupComponentBase ::
    m_p_CycleIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        Svc::TimerVal& cycleStart
    )
  {
    FW_ASSERT(callComp);
    ActiveRateGroupComponentBase* compPtr = static_cast<ActiveRateGroupComponentBase*>(callComp);
    compPtr->CycleIn_handlerBase(
      portNum,
      cycleStart
    );
  }

  void ActiveRateGroupComponentBase ::
    m_p_PingIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    ActiveRateGroupComponentBase* compPtr = static_cast<ActiveRateGroupComponentBase*>(callComp);
    compPtr->PingIn_handlerBase(
      portNum,
      key
    );
  }

}
