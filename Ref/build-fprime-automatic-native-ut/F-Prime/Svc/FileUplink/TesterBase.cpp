// ======================================================================
// \title  FileUplink/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for FileUplink component test harness base class
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

  FileUplinkTesterBase ::
    FileUplinkTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize telemetry histories
    this->tlmHistory_FilesReceived =
      new History<TlmEntry_FilesReceived>(maxHistorySize);
    this->tlmHistory_PacketsReceived =
      new History<TlmEntry_PacketsReceived>(maxHistorySize);
    this->tlmHistory_Warnings =
      new History<TlmEntry_Warnings>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_BadChecksum =
      new History<EventEntry_BadChecksum>(maxHistorySize);
    this->eventHistory_FileOpenError =
      new History<EventEntry_FileOpenError>(maxHistorySize);
    this->eventHistory_FileReceived =
      new History<EventEntry_FileReceived>(maxHistorySize);
    this->eventHistory_FileWriteError =
      new History<EventEntry_FileWriteError>(maxHistorySize);
    this->eventHistory_InvalidReceiveMode =
      new History<EventEntry_InvalidReceiveMode>(maxHistorySize);
    this->eventHistory_PacketOutOfBounds =
      new History<EventEntry_PacketOutOfBounds>(maxHistorySize);
    this->eventHistory_PacketOutOfOrder =
      new History<EventEntry_PacketOutOfOrder>(maxHistorySize);
    this->eventHistory_DecodeError =
      new History<EventEntry_DecodeError>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_bufferSendOut =
      new History<FromPortEntry_bufferSendOut>(maxHistorySize);
    this->fromPortHistory_pingOut =
      new History<FromPortEntry_pingOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  FileUplinkTesterBase ::
    ~FileUplinkTesterBase()
  {
    // Destroy telemetry histories
    delete this->tlmHistory_FilesReceived;
    delete this->tlmHistory_PacketsReceived;
    delete this->tlmHistory_Warnings;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_BadChecksum;
    delete this->eventHistory_FileOpenError;
    delete this->eventHistory_FileReceived;
    delete this->eventHistory_FileWriteError;
    delete this->eventHistory_InvalidReceiveMode;
    delete this->eventHistory_PacketOutOfBounds;
    delete this->eventHistory_PacketOutOfOrder;
    delete this->eventHistory_DecodeError;
    // Destroy port histories
    delete this->fromPortHistory_bufferSendOut;
    // Destroy port histories
    delete this->fromPortHistory_pingOut;
  }

  void FileUplinkTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

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

    // Attach input port bufferSendOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_bufferSendOut());
        ++_port
    ) {

      this->m_from_bufferSendOut[_port].init();
      this->m_from_bufferSendOut[_port].addCallComp(
          this,
          from_bufferSendOut_static
      );
      this->m_from_bufferSendOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_bufferSendOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_bufferSendOut[_port].setObjName(_portName);
#endif

    }

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

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_to_bufferSendIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferSendIn));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_bufferSendOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferSendOut));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_eventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_eventOut));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_to_pingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_pingIn));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_pingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_pingOut));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_timeCaller() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeCaller));
  }

  NATIVE_INT_TYPE FileUplinkTesterBase ::
    getNum_from_tlmOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    connect_to_bufferSendIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort *const bufferSendIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferSendIn[portNum].addCallPort(bufferSendIn);
  }

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
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

  bool FileUplinkTesterBase ::
    isConnected_to_bufferSendIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferSendIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferSendIn[portNum].isConnected();
  }

  bool FileUplinkTesterBase ::
    isConnected_to_pingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_pingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *FileUplinkTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Fw::InputBufferSendPort *FileUplinkTesterBase ::
    get_from_bufferSendOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferSendOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferSendOut[portNum];
  }

  Fw::InputLogPort *FileUplinkTesterBase ::
    get_from_eventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_eventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_eventOut[portNum];
  }

  Svc::InputPingPort *FileUplinkTesterBase ::
    get_from_pingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_pingOut[portNum];
  }

  Fw::InputTimePort *FileUplinkTesterBase ::
    get_from_timeCaller(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_timeCaller(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_timeCaller[portNum];
  }

  Fw::InputTlmPort *FileUplinkTesterBase ::
    get_from_tlmOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_tlmOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_tlmOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    from_bufferSendOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(callComp);
    _testerBase->from_bufferSendOut_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void FileUplinkTesterBase ::
    from_pingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(callComp);
    _testerBase->from_pingOut_handlerBase(
        portNum,
        key
    );
  }

  void FileUplinkTesterBase ::
    from_tlmOut_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void FileUplinkTesterBase ::
    from_eventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void FileUplinkTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void FileUplinkTesterBase ::
    from_timeCaller_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    FileUplinkTesterBase* _testerBase =
      static_cast<FileUplinkTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_bufferSendOut->clear();
    this->fromPortHistory_pingOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: bufferSendOut
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    pushFromPortEntry_bufferSendOut(
        Fw::Buffer &fwBuffer
    )
  {
    FromPortEntry_bufferSendOut _e = {
      fwBuffer
    };
    this->fromPortHistory_bufferSendOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
    from_bufferSendOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_bufferSendOut(),static_cast<FwAssertArgType>(portNum));
    this->from_bufferSendOut_handler(
        portNum,
        fwBuffer
    );
  }

  void FileUplinkTesterBase ::
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
  // History
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
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

      case FileUplinkComponentBase::CHANNELID_FILESRECEIVED:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing FilesReceived: %d\n", _status);
          return;
        }
        this->tlmInput_FilesReceived(timeTag, arg);
        break;
      }

      case FileUplinkComponentBase::CHANNELID_PACKETSRECEIVED:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PacketsReceived: %d\n", _status);
          return;
        }
        this->tlmInput_PacketsReceived(timeTag, arg);
        break;
      }

      case FileUplinkComponentBase::CHANNELID_WARNINGS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing Warnings: %d\n", _status);
          return;
        }
        this->tlmInput_Warnings(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void FileUplinkTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_FilesReceived->clear();
    this->tlmHistory_PacketsReceived->clear();
    this->tlmHistory_Warnings->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: FilesReceived
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    tlmInput_FilesReceived(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_FilesReceived e = { timeTag, val };
    this->tlmHistory_FilesReceived->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: PacketsReceived
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    tlmInput_PacketsReceived(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_PacketsReceived e = { timeTag, val };
    this->tlmHistory_PacketsReceived->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: Warnings
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    tlmInput_Warnings(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_Warnings e = { timeTag, val };
    this->tlmHistory_Warnings->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
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

      case FileUplinkComponentBase::EVENTID_BADCHECKSUM:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 computed;
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
        _status = args.deserialize(computed);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 read;
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
        _status = args.deserialize(read);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_BadChecksum(fileName, computed, read);

        break;

      }

      case FileUplinkComponentBase::EVENTID_FILEOPENERROR:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_FileOpenError(fileName);

        break;

      }

      case FileUplinkComponentBase::EVENTID_FILERECEIVED:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_FileReceived(fileName);

        break;

      }

      case FileUplinkComponentBase::EVENTID_FILEWRITEERROR:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_FileWriteError(fileName);

        break;

      }

      case FileUplinkComponentBase::EVENTID_INVALIDRECEIVEMODE:
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
        U32 packetType;
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
        _status = args.deserialize(packetType);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 mode;
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
        _status = args.deserialize(mode);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_InvalidReceiveMode(packetType, mode);

        break;

      }

      case FileUplinkComponentBase::EVENTID_PACKETOUTOFBOUNDS:
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
        U32 packetIndex;
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
        _status = args.deserialize(packetIndex);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_PacketOutOfBounds(packetIndex, fileName);

        break;

      }

      case FileUplinkComponentBase::EVENTID_PACKETOUTOFORDER:
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
        U32 packetIndex;
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
        _status = args.deserialize(packetIndex);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 lastPacketIndex;
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
        _status = args.deserialize(lastPacketIndex);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_PacketOutOfOrder(packetIndex, lastPacketIndex);

        break;

      }

      case FileUplinkComponentBase::EVENTID_UPLINKCANCELED:
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
        this->logIn_ACTIVITY_HI_UplinkCanceled();

        break;

      }

      case FileUplinkComponentBase::EVENTID_DECODEERROR:
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
        I32 status;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(I32),_argSize,sizeof(I32));
        }
