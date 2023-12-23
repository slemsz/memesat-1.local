// ======================================================================
// \title  SystemResources/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for SystemResources component test harness base class
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

  SystemResourcesTesterBase ::
    SystemResourcesTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize telemetry histories
    this->tlmHistory_MEMORY_TOTAL =
      new History<TlmEntry_MEMORY_TOTAL>(maxHistorySize);
    this->tlmHistory_MEMORY_USED =
      new History<TlmEntry_MEMORY_USED>(maxHistorySize);
    this->tlmHistory_NON_VOLATILE_TOTAL =
      new History<TlmEntry_NON_VOLATILE_TOTAL>(maxHistorySize);
    this->tlmHistory_NON_VOLATILE_FREE =
      new History<TlmEntry_NON_VOLATILE_FREE>(maxHistorySize);
    this->tlmHistory_CPU =
      new History<TlmEntry_CPU>(maxHistorySize);
    this->tlmHistory_CPU_00 =
      new History<TlmEntry_CPU_00>(maxHistorySize);
    this->tlmHistory_CPU_01 =
      new History<TlmEntry_CPU_01>(maxHistorySize);
    this->tlmHistory_CPU_02 =
      new History<TlmEntry_CPU_02>(maxHistorySize);
    this->tlmHistory_CPU_03 =
      new History<TlmEntry_CPU_03>(maxHistorySize);
    this->tlmHistory_CPU_04 =
      new History<TlmEntry_CPU_04>(maxHistorySize);
    this->tlmHistory_CPU_05 =
      new History<TlmEntry_CPU_05>(maxHistorySize);
    this->tlmHistory_CPU_06 =
      new History<TlmEntry_CPU_06>(maxHistorySize);
    this->tlmHistory_CPU_07 =
      new History<TlmEntry_CPU_07>(maxHistorySize);
    this->tlmHistory_CPU_08 =
      new History<TlmEntry_CPU_08>(maxHistorySize);
    this->tlmHistory_CPU_09 =
      new History<TlmEntry_CPU_09>(maxHistorySize);
    this->tlmHistory_CPU_10 =
      new History<TlmEntry_CPU_10>(maxHistorySize);
    this->tlmHistory_CPU_11 =
      new History<TlmEntry_CPU_11>(maxHistorySize);
    this->tlmHistory_CPU_12 =
      new History<TlmEntry_CPU_12>(maxHistorySize);
    this->tlmHistory_CPU_13 =
      new History<TlmEntry_CPU_13>(maxHistorySize);
    this->tlmHistory_CPU_14 =
      new History<TlmEntry_CPU_14>(maxHistorySize);
    this->tlmHistory_CPU_15 =
      new History<TlmEntry_CPU_15>(maxHistorySize);
    this->tlmHistory_FRAMEWORK_VERSION =
      new History<TlmEntry_FRAMEWORK_VERSION>(maxHistorySize);
    this->tlmHistory_PROJECT_VERSION =
      new History<TlmEntry_PROJECT_VERSION>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_FRAMEWORK_VERSION =
      new History<EventEntry_FRAMEWORK_VERSION>(maxHistorySize);
    this->eventHistory_PROJECT_VERSION =
      new History<EventEntry_PROJECT_VERSION>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  SystemResourcesTesterBase ::
    ~SystemResourcesTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy telemetry histories
    delete this->tlmHistory_MEMORY_TOTAL;
    delete this->tlmHistory_MEMORY_USED;
    delete this->tlmHistory_NON_VOLATILE_TOTAL;
    delete this->tlmHistory_NON_VOLATILE_FREE;
    delete this->tlmHistory_CPU;
    delete this->tlmHistory_CPU_00;
    delete this->tlmHistory_CPU_01;
    delete this->tlmHistory_CPU_02;
    delete this->tlmHistory_CPU_03;
    delete this->tlmHistory_CPU_04;
    delete this->tlmHistory_CPU_05;
    delete this->tlmHistory_CPU_06;
    delete this->tlmHistory_CPU_07;
    delete this->tlmHistory_CPU_08;
    delete this->tlmHistory_CPU_09;
    delete this->tlmHistory_CPU_10;
    delete this->tlmHistory_CPU_11;
    delete this->tlmHistory_CPU_12;
    delete this->tlmHistory_CPU_13;
    delete this->tlmHistory_CPU_14;
    delete this->tlmHistory_CPU_15;
    delete this->tlmHistory_FRAMEWORK_VERSION;
    delete this->tlmHistory_PROJECT_VERSION;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_FRAMEWORK_VERSION;
    delete this->eventHistory_PROJECT_VERSION;
  }

  void SystemResourcesTesterBase ::
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

    // Initialize output port run

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_run());
        ++_port
    ) {
      this->m_to_run[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_run[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_run[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_to_CmdDisp() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_CmdDisp));
  }

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_CmdReg() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdReg));
  }

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_CmdStatus() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CmdStatus));
  }

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_Log() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Log));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_Time() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Time));
  }

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_from_Tlm() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_Tlm));
  }

  NATIVE_INT_TYPE SystemResourcesTesterBase ::
    getNum_to_run() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_run));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    connect_to_CmdDisp(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const CmdDisp
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CmdDisp[portNum].addCallPort(CmdDisp);
  }

  void SystemResourcesTesterBase ::
    connect_to_run(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort *const run
    )
  {
    FW_ASSERT(portNum < this->getNum_to_run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_run[portNum].addCallPort(run);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    invoke_to_run(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(portNum < this->getNum_to_run(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_run[portNum].invoke(
        context
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool SystemResourcesTesterBase ::
    isConnected_to_CmdDisp(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_CmdDisp(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_CmdDisp[portNum].isConnected();
  }

  bool SystemResourcesTesterBase ::
    isConnected_to_run(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_run(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_run[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputCmdRegPort *SystemResourcesTesterBase ::
    get_from_CmdReg(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdReg(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdReg[portNum];
  }

  Fw::InputCmdResponsePort *SystemResourcesTesterBase ::
    get_from_CmdStatus(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CmdStatus(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CmdStatus[portNum];
  }

  Fw::InputLogPort *SystemResourcesTesterBase ::
    get_from_Log(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Log(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Log[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *SystemResourcesTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Fw::InputTimePort *SystemResourcesTesterBase ::
    get_from_Time(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Time(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Time[portNum];
  }

  Fw::InputTlmPort *SystemResourcesTesterBase ::
    get_from_Tlm(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_Tlm(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_Tlm[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    from_CmdStatus_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    SystemResourcesTesterBase* _testerBase =
      static_cast<SystemResourcesTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void SystemResourcesTesterBase ::
    from_CmdReg_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void SystemResourcesTesterBase ::
    from_Tlm_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    SystemResourcesTesterBase* _testerBase =
      static_cast<SystemResourcesTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void SystemResourcesTesterBase ::
    from_Log_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    SystemResourcesTesterBase* _testerBase =
      static_cast<SystemResourcesTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void SystemResourcesTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    SystemResourcesTesterBase* _testerBase =
      static_cast<SystemResourcesTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void SystemResourcesTesterBase ::
    from_Time_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    SystemResourcesTesterBase* _testerBase =
      static_cast<SystemResourcesTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Command response handling
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
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
  // Command: ENABLE
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    sendCmd_ENABLE(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        Svc::SystemResourceEnabled enable
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
    _opcode = SystemResourcesComponentBase::OPCODE_ENABLE + idBase;

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
  // Command: VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    sendCmd_VERSION(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = SystemResourcesComponentBase::OPCODE_VERSION + idBase;

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


  void SystemResourcesTesterBase ::
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

  void SystemResourcesTesterBase ::
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

  void SystemResourcesTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
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

      case SystemResourcesComponentBase::CHANNELID_MEMORY_TOTAL:
      {
        U64 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing MEMORY_TOTAL: %d\n", _status);
          return;
        }
        this->tlmInput_MEMORY_TOTAL(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_MEMORY_USED:
      {
        U64 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing MEMORY_USED: %d\n", _status);
          return;
        }
        this->tlmInput_MEMORY_USED(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_NON_VOLATILE_TOTAL:
      {
        U64 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing NON_VOLATILE_TOTAL: %d\n", _status);
          return;
        }
        this->tlmInput_NON_VOLATILE_TOTAL(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_NON_VOLATILE_FREE:
      {
        U64 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing NON_VOLATILE_FREE: %d\n", _status);
          return;
        }
        this->tlmInput_NON_VOLATILE_FREE(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU: %d\n", _status);
          return;
        }
        this->tlmInput_CPU(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_00:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_00: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_00(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_01:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_01: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_01(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_02:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_02: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_02(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_03:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_03: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_03(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_04:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_04: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_04(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_05:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_05: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_05(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_06:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_06: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_06(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_07:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_07: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_07(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_08:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_08: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_08(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_09:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_09: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_09(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_10:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_10: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_10(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_11:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_11: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_11(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_12:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_12: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_12(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_13:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_13: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_13(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_14:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_14: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_14(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_CPU_15:
      {
        F32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CPU_15: %d\n", _status);
          return;
        }
        this->tlmInput_CPU_15(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_FRAMEWORK_VERSION:
      {
        Fw::TlmString arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing FRAMEWORK_VERSION: %d\n", _status);
          return;
        }
        this->tlmInput_FRAMEWORK_VERSION(timeTag, arg);
        break;
      }

      case SystemResourcesComponentBase::CHANNELID_PROJECT_VERSION:
      {
        Fw::TlmString arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PROJECT_VERSION: %d\n", _status);
          return;
        }
        this->tlmInput_PROJECT_VERSION(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void SystemResourcesTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_MEMORY_TOTAL->clear();
    this->tlmHistory_MEMORY_USED->clear();
    this->tlmHistory_NON_VOLATILE_TOTAL->clear();
    this->tlmHistory_NON_VOLATILE_FREE->clear();
    this->tlmHistory_CPU->clear();
    this->tlmHistory_CPU_00->clear();
    this->tlmHistory_CPU_01->clear();
    this->tlmHistory_CPU_02->clear();
    this->tlmHistory_CPU_03->clear();
    this->tlmHistory_CPU_04->clear();
    this->tlmHistory_CPU_05->clear();
    this->tlmHistory_CPU_06->clear();
    this->tlmHistory_CPU_07->clear();
    this->tlmHistory_CPU_08->clear();
    this->tlmHistory_CPU_09->clear();
    this->tlmHistory_CPU_10->clear();
    this->tlmHistory_CPU_11->clear();
    this->tlmHistory_CPU_12->clear();
    this->tlmHistory_CPU_13->clear();
    this->tlmHistory_CPU_14->clear();
    this->tlmHistory_CPU_15->clear();
    this->tlmHistory_FRAMEWORK_VERSION->clear();
    this->tlmHistory_PROJECT_VERSION->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: MEMORY_TOTAL
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_MEMORY_TOTAL(
        const Fw::Time& timeTag,
        const U64& val
    )
  {
    TlmEntry_MEMORY_TOTAL e = { timeTag, val };
    this->tlmHistory_MEMORY_TOTAL->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: MEMORY_USED
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_MEMORY_USED(
        const Fw::Time& timeTag,
        const U64& val
    )
  {
    TlmEntry_MEMORY_USED e = { timeTag, val };
    this->tlmHistory_MEMORY_USED->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: NON_VOLATILE_TOTAL
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_NON_VOLATILE_TOTAL(
        const Fw::Time& timeTag,
        const U64& val
    )
  {
    TlmEntry_NON_VOLATILE_TOTAL e = { timeTag, val };
    this->tlmHistory_NON_VOLATILE_TOTAL->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: NON_VOLATILE_FREE
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_NON_VOLATILE_FREE(
        const Fw::Time& timeTag,
        const U64& val
    )
  {
    TlmEntry_NON_VOLATILE_FREE e = { timeTag, val };
    this->tlmHistory_NON_VOLATILE_FREE->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU e = { timeTag, val };
    this->tlmHistory_CPU->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_00
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_00(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_00 e = { timeTag, val };
    this->tlmHistory_CPU_00->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_01
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_01(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_01 e = { timeTag, val };
    this->tlmHistory_CPU_01->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_02
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_02(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_02 e = { timeTag, val };
    this->tlmHistory_CPU_02->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_03
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_03(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_03 e = { timeTag, val };
    this->tlmHistory_CPU_03->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_04
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_04(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_04 e = { timeTag, val };
    this->tlmHistory_CPU_04->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_05
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_05(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_05 e = { timeTag, val };
    this->tlmHistory_CPU_05->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_06
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_06(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_06 e = { timeTag, val };
    this->tlmHistory_CPU_06->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_07
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_07(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_07 e = { timeTag, val };
    this->tlmHistory_CPU_07->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_08
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_08(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_08 e = { timeTag, val };
    this->tlmHistory_CPU_08->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_09
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_09(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_09 e = { timeTag, val };
    this->tlmHistory_CPU_09->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_10
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_10(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_10 e = { timeTag, val };
    this->tlmHistory_CPU_10->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_11
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_11(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_11 e = { timeTag, val };
    this->tlmHistory_CPU_11->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_12
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_12(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_12 e = { timeTag, val };
    this->tlmHistory_CPU_12->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_13
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_13(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_13 e = { timeTag, val };
    this->tlmHistory_CPU_13->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_14
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_14(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_14 e = { timeTag, val };
    this->tlmHistory_CPU_14->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_15
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_CPU_15(
        const Fw::Time& timeTag,
        const F32& val
    )
  {
    TlmEntry_CPU_15 e = { timeTag, val };
    this->tlmHistory_CPU_15->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: FRAMEWORK_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_FRAMEWORK_VERSION(
        const Fw::Time& timeTag,
        const Fw::TlmString& val
    )
  {
    TlmEntry_FRAMEWORK_VERSION e = { timeTag, val };
    this->tlmHistory_FRAMEWORK_VERSION->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: PROJECT_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    tlmInput_PROJECT_VERSION(
        const Fw::Time& timeTag,
        const Fw::TlmString& val
    )
  {
    TlmEntry_PROJECT_VERSION e = { timeTag, val };
    this->tlmHistory_PROJECT_VERSION->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
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

      case SystemResourcesComponentBase::EVENTID_FRAMEWORK_VERSION:
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
        Fw::LogStringArg version;
        _status = args.deserialize(version);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_LO_FRAMEWORK_VERSION(version);

        break;

      }

      case SystemResourcesComponentBase::EVENTID_PROJECT_VERSION:
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
        Fw::LogStringArg version;
        _status = args.deserialize(version);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_LO_PROJECT_VERSION(version);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void SystemResourcesTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_FRAMEWORK_VERSION->clear();
    this->eventHistory_PROJECT_VERSION->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
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

  void SystemResourcesTesterBase ::
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

  void SystemResourcesTesterBase ::
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
  // Event: FRAMEWORK_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    logIn_ACTIVITY_LO_FRAMEWORK_VERSION(
        const Fw::LogStringArg& version
    )
  {
    EventEntry_FRAMEWORK_VERSION e = {
      version
    };
    eventHistory_FRAMEWORK_VERSION->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: PROJECT_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesTesterBase ::
    logIn_ACTIVITY_LO_PROJECT_VERSION(
        const Fw::LogStringArg& version
    )
  {
    EventEntry_PROJECT_VERSION e = {
      version
    };
    eventHistory_PROJECT_VERSION->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
