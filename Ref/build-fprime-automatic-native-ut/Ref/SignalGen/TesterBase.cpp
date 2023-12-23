// ======================================================================
// \title  SignalGen/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for SignalGen component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdlib>
#include <cstring>
#include "TesterBase.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  SignalGenTesterBase ::
    SignalGenTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize telemetry histories
    this->tlmHistory_Type =
      new History<TlmEntry_Type>(maxHistorySize);
    this->tlmHistory_Output =
      new History<TlmEntry_Output>(maxHistorySize);
    this->tlmHistory_PairOutput =
      new History<TlmEntry_PairOutput>(maxHistorySize);
    this->tlmHistory_History =
      new History<TlmEntry_History>(maxHistorySize);
    this->tlmHistory_PairHistory =
      new History<TlmEntry_PairHistory>(maxHistorySize);
    this->tlmHistory_Info =
      new History<TlmEntry_Info>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_SignalGen_SettingsChanged =
      new History<EventEntry_SignalGen_SettingsChanged>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  SignalGenTesterBase ::
    ~SignalGenTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy telemetry histories
    delete this->tlmHistory_Type;
    delete this->tlmHistory_Output;
    delete this->tlmHistory_PairOutput;
    delete this->tlmHistory_History;
    delete this->tlmHistory_PairHistory;
    delete this->tlmHistory_Info;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_SignalGen_SettingsChanged;
  }

  void SignalGenTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port cmdRegOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_cmdRegOut());
        ++_port
    ) {

      this->m_from_cmdRegOut[_port].init();
      this->m_from_cmdRegOut[_port].addCallComp(
          this,
          from_cmdRegOut_static
      );
      this->m_from_cmdRegOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_cmdRegOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_cmdRegOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port cmdResponseOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_cmdResponseOut());
        ++_port
    ) {

      this->m_from_cmdResponseOut[_port].init();
      this->m_from_cmdResponseOut[_port].addCallComp(
          this,
          from_cmdResponseOut_static
      );
      this->m_from_cmdResponseOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_cmdResponseOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_cmdResponseOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port logOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_logOut());
        ++_port
    ) {

      this->m_from_logOut[_port].init();
      this->m_from_logOut[_port].addCallComp(
          this,
          from_logOut_static
      );
      this->m_from_logOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_logOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_logOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port logTextOut

#if FW_ENABLE_TEXT_LOGGING == 1
    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_logTextOut());
        ++_port
    ) {

      this->m_from_logTextOut[_port].init();
      this->m_from_logTextOut[_port].addCallComp(
          this,
          from_logTextOut_static
      );
      this->m_from_logTextOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_logTextOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_logTextOut[_port].setObjName(_portName);
#endif

    }
#endif

    // Attach input port timeCaller

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_timeCaller());
        ++_port
    ) {

      this->m_from_timeCaller[_port].init();
      this->m_from_timeCaller[_port].addCallComp(
          this,
          from_timeCaller_static
      );
      this->m_from_timeCaller[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_timeCaller[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_timeCaller[_port].setObjName(_portName);
#endif

    }

    // Attach input port tlmOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_tlmOut());
        ++_port
    ) {

      this->m_from_tlmOut[_port].init();
      this->m_from_tlmOut[_port].addCallComp(
          this,
          from_tlmOut_static
      );
      this->m_from_tlmOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_tlmOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_tlmOut[_port].setObjName(_portName);
#endif

    }

    // Initialize output port schedIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_schedIn());
        ++_port
    ) {
      this->m_to_schedIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_schedIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_schedIn[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_to_cmdIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_cmdIn));
  }

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_cmdRegOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdRegOut));
  }

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_cmdResponseOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdResponseOut));
  }

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_logOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_logOut));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_logTextOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_logTextOut));
  }
