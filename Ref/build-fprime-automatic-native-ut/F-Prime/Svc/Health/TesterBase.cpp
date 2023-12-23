// ======================================================================
// \title  Health/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for Health component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdlib>
#include <cstring>
#include "TesterBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  HealthTesterBase ::
    HealthTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize telemetry histories
    this->tlmHistory_PingLateWarnings =
      new History<TlmEntry_PingLateWarnings>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_HLTH_PING_WARN =
      new History<EventEntry_HLTH_PING_WARN>(maxHistorySize);
    this->eventHistory_HLTH_PING_LATE =
      new History<EventEntry_HLTH_PING_LATE>(maxHistorySize);
    this->eventHistory_HLTH_PING_WRONG_KEY =
      new History<EventEntry_HLTH_PING_WRONG_KEY>(maxHistorySize);
    this->eventHistory_HLTH_CHECK_ENABLE =
      new History<EventEntry_HLTH_CHECK_ENABLE>(maxHistorySize);
    this->eventHistory_HLTH_CHECK_PING =
      new History<EventEntry_HLTH_CHECK_PING>(maxHistorySize);
    this->eventHistory_HLTH_CHECK_LOOKUP_ERROR =
      new History<EventEntry_HLTH_CHECK_LOOKUP_ERROR>(maxHistorySize);
    this->eventHistory_HLTH_PING_UPDATED =
      new History<EventEntry_HLTH_PING_UPDATED>(maxHistorySize);
    this->eventHistory_HLTH_PING_INVALID_VALUES =
      new History<EventEntry_HLTH_PING_INVALID_VALUES>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_PingSend =
      new History<FromPortEntry_PingSend>(maxHistorySize);
    this->fromPortHistory_WdogStroke =
      new History<FromPortEntry_WdogStroke>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  HealthTesterBase ::
    ~HealthTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy telemetry histories
    delete this->tlmHistory_PingLateWarnings;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_HLTH_PING_WARN;
    delete this->eventHistory_HLTH_PING_LATE;
    delete this->eventHistory_HLTH_PING_WRONG_KEY;
    delete this->eventHistory_HLTH_CHECK_ENABLE;
    delete this->eventHistory_HLTH_CHECK_PING;
    delete this->eventHistory_HLTH_CHECK_LOOKUP_ERROR;
    delete this->eventHistory_HLTH_PING_UPDATED;
    delete this->eventHistory_HLTH_PING_INVALID_VALUES;
    // Destroy port histories
    delete this->fromPortHistory_PingSend;
    // Destroy port histories
    delete this->fromPortHistory_WdogStroke;
  }

  void HealthTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port CmdReg

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_CmdReg());
        ++_port
    ) {

      this->m_from_CmdReg[_port].init();
      this->m_from_CmdReg[_port].addCallComp(
          this,
          from_CmdReg_static
      );
      this->m_from_CmdReg[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_CmdReg[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_CmdReg[_port].setObjName(_portName);
#endif

    }

    // Attach input port CmdStatus

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_CmdStatus());
        ++_port
    ) {

      this->m_from_CmdStatus[_port].init();
      this->m_from_CmdStatus[_port].addCallComp(
          this,
          from_CmdStatus_static
      );
      this->m_from_CmdStatus[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_CmdStatus[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_CmdStatus[_port].setObjName(_portName);
#endif

    }

    // Attach input port Log

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_Log());
        ++_port
    ) {

      this->m_from_Log[_port].init();
      this->m_from_Log[_port].addCallComp(
          this,
          from_Log_static
      );
      this->m_from_Log[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_Log[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_Log[_port].setObjName(_portName);
#endif

    }

    // Attach input port LogText

#if FW_ENABLE_TEXT_LOGGING == 1
    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_LogText());
        ++_port
    ) {

      this->m_from_LogText[_port].init();
      this->m_from_LogText[_port].addCallComp(
          this,
          from_LogText_static
      );
      this->m_from_LogText[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_LogText[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_LogText[_port].setObjName(_portName);
#endif

    }
#endif

    // Attach input port PingSend

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_PingSend());
        ++_port
    ) {

      this->m_from_PingSend[_port].init();
      this->m_from_PingSend[_port].addCallComp(
          this,
          from_PingSend_static
      );
      this->m_from_PingSend[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_PingSend[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_PingSend[_port].setObjName(_portName);
#endif

    }

    // Attach input port Time

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_Time());
        ++_port
    ) {

      this->m_from_Time[_port].init();
      this->m_from_Time[_port].addCallComp(
          this,
          from_Time_static
      );
      this->m_from_Time[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_Time[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_Time[_port].setObjName(_portName);
#endif

    }

    // Attach input port Tlm

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_Tlm());
        ++_port
    ) {

      this->m_from_Tlm[_port].init();
      this->m_from_Tlm[_port].addCallComp(
          this,
          from_Tlm_static
      );
      this->m_from_Tlm[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_Tlm[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_Tlm[_port].setObjName(_portName);
#endif

    }

    // Attach input port WdogStroke

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_WdogStroke());
        ++_port
    ) {

      this->m_from_WdogStroke[_port].init();
      this->m_from_WdogStroke[_port].addCallComp(
          this,
          from_WdogStroke_static
      );
      this->m_from_WdogStroke[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_WdogStroke[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_WdogStroke[_port].setObjName(_portName);
#endif

    }

    // Initialize output port PingReturn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_PingReturn());
        ++_port
    ) {
      this->m_to_PingReturn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_PingReturn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_PingReturn[_port].setObjName(_portName);
#endif

    }

    // Initialize output port Run

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_Run());
        ++_port
    ) {
      this->m_to_Run[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_Run[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_Run[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_to_CmdDisp() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_CmdDisp));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_CmdReg() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdReg));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_CmdStatus() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdStatus));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_Log() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Log));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_to_PingReturn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_PingReturn));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_PingSend() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_PingSend));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_to_Run() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_Run));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_Time() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Time));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_Tlm() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Tlm));
  }

  NATIVE_INT_TYPE HealthTesterBase ::
    getNum_from_WdogStroke() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_WdogStroke));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    connect_to_CmdDisp(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const CmdDisp
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CmdDisp[portNum].addCallPort(CmdDisp);
  }

  void HealthTesterBase ::
    connect_to_PingReturn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputPingPort *const PingReturn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_PingReturn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_PingReturn[portNum].addCallPort(PingReturn);
  }

  void HealthTesterBase ::
    connect_to_Run(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort *const Run
    )
  {
    FW_ASSERT(portNum < this->getNum_to_Run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_Run[portNum].addCallPort(Run);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    invoke_to_PingReturn(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_to_PingReturn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_PingReturn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_PingReturn[portNum].invoke(
        key
    );
  }

  void HealthTesterBase ::
    invoke_to_Run(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(portNum < this->getNum_to_Run(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_Run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_Run[portNum].invoke(
        context
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool HealthTesterBase ::
    isConnected_to_CmdDisp(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_CmdDisp[portNum].isConnected();
  }

  bool HealthTesterBase ::
    isConnected_to_PingReturn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_PingReturn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_PingReturn[portNum].isConnected();
  }

  bool HealthTesterBase ::
    isConnected_to_Run(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_Run(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_Run[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputCmdRegPort *HealthTesterBase ::
    get_from_CmdReg(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdReg(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdReg[portNum];
  }

  Fw::InputCmdResponsePort *HealthTesterBase ::
    get_from_CmdStatus(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdStatus(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdStatus[portNum];
  }

  Fw::InputLogPort *HealthTesterBase ::
    get_from_Log(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Log(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Log[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *HealthTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Svc::InputPingPort *HealthTesterBase ::
    get_from_PingSend(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_PingSend(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_PingSend[portNum];
  }

  Fw::InputTimePort *HealthTesterBase ::
    get_from_Time(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Time(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Time[portNum];
  }

  Fw::InputTlmPort *HealthTesterBase ::
    get_from_Tlm(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Tlm(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Tlm[portNum];
  }

  Svc::InputWatchDogPort *HealthTesterBase ::
    get_from_WdogStroke(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_WdogStroke(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_WdogStroke[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    from_PingSend_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(callComp);
    _testerBase->from_PingSend_handlerBase(
        portNum,
        key
    );
  }

  void HealthTesterBase ::
    from_WdogStroke_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 code
    )
  {
    FW_ASSERT(callComp);
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(callComp);
    _testerBase->from_WdogStroke_handlerBase(
        portNum,
        code
    );
  }

  void HealthTesterBase ::
    from_CmdStatus_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void HealthTesterBase ::
    from_CmdReg_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void HealthTesterBase ::
    from_Tlm_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void HealthTesterBase ::
    from_Log_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void HealthTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void HealthTesterBase ::
    from_Time_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    HealthTesterBase* _testerBase =
      static_cast<HealthTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_PingSend->clear();
    this->fromPortHistory_WdogStroke->clear();
  }

  // ----------------------------------------------------------------------
  // From port: PingSend
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    pushFromPortEntry_PingSend(
        U32 key
    )
  {
    FromPortEntry_PingSend _e = {
      key
    };
    this->fromPortHistory_PingSend->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: WdogStroke
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    pushFromPortEntry_WdogStroke(
        U32 code
    )
  {
    FromPortEntry_WdogStroke _e = {
      code
    };
    this->fromPortHistory_WdogStroke->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    from_PingSend_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_from_PingSend(),static_cast<FwAssertArgType>(portNum));
    this->from_PingSend_handler(
        portNum,
        key
    );
  }

  void HealthTesterBase ::
    from_WdogStroke_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 code
    )
  {
    FW_ASSERT(portNum < this->getNum_from_WdogStroke(),static_cast<FwAssertArgType>(portNum));
    this->from_WdogStroke_handler(
        portNum,
        code
    );
  }

  // ----------------------------------------------------------------------
  // Command response handling
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    cmdResponseIn(
        const FwOpcodeType opCode,
        const U32 seq,
        const Fw::CmdResponse response
    )
  {
    CmdResponse e = { opCode, seq, response };
    this->cmdResponseHistory->push_back(e);
  }

  // ----------------------------------------------------------------------
  // Command: HLTH_ENABLE
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    sendCmd_HLTH_ENABLE(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        Fw::Enabled enable
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(enable);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = HealthComponentBase::OPCODE_HLTH_ENABLE + idBase;

    if (this->m_to_CmdDisp[0].isConnected()) {
      this->m_to_CmdDisp[0].invoke(
          _opcode,
          cmdSeq,
          buff
      );
    }
    else {
      printf("Test Command Output port not connected!\n");
    }

  }

  // ----------------------------------------------------------------------
  // Command: HLTH_PING_ENABLE
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    sendCmd_HLTH_PING_ENABLE(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& entry,
        Fw::Enabled enable
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(entry);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(enable);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = HealthComponentBase::OPCODE_HLTH_PING_ENABLE + idBase;

    if (this->m_to_CmdDisp[0].isConnected()) {
      this->m_to_CmdDisp[0].invoke(
          _opcode,
          cmdSeq,
          buff
      );
    }
    else {
      printf("Test Command Output port not connected!\n");
    }

  }

  // ----------------------------------------------------------------------
  // Command: HLTH_CHNG_PING
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    sendCmd_HLTH_CHNG_PING(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& entry,
        U32 warningValue,
        U32 fatalValue
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(entry);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(warningValue);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(fatalValue);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = HealthComponentBase::OPCODE_HLTH_CHNG_PING + idBase;

    if (this->m_to_CmdDisp[0].isConnected()) {
      this->m_to_CmdDisp[0].invoke(
          _opcode,
          cmdSeq,
          buff
      );
    }
    else {
      printf("Test Command Output port not connected!\n");
    }

  }


  void HealthTesterBase ::
    sendRawCmd(FwOpcodeType opcode, U32 cmdSeq, Fw::CmdArgBuffer& args) {

    const U32 idBase = this->getIdBase();
    FwOpcodeType _opcode = opcode + idBase;
    if (this->m_to_CmdDisp[0].isConnected()) {
      this->m_to_CmdDisp[0].invoke(
          _opcode,
          cmdSeq,
          args
      );
    }
    else {
      printf("Test Command Output port not connected!\n");
    }

  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    clearHistory()
  {
    this->cmdResponseHistory->clear();
    this->clearTlm();
    this->textLogHistory->clear();
    this->clearEvents();
    this->clearFromPortHistory();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    dispatchTlm(
        const FwChanIdType id,
        const Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {

    val.resetDeser();

    const U32 idBase = this->getIdBase();
    FW_ASSERT(id >= idBase, id, idBase);

    switch (id - idBase) {

      case HealthComponentBase::CHANNELID_PINGLATEWARNINGS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PingLateWarnings: %d\n", _status);
          return;
        }
        this->tlmInput_PingLateWarnings(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void HealthTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_PingLateWarnings->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: PingLateWarnings
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    tlmInput_PingLateWarnings(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_PingLateWarnings e = { timeTag, val };
    this->tlmHistory_PingLateWarnings->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    dispatchEvents(
        const FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity severity,
        Fw::LogBuffer &args
    )
  {

    args.resetDeser();

    const U32 idBase = this->getIdBase();
    FW_ASSERT(id >= idBase, id, idBase);
    switch (id - idBase) {

      case HealthComponentBase::EVENTID_HLTH_PING_WARN:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 1,_numArgs,1);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_HLTH_PING_WARN(entry);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_PING_LATE:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 1+1,_numArgs,1+1);
        // For FATAL, there is a stack size of 4 and a dummy entry.
        U8 stackArgLen;
        _status = args.deserialize(stackArgLen);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );
        FW_ASSERT(4 == stackArgLen,stackArgLen);
		U32 dummyStackArg;
        _status = args.deserialize(dummyStackArg);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );
        FW_ASSERT(0 == dummyStackArg,dummyStackArg);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_FATAL_HLTH_PING_LATE(entry);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_PING_WRONG_KEY:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 2+1,_numArgs,2+1);
        // For FATAL, there is a stack size of 4 and a dummy entry.
        U8 stackArgLen;
        _status = args.deserialize(stackArgLen);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );
        FW_ASSERT(4 == stackArgLen,stackArgLen);
		U32 dummyStackArg;
        _status = args.deserialize(dummyStackArg);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );
        FW_ASSERT(0 == dummyStackArg,dummyStackArg);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 badKey;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U32),_argSize,sizeof(U32));
        }
#endif
        _status = args.deserialize(badKey);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_FATAL_HLTH_PING_WRONG_KEY(entry, badKey);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_CHECK_ENABLE:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 1,_numArgs,1);

#endif
        Fw::Enabled enabled;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(Fw::Enabled),_argSize,sizeof(Fw::Enabled));
        }
#endif
        _status = args.deserialize(enabled);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_HLTH_CHECK_ENABLE(enabled);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_CHECK_PING:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 2,_numArgs,2);

#endif
        Fw::Enabled enabled;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(Fw::Enabled),_argSize,sizeof(Fw::Enabled));
        }
#endif
        _status = args.deserialize(enabled);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_HLTH_CHECK_PING(enabled, entry);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_CHECK_LOOKUP_ERROR:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 1,_numArgs,1);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_LO_HLTH_CHECK_LOOKUP_ERROR(entry);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_PING_UPDATED:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 3,_numArgs,3);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 warn;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U32),_argSize,sizeof(U32));
        }
#endif
        _status = args.deserialize(warn);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 fatal;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U32),_argSize,sizeof(U32));
        }
