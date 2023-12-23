// ======================================================================
// \title  BufferManager/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for BufferManager component test harness base class
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

  BufferManagerTesterBase ::
    BufferManagerTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize telemetry histories
    this->tlmHistory_TotalBuffs =
      new History<TlmEntry_TotalBuffs>(maxHistorySize);
    this->tlmHistory_CurrBuffs =
      new History<TlmEntry_CurrBuffs>(maxHistorySize);
    this->tlmHistory_HiBuffs =
      new History<TlmEntry_HiBuffs>(maxHistorySize);
    this->tlmHistory_NoBuffs =
      new History<TlmEntry_NoBuffs>(maxHistorySize);
    this->tlmHistory_EmptyBuffs =
      new History<TlmEntry_EmptyBuffs>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_NoBuffsAvailable =
      new History<EventEntry_NoBuffsAvailable>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  BufferManagerTesterBase ::
    ~BufferManagerTesterBase()
  {
    // Destroy telemetry histories
    delete this->tlmHistory_TotalBuffs;
    delete this->tlmHistory_CurrBuffs;
    delete this->tlmHistory_HiBuffs;
    delete this->tlmHistory_NoBuffs;
    delete this->tlmHistory_EmptyBuffs;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_NoBuffsAvailable;
  }

  void BufferManagerTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port eventOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_eventOut());
        ++_port
    ) {

      this->m_from_eventOut[_port].init();
      this->m_from_eventOut[_port].addCallComp(
          this,
          from_eventOut_static
      );
      this->m_from_eventOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_eventOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_eventOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port textEventOut

#if FW_ENABLE_TEXT_LOGGING == 1
    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_textEventOut());
        ++_port
    ) {

      this->m_from_textEventOut[_port].init();
      this->m_from_textEventOut[_port].addCallComp(
          this,
          from_textEventOut_static
      );
      this->m_from_textEventOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_textEventOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_textEventOut[_port].setObjName(_portName);
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

    // Initialize output port bufferGetCallee

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferGetCallee());
        ++_port
    ) {
      this->m_to_bufferGetCallee[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferGetCallee[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferGetCallee[_port].setObjName(_portName);
#endif

    }

    // Initialize output port bufferSendIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferSendIn());
        ++_port
    ) {
      this->m_to_bufferSendIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferSendIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferSendIn[_port].setObjName(_portName);
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

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_to_bufferGetCallee() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferGetCallee));
  }

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_to_bufferSendIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferSendIn));
  }

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_from_eventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_eventOut));
  }

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_to_schedIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_schedIn));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_from_textEventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_textEventOut));
  }