#endif

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_to_schedIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_schedIn));
  }

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_timeCaller() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeCaller));
  }

  NATIVE_INT_TYPE SignalGenTesterBase ::
    getNum_from_tlmOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    connect_to_cmdIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const cmdIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_cmdIn[portNum].addCallPort(cmdIn);
  }

  void SignalGenTesterBase ::
    connect_to_schedIn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort *const schedIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_schedIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_schedIn[portNum].addCallPort(schedIn);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    invoke_to_schedIn(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(portNum < this->getNum_to_schedIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_schedIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_schedIn[portNum].invoke(
        context
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool SignalGenTesterBase ::
    isConnected_to_cmdIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_cmdIn[portNum].isConnected();
  }

  bool SignalGenTesterBase ::
    isConnected_to_schedIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_schedIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_schedIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputCmdRegPort *SignalGenTesterBase ::
    get_from_cmdRegOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdRegOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdRegOut[portNum];
  }

  Fw::InputCmdResponsePort *SignalGenTesterBase ::
    get_from_cmdResponseOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdResponseOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdResponseOut[portNum];
  }

  Fw::InputLogPort *SignalGenTesterBase ::
    get_from_logOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_logOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_logOut[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *SignalGenTesterBase ::
    get_from_logTextOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_logTextOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_logTextOut[portNum];
  }
