// ======================================================================
// \title  PingReceiverComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PingReceiver component base class
// ======================================================================

#include <cstdio>

#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif
#include "Ref/PingReceiver/PingReceiverComponentAc.hpp"

namespace Ref {

  namespace {
    enum MsgTypeEnum {
      PINGRECEIVER_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      PINGIN_PING,
      CMD_PR_STOPPINGS,
    };

    // Get the max size by doing a union of the input and internal port serialization sizes
    union BuffUnion {
      BYTE PingInPortSize[Svc::InputPingPort::SERIALIZED_SIZE];
      BYTE cmdPortSize[Fw::InputCmdPort::SERIALIZED_SIZE];
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

  void PingReceiverComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {
    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port CmdDisp
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_CmdDisp_InputPorts());
      port++
    ) {
      this->m_CmdDisp_InputPort[port].init();
      this->m_CmdDisp_InputPort[port].addCallComp(
        this,
        m_p_CmdDisp_in
      );
      this->m_CmdDisp_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_CmdDisp_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_CmdDisp_InputPort[port].setObjName(portName);
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

    // Connect output port CmdReg
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_CmdReg_OutputPorts());
      port++
    ) {
      this->m_CmdReg_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_CmdReg_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_CmdReg_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port CmdStatus
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_CmdStatus_OutputPorts());
      port++
    ) {
      this->m_CmdStatus_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_CmdStatus_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_CmdStatus_OutputPort[port].setObjName(portName);
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
  // Getters for special input ports
  // ----------------------------------------------------------------------

  Fw::InputCmdPort* PingReceiverComponentBase ::
    get_CmdDisp_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_CmdDisp_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_CmdDisp_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Svc::InputPingPort* PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdRegPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_CmdReg_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_CmdReg_OutputPort[portNum].addCallPort(port);
  }

  void PingReceiverComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdResponsePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_CmdStatus_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_CmdStatus_OutputPort[portNum].addCallPort(port);
  }

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to special output ports
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_CmdReg_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_CmdReg_OutputPort[portNum].registerSerialPort(port);
  }

  void PingReceiverComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_CmdStatus_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_CmdStatus_OutputPort[portNum].registerSerialPort(port);
  }

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

#endif

  // ----------------------------------------------------------------------
  // Command registration
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    regCommands()
  {
    FW_ASSERT(this->m_CmdReg_OutputPort[0].isConnected());

    this->m_CmdReg_OutputPort[0].invoke(
      this->getIdBase() + OPCODE_PR_STOPPINGS
    );
  }

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  PingReceiverComponentBase ::
    PingReceiverComponentBase(const char* compName) :
      Fw::ActiveComponentBase(compName)
  {

  }

  PingReceiverComponentBase ::
    ~PingReceiverComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of special input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_CmdDisp_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_CmdDisp_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_PingIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_PingIn_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of special output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_CmdReg_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_CmdReg_OutputPort));
  }

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_CmdStatus_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_CmdStatus_OutputPort));
  }

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_Log_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Log_OutputPort));
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_LogText_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_LogText_OutputPort));
  }

#endif

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_Time_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Time_OutputPort));
  }

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_Tlm_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Tlm_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PingReceiverComponentBase ::
    getNum_PingOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_PingOut_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for special output ports
  // ----------------------------------------------------------------------

  bool PingReceiverComponentBase ::
    isConnected_CmdReg_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_CmdReg_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_CmdReg_OutputPort[portNum].isConnected();
  }

  bool PingReceiverComponentBase ::
    isConnected_CmdStatus_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_CmdStatus_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_CmdStatus_OutputPort[portNum].isConnected();
  }

  bool PingReceiverComponentBase ::
    isConnected_Log_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Log_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Log_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1

  bool PingReceiverComponentBase ::
    isConnected_LogText_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_LogText_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_LogText_OutputPort[portNum].isConnected();
  }

