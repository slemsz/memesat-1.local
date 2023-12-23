// ======================================================================
// \title  ActiveLogger/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for ActiveLogger component test harness base class
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

  ActiveLoggerTesterBase ::
    ActiveLoggerTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_SEVERITY_FILTER_STATE =
      new History<EventEntry_SEVERITY_FILTER_STATE>(maxHistorySize);
    this->eventHistory_ID_FILTER_ENABLED =
      new History<EventEntry_ID_FILTER_ENABLED>(maxHistorySize);
    this->eventHistory_ID_FILTER_LIST_FULL =
      new History<EventEntry_ID_FILTER_LIST_FULL>(maxHistorySize);
    this->eventHistory_ID_FILTER_REMOVED =
      new History<EventEntry_ID_FILTER_REMOVED>(maxHistorySize);
    this->eventHistory_ID_FILTER_NOT_FOUND =
      new History<EventEntry_ID_FILTER_NOT_FOUND>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_FatalAnnounce =
      new History<FromPortEntry_FatalAnnounce>(maxHistorySize);
    this->fromPortHistory_PktSend =
      new History<FromPortEntry_PktSend>(maxHistorySize);
    this->fromPortHistory_pingOut =
      new History<FromPortEntry_pingOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  ActiveLoggerTesterBase ::
    ~ActiveLoggerTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_SEVERITY_FILTER_STATE;
    delete this->eventHistory_ID_FILTER_ENABLED;
    delete this->eventHistory_ID_FILTER_LIST_FULL;
    delete this->eventHistory_ID_FILTER_REMOVED;
    delete this->eventHistory_ID_FILTER_NOT_FOUND;
    // Destroy port histories
    delete this->fromPortHistory_FatalAnnounce;
    // Destroy port histories
    delete this->fromPortHistory_PktSend;
    // Destroy port histories
    delete this->fromPortHistory_pingOut;
  }

  void ActiveLoggerTesterBase ::
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

    // Attach input port FatalAnnounce

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_FatalAnnounce());
        ++_port
    ) {

      this->m_from_FatalAnnounce[_port].init();
      this->m_from_FatalAnnounce[_port].addCallComp(
          this,
          from_FatalAnnounce_static
      );
      this->m_from_FatalAnnounce[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_FatalAnnounce[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_FatalAnnounce[_port].setObjName(_portName);
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

    // Attach input port PktSend

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_PktSend());
        ++_port
    ) {

      this->m_from_PktSend[_port].init();
      this->m_from_PktSend[_port].addCallComp(
          this,
          from_PktSend_static
      );
      this->m_from_PktSend[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_PktSend[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_PktSend[_port].setObjName(_portName);
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

    // Attach input port pingOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_pingOut());
        ++_port
    ) {

      this->m_from_pingOut[_port].init();
      this->m_from_pingOut[_port].addCallComp(
          this,
          from_pingOut_static
      );
      this->m_from_pingOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_pingOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_pingOut[_port].setObjName(_portName);
#endif

    }

    // Initialize output port LogRecv

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_LogRecv());
        ++_port
    ) {
      this->m_to_LogRecv[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_LogRecv[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_LogRecv[_port].setObjName(_portName);
#endif

    }

    // Initialize output port pingIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_pingIn());
        ++_port
    ) {
      this->m_to_pingIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_pingIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_pingIn[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_to_CmdDisp() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_CmdDisp));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_CmdReg() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdReg));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_CmdStatus() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdStatus));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_FatalAnnounce() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_FatalAnnounce));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_Log() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Log));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_to_LogRecv() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_LogRecv));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_PktSend() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_PktSend));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_Time() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Time));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_to_pingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_pingIn));
  }

  NATIVE_INT_TYPE ActiveLoggerTesterBase ::
    getNum_from_pingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_pingOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    connect_to_CmdDisp(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const CmdDisp
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CmdDisp[portNum].addCallPort(CmdDisp);
  }

  void ActiveLoggerTesterBase ::
    connect_to_LogRecv(
        const NATIVE_INT_TYPE portNum,
        Fw::InputLogPort *const LogRecv
    )
  {
    FW_ASSERT(portNum < this->getNum_to_LogRecv(),static_cast<FwAssertArgType>(portNum));
    this->m_to_LogRecv[portNum].addCallPort(LogRecv);
  }

  void ActiveLoggerTesterBase ::
    connect_to_pingIn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputPingPort *const pingIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_pingIn[portNum].addCallPort(pingIn);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    invoke_to_LogRecv(
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    FW_ASSERT(portNum < this->getNum_to_LogRecv(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_LogRecv(),static_cast<FwAssertArgType>(portNum));
    this->m_to_LogRecv[portNum].invoke(
        id, timeTag, severity, args
    );
  }

  void ActiveLoggerTesterBase ::
    invoke_to_pingIn(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_pingIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_pingIn[portNum].invoke(
        key
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool ActiveLoggerTesterBase ::
    isConnected_to_CmdDisp(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_CmdDisp[portNum].isConnected();
  }

  bool ActiveLoggerTesterBase ::
    isConnected_to_LogRecv(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_LogRecv(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_LogRecv[portNum].isConnected();
  }

  bool ActiveLoggerTesterBase ::
    isConnected_to_pingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_pingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputCmdRegPort *ActiveLoggerTesterBase ::
    get_from_CmdReg(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdReg(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdReg[portNum];
  }

  Fw::InputCmdResponsePort *ActiveLoggerTesterBase ::
    get_from_CmdStatus(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdStatus(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdStatus[portNum];
  }

  Svc::InputFatalEventPort *ActiveLoggerTesterBase ::
    get_from_FatalAnnounce(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_FatalAnnounce(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_FatalAnnounce[portNum];
  }

  Fw::InputLogPort *ActiveLoggerTesterBase ::
    get_from_Log(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Log(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Log[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *ActiveLoggerTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Fw::InputComPort *ActiveLoggerTesterBase ::
    get_from_PktSend(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_PktSend(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_PktSend[portNum];
  }

  Fw::InputTimePort *ActiveLoggerTesterBase ::
    get_from_Time(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Time(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Time[portNum];
  }

  Svc::InputPingPort *ActiveLoggerTesterBase ::
    get_from_pingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_pingOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    from_FatalAnnounce_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType Id
    )
  {
    FW_ASSERT(callComp);
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(callComp);
    _testerBase->from_FatalAnnounce_handlerBase(
        portNum,
        Id
    );
  }

  void ActiveLoggerTesterBase ::
    from_PktSend_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(callComp);
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(callComp);
    _testerBase->from_PktSend_handlerBase(
        portNum,
        data, context
    );
  }

  void ActiveLoggerTesterBase ::
    from_pingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(callComp);
    _testerBase->from_pingOut_handlerBase(
        portNum,
        key
    );
  }

  void ActiveLoggerTesterBase ::
    from_CmdStatus_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void ActiveLoggerTesterBase ::
    from_CmdReg_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void ActiveLoggerTesterBase ::
    from_Log_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void ActiveLoggerTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void ActiveLoggerTesterBase ::
    from_Time_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    ActiveLoggerTesterBase* _testerBase =
      static_cast<ActiveLoggerTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_FatalAnnounce->clear();
    this->fromPortHistory_PktSend->clear();
    this->fromPortHistory_pingOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: FatalAnnounce
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    pushFromPortEntry_FatalAnnounce(
        FwEventIdType Id
    )
  {
    FromPortEntry_FatalAnnounce _e = {
      Id
    };
    this->fromPortHistory_FatalAnnounce->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: PktSend
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    pushFromPortEntry_PktSend(
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FromPortEntry_PktSend _e = {
      data, context
    };
    this->fromPortHistory_PktSend->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    pushFromPortEntry_pingOut(
        U32 key
    )
  {
    FromPortEntry_pingOut _e = {
      key
    };
    this->fromPortHistory_pingOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    from_FatalAnnounce_handlerBase(
        const NATIVE_INT_TYPE portNum,
        FwEventIdType Id
    )
  {
    FW_ASSERT(portNum < this->getNum_from_FatalAnnounce(),static_cast<FwAssertArgType>(portNum));
    this->from_FatalAnnounce_handler(
        portNum,
        Id
    );
  }

  void ActiveLoggerTesterBase ::
    from_PktSend_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(portNum < this->getNum_from_PktSend(),static_cast<FwAssertArgType>(portNum));
    this->from_PktSend_handler(
        portNum,
        data, context
    );
  }

  void ActiveLoggerTesterBase ::
    from_pingOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    this->from_pingOut_handler(
        portNum,
        key
    );
  }

  // ----------------------------------------------------------------------
  // Command response handling
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
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
  // Command: SET_EVENT_FILTER
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    sendCmd_SET_EVENT_FILTER(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        Svc::ActiveLogger_FilterSeverity filterLevel,
        Svc::ActiveLogger_Enabled filterEnabled
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(filterLevel);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(filterEnabled);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = ActiveLoggerComponentBase::OPCODE_SET_EVENT_FILTER + idBase;

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
  // Command: SET_ID_FILTER
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    sendCmd_SET_ID_FILTER(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        U32 ID,
        Svc::ActiveLogger_Enabled idFilterEnabled
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(ID);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(idFilterEnabled);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = ActiveLoggerComponentBase::OPCODE_SET_ID_FILTER + idBase;

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
  // Command: DUMP_FILTER_STATE
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    sendCmd_DUMP_FILTER_STATE(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = ActiveLoggerComponentBase::OPCODE_DUMP_FILTER_STATE + idBase;

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


  void ActiveLoggerTesterBase ::
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

  void ActiveLoggerTesterBase ::
    clearHistory()
  {
    this->cmdResponseHistory->clear();
    this->textLogHistory->clear();
    this->clearEvents();
    this->clearFromPortHistory();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
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

      case ActiveLoggerComponentBase::EVENTID_SEVERITY_FILTER_STATE:
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
        Svc::ActiveLogger_FilterSeverity severity;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(Svc::ActiveLogger_FilterSeverity),_argSize,sizeof(Svc::ActiveLogger_FilterSeverity));
        }
#endif
        _status = args.deserialize(severity);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        bool enabled;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(bool),_argSize,sizeof(bool));
        }
#endif
        _status = args.deserialize(enabled);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_LO_SEVERITY_FILTER_STATE(severity, enabled);

        break;

      }

      case ActiveLoggerComponentBase::EVENTID_ID_FILTER_ENABLED:
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
        U32 ID;
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
        _status = args.deserialize(ID);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_ID_FILTER_ENABLED(ID);

        break;

      }

      case ActiveLoggerComponentBase::EVENTID_ID_FILTER_LIST_FULL:
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
        U32 ID;
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
        _status = args.deserialize(ID);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_LO_ID_FILTER_LIST_FULL(ID);

        break;

      }

      case ActiveLoggerComponentBase::EVENTID_ID_FILTER_REMOVED:
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
        U32 ID;
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
        _status = args.deserialize(ID);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_ID_FILTER_REMOVED(ID);

        break;

      }

      case ActiveLoggerComponentBase::EVENTID_ID_FILTER_NOT_FOUND:
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
        U32 ID;
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
        _status = args.deserialize(ID);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_LO_ID_FILTER_NOT_FOUND(ID);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void ActiveLoggerTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_SEVERITY_FILTER_STATE->clear();
    this->eventHistory_ID_FILTER_ENABLED->clear();
    this->eventHistory_ID_FILTER_LIST_FULL->clear();
    this->eventHistory_ID_FILTER_REMOVED->clear();
    this->eventHistory_ID_FILTER_NOT_FOUND->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
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

  void ActiveLoggerTesterBase ::
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

  void ActiveLoggerTesterBase ::
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
  // Event: SEVERITY_FILTER_STATE
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    logIn_ACTIVITY_LO_SEVERITY_FILTER_STATE(
        Svc::ActiveLogger_FilterSeverity severity,
        bool enabled
    )
  {
    EventEntry_SEVERITY_FILTER_STATE e = {
      severity, enabled
    };
    eventHistory_SEVERITY_FILTER_STATE->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_ENABLED
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    logIn_ACTIVITY_HI_ID_FILTER_ENABLED(
        U32 ID
    )
  {
    EventEntry_ID_FILTER_ENABLED e = {
      ID
    };
    eventHistory_ID_FILTER_ENABLED->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_LIST_FULL
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    logIn_WARNING_LO_ID_FILTER_LIST_FULL(
        U32 ID
    )
  {
    EventEntry_ID_FILTER_LIST_FULL e = {
      ID
    };
    eventHistory_ID_FILTER_LIST_FULL->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_REMOVED
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    logIn_ACTIVITY_HI_ID_FILTER_REMOVED(
        U32 ID
    )
  {
    EventEntry_ID_FILTER_REMOVED e = {
      ID
    };
    eventHistory_ID_FILTER_REMOVED->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_NOT_FOUND
  // ----------------------------------------------------------------------

  void ActiveLoggerTesterBase ::
    logIn_WARNING_LO_ID_FILTER_NOT_FOUND(
        U32 ID
    )
  {
    EventEntry_ID_FILTER_NOT_FOUND e = {
      ID
    };
    eventHistory_ID_FILTER_NOT_FOUND->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
