// ======================================================================
// \title  ActiveRateGroup/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for ActiveRateGroup component test harness base class
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

  ActiveRateGroupTesterBase ::
    ActiveRateGroupTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize telemetry histories
    this->tlmHistory_RgMaxTime =
      new History<TlmEntry_RgMaxTime>(maxHistorySize);
    this->tlmHistory_RgCycleSlips =
      new History<TlmEntry_RgCycleSlips>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_RateGroupCycleSlip =
      new History<EventEntry_RateGroupCycleSlip>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_PingOut =
      new History<FromPortEntry_PingOut>(maxHistorySize);
    this->fromPortHistory_RateGroupMemberOut =
      new History<FromPortEntry_RateGroupMemberOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  ActiveRateGroupTesterBase ::
    ~ActiveRateGroupTesterBase()
  {
    // Destroy telemetry histories
    delete this->tlmHistory_RgMaxTime;
    delete this->tlmHistory_RgCycleSlips;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_RateGroupCycleSlip;
    // Destroy port histories
    delete this->fromPortHistory_PingOut;
    // Destroy port histories
    delete this->fromPortHistory_RateGroupMemberOut;
  }

  void ActiveRateGroupTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

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

    // Attach input port PingOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_PingOut());
        ++_port
    ) {

      this->m_from_PingOut[_port].init();
      this->m_from_PingOut[_port].addCallComp(
          this,
          from_PingOut_static
      );
      this->m_from_PingOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_PingOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_PingOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port RateGroupMemberOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_RateGroupMemberOut());
        ++_port
    ) {

      this->m_from_RateGroupMemberOut[_port].init();
      this->m_from_RateGroupMemberOut[_port].addCallComp(
          this,
          from_RateGroupMemberOut_static
      );
      this->m_from_RateGroupMemberOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_RateGroupMemberOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_RateGroupMemberOut[_port].setObjName(_portName);
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

    // Initialize output port CycleIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_CycleIn());
        ++_port
    ) {
      this->m_to_CycleIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_CycleIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_CycleIn[_port].setObjName(_portName);
#endif

    }

    // Initialize output port PingIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_PingIn());
        ++_port
    ) {
      this->m_to_PingIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_PingIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_PingIn[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_to_CycleIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_CycleIn));
  }

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_Log() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Log));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_to_PingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_PingIn));
  }

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_PingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_PingOut));
  }

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_RateGroupMemberOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_RateGroupMemberOut));
  }

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_Time() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Time));
  }

  NATIVE_INT_TYPE ActiveRateGroupTesterBase ::
    getNum_from_Tlm() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Tlm));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    connect_to_CycleIn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputCyclePort *const CycleIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CycleIn[portNum].addCallPort(CycleIn);
  }

  void ActiveRateGroupTesterBase ::
    connect_to_PingIn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputPingPort *const PingIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_PingIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_PingIn[portNum].addCallPort(PingIn);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    invoke_to_CycleIn(
        const NATIVE_INT_TYPE portNum,
        Svc::TimerVal &cycleStart
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CycleIn[portNum].invoke(
        cycleStart
    );
  }

  void ActiveRateGroupTesterBase ::
    invoke_to_PingIn(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_to_PingIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_PingIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_PingIn[portNum].invoke(
        key
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool ActiveRateGroupTesterBase ::
    isConnected_to_CycleIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_CycleIn[portNum].isConnected();
  }

  bool ActiveRateGroupTesterBase ::
    isConnected_to_PingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_PingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_PingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputLogPort *ActiveRateGroupTesterBase ::
    get_from_Log(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Log(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Log[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *ActiveRateGroupTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Svc::InputPingPort *ActiveRateGroupTesterBase ::
    get_from_PingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_PingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_PingOut[portNum];
  }

  Svc::InputSchedPort *ActiveRateGroupTesterBase ::
    get_from_RateGroupMemberOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_RateGroupMemberOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_RateGroupMemberOut[portNum];
  }

  Fw::InputTimePort *ActiveRateGroupTesterBase ::
    get_from_Time(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Time(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Time[portNum];
  }

  Fw::InputTlmPort *ActiveRateGroupTesterBase ::
    get_from_Tlm(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Tlm(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Tlm[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    from_PingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(callComp);
    _testerBase->from_PingOut_handlerBase(
        portNum,
        key
    );
  }

  void ActiveRateGroupTesterBase ::
    from_RateGroupMemberOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(callComp);
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(callComp);
    _testerBase->from_RateGroupMemberOut_handlerBase(
        portNum,
        context
    );
  }

  void ActiveRateGroupTesterBase ::
    from_Tlm_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void ActiveRateGroupTesterBase ::
    from_Log_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void ActiveRateGroupTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void ActiveRateGroupTesterBase ::
    from_Time_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    ActiveRateGroupTesterBase* _testerBase =
      static_cast<ActiveRateGroupTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_PingOut->clear();
    this->fromPortHistory_RateGroupMemberOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: PingOut
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    pushFromPortEntry_PingOut(
        U32 key
    )
  {
    FromPortEntry_PingOut _e = {
      key
    };
    this->fromPortHistory_PingOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: RateGroupMemberOut
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    pushFromPortEntry_RateGroupMemberOut(
        NATIVE_UINT_TYPE context
    )
  {
    FromPortEntry_RateGroupMemberOut _e = {
      context
    };
    this->fromPortHistory_RateGroupMemberOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    from_PingOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(portNum < this->getNum_from_PingOut(),static_cast<FwAssertArgType>(portNum));
    this->from_PingOut_handler(
        portNum,
        key
    );
  }

  void ActiveRateGroupTesterBase ::
    from_RateGroupMemberOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(portNum < this->getNum_from_RateGroupMemberOut(),static_cast<FwAssertArgType>(portNum));
    this->from_RateGroupMemberOut_handler(
        portNum,
        context
    );
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    clearHistory()
  {
    this->clearTlm();
    this->textLogHistory->clear();
    this->clearEvents();
    this->clearFromPortHistory();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
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

      case ActiveRateGroupComponentBase::CHANNELID_RGMAXTIME:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing RgMaxTime: %d\n", _status);
          return;
        }
        this->tlmInput_RgMaxTime(timeTag, arg);
        break;
      }

      case ActiveRateGroupComponentBase::CHANNELID_RGCYCLESLIPS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing RgCycleSlips: %d\n", _status);
          return;
        }
        this->tlmInput_RgCycleSlips(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void ActiveRateGroupTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_RgMaxTime->clear();
    this->tlmHistory_RgCycleSlips->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: RgMaxTime
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    tlmInput_RgMaxTime(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_RgMaxTime e = { timeTag, val };
    this->tlmHistory_RgMaxTime->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: RgCycleSlips
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    tlmInput_RgCycleSlips(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_RgCycleSlips e = { timeTag, val };
    this->tlmHistory_RgCycleSlips->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
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

      case ActiveRateGroupComponentBase::EVENTID_RATEGROUPSTARTED:
      {

#if FW_AMPCS_COMPATIBLE
        // For AMPCS, decode zero arguments
        Fw::SerializeStatus _zero_status = Fw::FW_SERIALIZE_OK;
        U8 _noArgs;
        _zero_status = args.deserialize(_noArgs);
        FW_ASSERT(
            _zero_status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_zero_status)
        );
#endif
        this->logIn_DIAGNOSTIC_RateGroupStarted();

        break;

      }

      case ActiveRateGroupComponentBase::EVENTID_RATEGROUPCYCLESLIP:
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
        U32 cycle;
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
        _status = args.deserialize(cycle);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_RateGroupCycleSlip(cycle);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void ActiveRateGroupTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventsSize_RateGroupStarted = 0;
    this->eventHistory_RateGroupCycleSlip->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
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

  void ActiveRateGroupTesterBase ::
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

  void ActiveRateGroupTesterBase ::
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
  // Event: RateGroupStarted
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    logIn_DIAGNOSTIC_RateGroupStarted(

    )
  {
    ++this->eventsSize_RateGroupStarted;
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: RateGroupCycleSlip
  // ----------------------------------------------------------------------

  void ActiveRateGroupTesterBase ::
    logIn_WARNING_HI_RateGroupCycleSlip(
        U32 cycle
    )
  {
    EventEntry_RateGroupCycleSlip e = {
      cycle
    };
    eventHistory_RateGroupCycleSlip->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