#endif
        _status = args.deserialize(fatal);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_HLTH_PING_UPDATED(entry, warn, fatal);

        break;

      }

      case HealthComponentBase::EVENTID_HLTH_PING_INVALID_VALUES:
      {

        Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;
#if FW_AMPCS_COMPATIBLE
        // Deserialize the number of arguments.
        U8 _numArgs;
        _status = args.deserialize(_numArgs);
        FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
        );
        // verify they match expected.
        FW_ASSERT(_numArgs == 3,_numArgs,3);

#endif
        Fw::LogStringArg entry;
        _status = args.deserialize(entry);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 warn;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U32),_argSize,sizeof(U32));
        }
#endif
        _status = args.deserialize(warn);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 fatal;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U32),_argSize,sizeof(U32));
        }
#endif
        _status = args.deserialize(fatal);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_HLTH_PING_INVALID_VALUES(entry, warn, fatal);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void HealthTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_HLTH_PING_WARN->clear();
    this->eventHistory_HLTH_PING_LATE->clear();
    this->eventHistory_HLTH_PING_WRONG_KEY->clear();
    this->eventHistory_HLTH_CHECK_ENABLE->clear();
    this->eventHistory_HLTH_CHECK_PING->clear();
    this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->clear();
    this->eventHistory_HLTH_PING_UPDATED->clear();
    this->eventHistory_HLTH_PING_INVALID_VALUES->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    textLogIn(
        const U32 id,
        Fw::Time &timeTag,
        const Fw::LogSeverity severity,
        const Fw::TextLogString &text
    )
  {
    TextLogEntry e = { id, timeTag, severity, text };
    textLogHistory->push_back(e);
  }

  void HealthTesterBase ::
    printTextLogHistoryEntry(
        const TextLogEntry& e,
        FILE* file
    )
  {
    const char *severityString = "UNKNOWN";
    switch (e.severity.e) {
      case Fw::LogSeverity::FATAL:
        severityString = "FATAL";
        break;
      case Fw::LogSeverity::WARNING_HI:
        severityString = "WARNING_HI";
        break;
      case Fw::LogSeverity::WARNING_LO:
        severityString = "WARNING_LO";
        break;
      case Fw::LogSeverity::COMMAND:
        severityString = "COMMAND";
        break;
      case Fw::LogSeverity::ACTIVITY_HI:
        severityString = "ACTIVITY_HI";
        break;
      case Fw::LogSeverity::ACTIVITY_LO:
        severityString = "ACTIVITY_LO";
        break;
      case Fw::LogSeverity::DIAGNOSTIC:
       severityString = "DIAGNOSTIC";
        break;
      default:
        severityString = "SEVERITY ERROR";
        break;
    }

    fprintf(
        file,
        "EVENT: (%" PRI_FwEventIdType ") (%" PRI_FwTimeBaseStoreType ":%" PRIu32 ",%" PRIu32 ") %s: %s\n",
        e.id,
        static_cast<FwTimeBaseStoreType>(e.timeTag.getTimeBase()),
        e.timeTag.getSeconds(),
        e.timeTag.getUSeconds(),
        severityString,
        e.text.toChar()
    );

  }

  void HealthTesterBase ::
    printTextLogHistory(FILE *file)
  {
    for (U32 i = 0; i < this->textLogHistory->size(); ++i) {
      this->printTextLogHistoryEntry(
          this->textLogHistory->at(i),
          file
      );
    }
  }