#endif
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_DecodeError(status);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void FileUplinkTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_BadChecksum->clear();
    this->eventHistory_FileOpenError->clear();
    this->eventHistory_FileReceived->clear();
    this->eventHistory_FileWriteError->clear();
    this->eventHistory_InvalidReceiveMode->clear();
    this->eventHistory_PacketOutOfBounds->clear();
    this->eventHistory_PacketOutOfOrder->clear();
    this->eventsSize_UplinkCanceled = 0;
    this->eventHistory_DecodeError->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
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

  void FileUplinkTesterBase ::
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
  // Event: BadChecksum
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_BadChecksum(
        const Fw::LogStringArg& fileName,
        U32 computed,
        U32 read
    )
  {
    EventEntry_BadChecksum e = {
      fileName, computed, read
    };
    eventHistory_BadChecksum->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileOpenError
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_FileOpenError(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_FileOpenError e = {
      fileName
    };
    eventHistory_FileOpenError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileReceived
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_ACTIVITY_HI_FileReceived(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_FileReceived e = {
      fileName
    };
    eventHistory_FileReceived->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileWriteError
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_FileWriteError(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_FileWriteError e = {
      fileName
    };
    eventHistory_FileWriteError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: InvalidReceiveMode
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_InvalidReceiveMode(
        U32 packetType,
        U32 mode
    )
  {
    EventEntry_InvalidReceiveMode e = {
      packetType, mode
    };
    eventHistory_InvalidReceiveMode->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: PacketOutOfBounds
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_PacketOutOfBounds(
        U32 packetIndex,
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_PacketOutOfBounds e = {
      packetIndex, fileName
    };
    eventHistory_PacketOutOfBounds->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: PacketOutOfOrder
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_PacketOutOfOrder(
        U32 packetIndex,
        U32 lastPacketIndex
    )
  {
    EventEntry_PacketOutOfOrder e = {
      packetIndex, lastPacketIndex
    };
    eventHistory_PacketOutOfOrder->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: UplinkCanceled
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_ACTIVITY_HI_UplinkCanceled(

    )
  {
    ++this->eventsSize_UplinkCanceled;
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DecodeError
  // ----------------------------------------------------------------------

  void FileUplinkTesterBase ::
    logIn_WARNING_HI_DecodeError(
        I32 status
    )
  {
    EventEntry_DecodeError e = {
      status
    };
    eventHistory_DecodeError->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