#endif

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_from_timeCaller() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeCaller));
  }

  NATIVE_INT_TYPE BufferManagerTesterBase ::
    getNum_from_tlmOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    connect_to_bufferGetCallee(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferGetPort *const bufferGetCallee
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferGetCallee(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferGetCallee[portNum].addCallPort(bufferGetCallee);
  }

  void BufferManagerTesterBase ::
    connect_to_bufferSendIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort *const bufferSendIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferSendIn[portNum].addCallPort(bufferSendIn);
  }

  void BufferManagerTesterBase ::
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

  Fw::Buffer BufferManagerTesterBase ::
    invoke_to_bufferGetCallee(
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferGetCallee(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferGetCallee(),static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferGetCallee[portNum].invoke(
        size
    );
  }

  void BufferManagerTesterBase ::
    invoke_to_bufferSendIn(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferSendIn[portNum].invoke(
        fwBuffer
    );
  }

  void BufferManagerTesterBase ::
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

  bool BufferManagerTesterBase ::
    isConnected_to_bufferGetCallee(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferGetCallee(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferGetCallee[portNum].isConnected();
  }

  bool BufferManagerTesterBase ::
    isConnected_to_bufferSendIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferSendIn[portNum].isConnected();
  }

  bool BufferManagerTesterBase ::
    isConnected_to_schedIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_schedIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_schedIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputLogPort *BufferManagerTesterBase ::
    get_from_eventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_eventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_eventOut[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *BufferManagerTesterBase ::
    get_from_textEventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_textEventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_textEventOut[portNum];
  }
#endif

  Fw::InputTimePort *BufferManagerTesterBase ::
    get_from_timeCaller(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_timeCaller(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_timeCaller[portNum];
  }

  Fw::InputTlmPort *BufferManagerTesterBase ::
    get_from_tlmOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_tlmOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_tlmOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    from_tlmOut_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    BufferManagerTesterBase* _testerBase =
      static_cast<BufferManagerTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void BufferManagerTesterBase ::
    from_eventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    BufferManagerTesterBase* _testerBase =
      static_cast<BufferManagerTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void BufferManagerTesterBase ::
    from_textEventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    BufferManagerTesterBase* _testerBase =
      static_cast<BufferManagerTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void BufferManagerTesterBase ::
    from_timeCaller_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    BufferManagerTesterBase* _testerBase =
      static_cast<BufferManagerTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    clearHistory()
  {
    this->clearTlm();
    this->textLogHistory->clear();
    this->clearEvents();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
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

      case BufferManagerComponentBase::CHANNELID_TOTALBUFFS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing TotalBuffs: %d\n", _status);
          return;
        }
        this->tlmInput_TotalBuffs(timeTag, arg);
        break;
      }

      case BufferManagerComponentBase::CHANNELID_CURRBUFFS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CurrBuffs: %d\n", _status);
          return;
        }
        this->tlmInput_CurrBuffs(timeTag, arg);
        break;
      }

      case BufferManagerComponentBase::CHANNELID_HIBUFFS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing HiBuffs: %d\n", _status);
          return;
        }
        this->tlmInput_HiBuffs(timeTag, arg);
        break;
      }

      case BufferManagerComponentBase::CHANNELID_NOBUFFS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing NoBuffs: %d\n", _status);
          return;
        }
        this->tlmInput_NoBuffs(timeTag, arg);
        break;
      }

      case BufferManagerComponentBase::CHANNELID_EMPTYBUFFS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing EmptyBuffs: %d\n", _status);
          return;
        }
        this->tlmInput_EmptyBuffs(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void BufferManagerTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_TotalBuffs->clear();
    this->tlmHistory_CurrBuffs->clear();
    this->tlmHistory_HiBuffs->clear();
    this->tlmHistory_NoBuffs->clear();
    this->tlmHistory_EmptyBuffs->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: TotalBuffs
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    tlmInput_TotalBuffs(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_TotalBuffs e = { timeTag, val };
    this->tlmHistory_TotalBuffs->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: CurrBuffs
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    tlmInput_CurrBuffs(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_CurrBuffs e = { timeTag, val };
    this->tlmHistory_CurrBuffs->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: HiBuffs
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    tlmInput_HiBuffs(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_HiBuffs e = { timeTag, val };
    this->tlmHistory_HiBuffs->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: NoBuffs
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    tlmInput_NoBuffs(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_NoBuffs e = { timeTag, val };
    this->tlmHistory_NoBuffs->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: EmptyBuffs
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    tlmInput_EmptyBuffs(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_EmptyBuffs e = { timeTag, val };
    this->tlmHistory_EmptyBuffs->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
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

      case BufferManagerComponentBase::EVENTID_NOBUFFSAVAILABLE:
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
        U32 size;
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
        _status = args.deserialize(size);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_NoBuffsAvailable(size);

        break;

      }

      case BufferManagerComponentBase::EVENTID_ZEROSIZEBUFFER:
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
        this->logIn_WARNING_HI_ZeroSizeBuffer();

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void BufferManagerTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_NoBuffsAvailable->clear();
    this->eventsSize_ZeroSizeBuffer = 0;
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
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

  void BufferManagerTesterBase ::
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

  void BufferManagerTesterBase ::
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
  // Event: NoBuffsAvailable
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    logIn_WARNING_HI_NoBuffsAvailable(
        U32 size
    )
  {
    EventEntry_NoBuffsAvailable e = {
      size
    };
    eventHistory_NoBuffsAvailable->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ZeroSizeBuffer
  // ----------------------------------------------------------------------

  void BufferManagerTesterBase ::
    logIn_WARNING_HI_ZeroSizeBuffer(

    )
  {
    ++this->eventsSize_ZeroSizeBuffer;
    ++this->eventsSize;
  }

} // end namespace Svc