#endif

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_WARN
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_WARNING_HI_HLTH_PING_WARN(
        const Fw::LogStringArg& entry
    )
  {
    EventEntry_HLTH_PING_WARN e = {
      entry
    };
    eventHistory_HLTH_PING_WARN->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_LATE
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_FATAL_HLTH_PING_LATE(
        const Fw::LogStringArg& entry
    )
  {
    EventEntry_HLTH_PING_LATE e = {
      entry
    };
    eventHistory_HLTH_PING_LATE->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_WRONG_KEY
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_FATAL_HLTH_PING_WRONG_KEY(
        const Fw::LogStringArg& entry,
        U32 badKey
    )
  {
    EventEntry_HLTH_PING_WRONG_KEY e = {
      entry, badKey
    };
    eventHistory_HLTH_PING_WRONG_KEY->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_ENABLE
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_ACTIVITY_HI_HLTH_CHECK_ENABLE(
        Fw::Enabled enabled
    )
  {
    EventEntry_HLTH_CHECK_ENABLE e = {
      enabled
    };
    eventHistory_HLTH_CHECK_ENABLE->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_PING
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_ACTIVITY_HI_HLTH_CHECK_PING(
        Fw::Enabled enabled,
        const Fw::LogStringArg& entry
    )
  {
    EventEntry_HLTH_CHECK_PING e = {
      enabled, entry
    };
    eventHistory_HLTH_CHECK_PING->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_LOOKUP_ERROR
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_WARNING_LO_HLTH_CHECK_LOOKUP_ERROR(
        const Fw::LogStringArg& entry
    )
  {
    EventEntry_HLTH_CHECK_LOOKUP_ERROR e = {
      entry
    };
    eventHistory_HLTH_CHECK_LOOKUP_ERROR->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_UPDATED
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_ACTIVITY_HI_HLTH_PING_UPDATED(
        const Fw::LogStringArg& entry,
        U32 warn,
        U32 fatal
    )
  {
    EventEntry_HLTH_PING_UPDATED e = {
      entry, warn, fatal
    };
    eventHistory_HLTH_PING_UPDATED->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_INVALID_VALUES
  // ----------------------------------------------------------------------

  void HealthTesterBase ::
    logIn_WARNING_HI_HLTH_PING_INVALID_VALUES(
        const Fw::LogStringArg& entry,
        U32 warn,
        U32 fatal
    )
  {
    EventEntry_HLTH_PING_INVALID_VALUES e = {
      entry, warn, fatal
    };
    eventHistory_HLTH_PING_INVALID_VALUES->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