#endif

  bool PingReceiverComponentBase ::
    isConnected_Time_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Time_OutputPort[portNum].isConnected();
  }

  bool PingReceiverComponentBase ::
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

  bool PingReceiverComponentBase ::
    isConnected_PingOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_PingOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_PingOut_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  void PingReceiverComponentBase ::
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

  // ----------------------------------------------------------------------
  // Command response
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    cmdResponse_out(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdResponse response
    )
  {
    FW_ASSERT(this->m_CmdStatus_OutputPort[0].isConnected());
    this->m_CmdStatus_OutputPort[0].invoke(opCode, cmdSeq, response);
  }

  // ----------------------------------------------------------------------
  // Command handler base-class functions
  //
  // Call these functions directly to bypass the command input port
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    PR_StopPings_cmdHandlerBase(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer& args
    )
  {
    // Call pre-message hook
    this->PR_StopPings_preMsgHook(opCode,cmdSeq);

    // Defer deserializing arguments to the message dispatcher
    // to avoid deserializing and reserializing just for IPC
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize for IPC
    _status = msg.serialize(static_cast<NATIVE_INT_TYPE>(CMD_PR_STOPPINGS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    NATIVE_INT_TYPE port = 0;

    _status = msg.serialize(port);
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(opCode);
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(cmdSeq);
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(args);
    FW_ASSERT (
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
  // Pre-message hooks for async commands
  //
  // Each of these functions is invoked just before processing the
  // corresponding command. By default they do nothing. You can
  // override them to provide specific pre-command behavior.
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    PR_StopPings_preMsgHook(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // Defaults to no-op; can be overridden
  }

  // ----------------------------------------------------------------------
  // Event logging functions
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    log_ACTIVITY_HI_PR_PingsDisabled()
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_PR_PINGSDISABLED;

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
        Fw::LogSeverity::ACTIVITY_HI,
        _logBuff
      );
    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {
#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: PingReceiver ping responses disabled";
#else
      const char* _formatString =
        "%s: PingReceiver ping responses disabled";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
        _textBuffer,
        FW_LOG_TEXT_BUFFER_SIZE,
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName,
#endif
        "PR_PingsDisabled "
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_LogText_OutputPort[0].invoke(
        _id,
        _logTime,
        Fw::LogSeverity::ACTIVITY_HI,
        _logString
      );
    }
#endif
  }

  void PingReceiverComponentBase ::
    log_DIAGNOSTIC_PR_PingReceived(U32 code)
  {
    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
      this->m_Time_OutputPort[0].invoke(_logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_PR_PINGRECEIVED;

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
      _status = _logBuff.serialize(code);
      FW_ASSERT(
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
      );

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
        "(%s) %s: PingReceiver pinged with code %" PRIu32 "";
#else
      const char* _formatString =
        "%s: PingReceiver pinged with code %" PRIu32 "";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
        _textBuffer,
        FW_LOG_TEXT_BUFFER_SIZE,
        _formatString,
#if FW_OBJECT_NAMES == 1
        this->m_objName,
#endif
        "PR_PingReceived ",
        code
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

  // ----------------------------------------------------------------------
  // Telemetry write functions
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    tlmWrite_PR_NumPings(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
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

      _id = this->getIdBase() + CHANNELID_PR_NUMPINGS;

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

  Fw::Time PingReceiverComponentBase ::
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

  Fw::QueuedComponentBase::MsgDispatchStatus PingReceiverComponentBase ::
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

    if (msgType == PINGRECEIVER_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {
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

      // Handle command PR_StopPings
      case CMD_PR_STOPPINGS: {
        // Deserialize opcode
        FwOpcodeType opCode = 0;
        deserStatus = msg.deserialize(opCode);
        FW_ASSERT (
          deserStatus == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(deserStatus)
        );

        // Deserialize command sequence
        U32 cmdSeq = 0;
        deserStatus = msg.deserialize(cmdSeq);
        FW_ASSERT (
          deserStatus == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(deserStatus)
        );

        // Deserialize command argument buffer
        Fw::CmdArgBuffer args;
        deserStatus = msg.deserialize(args);
        FW_ASSERT (
          deserStatus == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(deserStatus)
        );

        // Reset buffer
        args.resetDeser();

        // Make sure there was no data left over.
        // That means the argument buffer size was incorrect.
#if FW_CMD_CHECK_RESIDUAL
        if (args.getBuffLeft() != 0) {
          if (this->m_CmdStatus_OutputPort[0].isConnected()) {
            this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::FORMAT_ERROR);
          }
          // Don't crash the task if bad arguments were passed from the ground
          break;
        }
#endif

        // Call handler function
        this->PR_StopPings_cmdHandler(opCode, cmdSeq);

        break;
      }

      default:
        return MSG_DISPATCH_ERROR;
    }

    return MSG_DISPATCH_OK;
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on special input ports
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    m_p_CmdDisp_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer& args
    )
  {
    FW_ASSERT(callComp);
    PingReceiverComponentBase* compPtr = static_cast<PingReceiverComponentBase*>(callComp);

    const U32 idBase = callComp->getIdBase();
    FW_ASSERT(opCode >= idBase, opCode, idBase);

    // Select base class function based on opcode
    switch (opCode - idBase) {
      case OPCODE_PR_STOPPINGS: {
        compPtr->PR_StopPings_cmdHandlerBase(
          opCode,
          cmdSeq,
          args
        );
        break;
      }
    }
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  void PingReceiverComponentBase ::
    m_p_PingIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    PingReceiverComponentBase* compPtr = static_cast<PingReceiverComponentBase*>(callComp);
    compPtr->PingIn_handlerBase(
      portNum,
      key
    );
  }

}