#endif

  Fw::InputTimePort *SignalGenTesterBase ::
    get_from_timeCaller(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_timeCaller(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_timeCaller[portNum];
  }

  Fw::InputTlmPort *SignalGenTesterBase ::
    get_from_tlmOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_tlmOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_tlmOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    from_cmdResponseOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    SignalGenTesterBase* _testerBase =
      static_cast<SignalGenTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void SignalGenTesterBase ::
    from_cmdRegOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void SignalGenTesterBase ::
    from_tlmOut_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    SignalGenTesterBase* _testerBase =
      static_cast<SignalGenTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void SignalGenTesterBase ::
    from_logOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    SignalGenTesterBase* _testerBase =
      static_cast<SignalGenTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void SignalGenTesterBase ::
    from_logTextOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    SignalGenTesterBase* _testerBase =
      static_cast<SignalGenTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void SignalGenTesterBase ::
    from_timeCaller_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    SignalGenTesterBase* _testerBase =
      static_cast<SignalGenTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Command response handling
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
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
  // Command: SignalGen_Settings
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    sendCmd_SignalGen_Settings(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        U32 Frequency,
        F32 Amplitude,
        F32 Phase,
        Ref::SignalType SigType
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(Frequency);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(Amplitude);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(Phase);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(SigType);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = SignalGenComponentBase::OPCODE_SIGNALGEN_SETTINGS + idBase;

    if (this->m_to_cmdIn[0].isConnected()) {
      this->m_to_cmdIn[0].invoke(
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
  // Command: SignalGen_Toggle
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    sendCmd_SignalGen_Toggle(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = SignalGenComponentBase::OPCODE_SIGNALGEN_TOGGLE + idBase;

    if (this->m_to_cmdIn[0].isConnected()) {
      this->m_to_cmdIn[0].invoke(
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
  // Command: SignalGen_Skip
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    sendCmd_SignalGen_Skip(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = SignalGenComponentBase::OPCODE_SIGNALGEN_SKIP + idBase;

    if (this->m_to_cmdIn[0].isConnected()) {
      this->m_to_cmdIn[0].invoke(
          _opcode,
          cmdSeq,
          buff
      );
    }
    else {
      printf("Test Command Output port not connected!\n");
    }

  }


  void SignalGenTesterBase ::
    sendRawCmd(FwOpcodeType opcode, U32 cmdSeq, Fw::CmdArgBuffer& args) {

    const U32 idBase = this->getIdBase();
    FwOpcodeType _opcode = opcode + idBase;
    if (this->m_to_cmdIn[0].isConnected()) {
      this->m_to_cmdIn[0].invoke(
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

  void SignalGenTesterBase ::
    clearHistory()
  {
    this->cmdResponseHistory->clear();
    this->clearTlm();
    this->textLogHistory->clear();
    this->clearEvents();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
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

      case SignalGenComponentBase::CHANNELID_TYPE:
      {
        Ref::SignalType arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing Type: %d\n", _status);
          return;
        }
        this->tlmInput_Type(timeTag, arg);
        break;
      }

      case SignalGenComponentBase::CHANNELID_OUTPUT:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing Output: %d\n", _status);
          return;
        }
        this->tlmInput_Output(timeTag, arg);
        break;
      }

      case SignalGenComponentBase::CHANNELID_PAIROUTPUT:
      {
        Ref::SignalPair arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PairOutput: %d\n", _status);
          return;
        }
        this->tlmInput_PairOutput(timeTag, arg);
        break;
      }

      case SignalGenComponentBase::CHANNELID_HISTORY:
      {
        Ref::SignalSet arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing History: %d\n", _status);
          return;
        }
        this->tlmInput_History(timeTag, arg);
        break;
      }

      case SignalGenComponentBase::CHANNELID_PAIRHISTORY:
      {
        Ref::SignalPairSet arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PairHistory: %d\n", _status);
          return;
        }
        this->tlmInput_PairHistory(timeTag, arg);
        break;
      }

      case SignalGenComponentBase::CHANNELID_INFO:
      {
        Ref::SignalInfo arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing Info: %d\n", _status);
          return;
        }
        this->tlmInput_Info(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void SignalGenTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_Type->clear();
    this->tlmHistory_Output->clear();
    this->tlmHistory_PairOutput->clear();
    this->tlmHistory_History->clear();
    this->tlmHistory_PairHistory->clear();
    this->tlmHistory_Info->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: Type
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_Type(
        const Fw::Time& timeTag,
        const Ref::SignalType& val
    )
  {
    TlmEntry_Type e = { timeTag, val };
    this->tlmHistory_Type->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: Output
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_Output(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_Output e = { timeTag, val };
    this->tlmHistory_Output->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: PairOutput
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_PairOutput(
        const Fw::Time& timeTag,
        const Ref::SignalPair& val
    )
  {
    TlmEntry_PairOutput e = { timeTag, val };
    this->tlmHistory_PairOutput->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: History
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_History(
        const Fw::Time& timeTag,
        const Ref::SignalSet& val
    )
  {
    TlmEntry_History e = { timeTag, val };
    this->tlmHistory_History->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: PairHistory
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_PairHistory(
        const Fw::Time& timeTag,
        const Ref::SignalPairSet& val
    )
  {
    TlmEntry_PairHistory e = { timeTag, val };
    this->tlmHistory_PairHistory->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: Info
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    tlmInput_Info(
        const Fw::Time& timeTag,
        const Ref::SignalInfo& val
    )
  {
    TlmEntry_Info e = { timeTag, val };
    this->tlmHistory_Info->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
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

      case SignalGenComponentBase::EVENTID_SIGNALGEN_SETTINGSCHANGED:
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
        FW_ASSERT(_numArgs == 4,_numArgs,4);

#endif
        U32 Frequency;
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
        _status = args.deserialize(Frequency);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        F32 Amplitude;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(F32),_argSize,sizeof(F32));
        }
#endif
        _status = args.deserialize(Amplitude);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        F32 Phase;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(F32),_argSize,sizeof(F32));
        }
#endif
        _status = args.deserialize(Phase);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Ref::SignalType SignalType;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(Ref::SignalType),_argSize,sizeof(Ref::SignalType));
        }
#endif
        _status = args.deserialize(SignalType);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_LO_SignalGen_SettingsChanged(Frequency, Amplitude, Phase, SignalType);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void SignalGenTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_SignalGen_SettingsChanged->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
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

  void SignalGenTesterBase ::
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

  void SignalGenTesterBase ::
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
  // Event: SignalGen_SettingsChanged
  // ----------------------------------------------------------------------

  void SignalGenTesterBase ::
    logIn_ACTIVITY_LO_SignalGen_SettingsChanged(
        U32 Frequency,
        F32 Amplitude,
        F32 Phase,
        Ref::SignalType SignalType
    )
  {
    EventEntry_SignalGen_SettingsChanged e = {
      Frequency, Amplitude, Phase, SignalType
    };
    eventHistory_SignalGen_SettingsChanged->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Ref
