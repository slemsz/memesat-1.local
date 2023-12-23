// ======================================================================
// \title  FileManager/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for FileManager component test harness base class
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

  FileManagerTesterBase ::
    FileManagerTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize telemetry histories
    this->tlmHistory_CommandsExecuted =
      new History<TlmEntry_CommandsExecuted>(maxHistorySize);
    this->tlmHistory_Errors =
      new History<TlmEntry_Errors>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_DirectoryCreateError =
      new History<EventEntry_DirectoryCreateError>(maxHistorySize);
    this->eventHistory_DirectoryRemoveError =
      new History<EventEntry_DirectoryRemoveError>(maxHistorySize);
    this->eventHistory_FileMoveError =
      new History<EventEntry_FileMoveError>(maxHistorySize);
    this->eventHistory_FileRemoveError =
      new History<EventEntry_FileRemoveError>(maxHistorySize);
    this->eventHistory_ShellCommandFailed =
      new History<EventEntry_ShellCommandFailed>(maxHistorySize);
    this->eventHistory_AppendFileFailed =
      new History<EventEntry_AppendFileFailed>(maxHistorySize);
    this->eventHistory_AppendFileSucceeded =
      new History<EventEntry_AppendFileSucceeded>(maxHistorySize);
    this->eventHistory_ShellCommandSucceeded =
      new History<EventEntry_ShellCommandSucceeded>(maxHistorySize);
    this->eventHistory_CreateDirectorySucceeded =
      new History<EventEntry_CreateDirectorySucceeded>(maxHistorySize);
    this->eventHistory_RemoveDirectorySucceeded =
      new History<EventEntry_RemoveDirectorySucceeded>(maxHistorySize);
    this->eventHistory_MoveFileSucceeded =
      new History<EventEntry_MoveFileSucceeded>(maxHistorySize);
    this->eventHistory_RemoveFileSucceeded =
      new History<EventEntry_RemoveFileSucceeded>(maxHistorySize);
    this->eventHistory_AppendFileStarted =
      new History<EventEntry_AppendFileStarted>(maxHistorySize);
    this->eventHistory_ShellCommandStarted =
      new History<EventEntry_ShellCommandStarted>(maxHistorySize);
    this->eventHistory_CreateDirectoryStarted =
      new History<EventEntry_CreateDirectoryStarted>(maxHistorySize);
    this->eventHistory_RemoveDirectoryStarted =
      new History<EventEntry_RemoveDirectoryStarted>(maxHistorySize);
    this->eventHistory_MoveFileStarted =
      new History<EventEntry_MoveFileStarted>(maxHistorySize);
    this->eventHistory_RemoveFileStarted =
      new History<EventEntry_RemoveFileStarted>(maxHistorySize);
    this->eventHistory_FileSizeSucceeded =
      new History<EventEntry_FileSizeSucceeded>(maxHistorySize);
    this->eventHistory_FileSizeError =
      new History<EventEntry_FileSizeError>(maxHistorySize);
    this->eventHistory_FileSizeStarted =
      new History<EventEntry_FileSizeStarted>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_pingOut =
      new History<FromPortEntry_pingOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  FileManagerTesterBase ::
    ~FileManagerTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy telemetry histories
    delete this->tlmHistory_CommandsExecuted;
    delete this->tlmHistory_Errors;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_DirectoryCreateError;
    delete this->eventHistory_DirectoryRemoveError;
    delete this->eventHistory_FileMoveError;
    delete this->eventHistory_FileRemoveError;
    delete this->eventHistory_ShellCommandFailed;
    delete this->eventHistory_AppendFileFailed;
    delete this->eventHistory_AppendFileSucceeded;
    delete this->eventHistory_ShellCommandSucceeded;
    delete this->eventHistory_CreateDirectorySucceeded;
    delete this->eventHistory_RemoveDirectorySucceeded;
    delete this->eventHistory_MoveFileSucceeded;
    delete this->eventHistory_RemoveFileSucceeded;
    delete this->eventHistory_AppendFileStarted;
    delete this->eventHistory_ShellCommandStarted;
    delete this->eventHistory_CreateDirectoryStarted;
    delete this->eventHistory_RemoveDirectoryStarted;
    delete this->eventHistory_MoveFileStarted;
    delete this->eventHistory_RemoveFileStarted;
    delete this->eventHistory_FileSizeSucceeded;
    delete this->eventHistory_FileSizeError;
    delete this->eventHistory_FileSizeStarted;
    // Destroy port histories
    delete this->fromPortHistory_pingOut;
  }

  void FileManagerTesterBase ::
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
  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_LogText() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_LogText));
  }
#endif

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_to_cmdIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_cmdIn));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_cmdRegOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdRegOut));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_cmdResponseOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdResponseOut));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_eventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_eventOut));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_to_pingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_pingIn));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_pingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_pingOut));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_timeCaller() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeCaller));
  }

  NATIVE_INT_TYPE FileManagerTesterBase ::
    getNum_from_tlmOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    connect_to_cmdIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const cmdIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_cmdIn[portNum].addCallPort(cmdIn);
  }

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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

  bool FileManagerTesterBase ::
    isConnected_to_cmdIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_cmdIn[portNum].isConnected();
  }

  bool FileManagerTesterBase ::
    isConnected_to_pingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_pingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *FileManagerTesterBase ::
    get_from_LogText(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_LogText(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_LogText[portNum];
  }
#endif

  Fw::InputCmdRegPort *FileManagerTesterBase ::
    get_from_cmdRegOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdRegOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdRegOut[portNum];
  }

  Fw::InputCmdResponsePort *FileManagerTesterBase ::
    get_from_cmdResponseOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdResponseOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdResponseOut[portNum];
  }

  Fw::InputLogPort *FileManagerTesterBase ::
    get_from_eventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_eventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_eventOut[portNum];
  }

  Svc::InputPingPort *FileManagerTesterBase ::
    get_from_pingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_pingOut[portNum];
  }

  Fw::InputTimePort *FileManagerTesterBase ::
    get_from_timeCaller(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_timeCaller(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_timeCaller[portNum];
  }

  Fw::InputTlmPort *FileManagerTesterBase ::
    get_from_tlmOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_tlmOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_tlmOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    from_pingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(callComp);
    _testerBase->from_pingOut_handlerBase(
        portNum,
        key
    );
  }

  void FileManagerTesterBase ::
    from_cmdResponseOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void FileManagerTesterBase ::
    from_cmdRegOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void FileManagerTesterBase ::
    from_tlmOut_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void FileManagerTesterBase ::
    from_eventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void FileManagerTesterBase ::
    from_LogText_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void FileManagerTesterBase ::
    from_timeCaller_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    FileManagerTesterBase* _testerBase =
      static_cast<FileManagerTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_pingOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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
  // Command: CreateDirectory
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_CreateDirectory(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& dirName
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(dirName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_CREATEDIRECTORY + idBase;

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
  // Command: MoveFile
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_MoveFile(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& sourceFileName,
        const Fw::CmdStringArg& destFileName
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(sourceFileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(destFileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_MOVEFILE + idBase;

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
  // Command: RemoveDirectory
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_RemoveDirectory(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& dirName
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(dirName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_REMOVEDIRECTORY + idBase;

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
  // Command: RemoveFile
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_RemoveFile(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& fileName,
        bool ignoreErrors
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(fileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(ignoreErrors);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_REMOVEFILE + idBase;

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
  // Command: ShellCommand
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_ShellCommand(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& command,
        const Fw::CmdStringArg& logFileName
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(command);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(logFileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_SHELLCOMMAND + idBase;

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
  // Command: AppendFile
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_AppendFile(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& source,
        const Fw::CmdStringArg& target
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(source);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(target);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_APPENDFILE + idBase;

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
  // Command: FileSize
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    sendCmd_FileSize(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& fileName
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(fileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileManagerComponentBase::OPCODE_FILESIZE + idBase;

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


  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
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

      case FileManagerComponentBase::CHANNELID_COMMANDSEXECUTED:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing CommandsExecuted: %d\n", _status);
          return;
        }
        this->tlmInput_CommandsExecuted(timeTag, arg);
        break;
      }

      case FileManagerComponentBase::CHANNELID_ERRORS:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing Errors: %d\n", _status);
          return;
        }
        this->tlmInput_Errors(timeTag, arg);
        break;
      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void FileManagerTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_CommandsExecuted->clear();
    this->tlmHistory_Errors->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: CommandsExecuted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    tlmInput_CommandsExecuted(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_CommandsExecuted e = { timeTag, val };
    this->tlmHistory_CommandsExecuted->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: Errors
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    tlmInput_Errors(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_Errors e = { timeTag, val };
    this->tlmHistory_Errors->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Event dispatch
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
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

      case FileManagerComponentBase::EVENTID_DIRECTORYCREATEERROR:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_DirectoryCreateError(dirName, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_DIRECTORYREMOVEERROR:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_DirectoryRemoveError(dirName, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_FILEMOVEERROR:
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
        Fw::LogStringArg sourceFileName;
        _status = args.deserialize(sourceFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg destFileName;
        _status = args.deserialize(destFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_FileMoveError(sourceFileName, destFileName, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_FILEREMOVEERROR:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_FileRemoveError(fileName, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_SHELLCOMMANDFAILED:
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
        Fw::LogStringArg command;
        _status = args.deserialize(command);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_ShellCommandFailed(command, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_APPENDFILEFAILED:
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
        Fw::LogStringArg source;
        _status = args.deserialize(source);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg target;
        _status = args.deserialize(target);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_AppendFileFailed(source, target, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_APPENDFILESUCCEEDED:
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
        Fw::LogStringArg source;
        _status = args.deserialize(source);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg target;
        _status = args.deserialize(target);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_AppendFileSucceeded(source, target);

        break;

      }

      case FileManagerComponentBase::EVENTID_SHELLCOMMANDSUCCEEDED:
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
        Fw::LogStringArg command;
        _status = args.deserialize(command);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_ShellCommandSucceeded(command);

        break;

      }

      case FileManagerComponentBase::EVENTID_CREATEDIRECTORYSUCCEEDED:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_CreateDirectorySucceeded(dirName);

        break;

      }

      case FileManagerComponentBase::EVENTID_REMOVEDIRECTORYSUCCEEDED:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_RemoveDirectorySucceeded(dirName);

        break;

      }

      case FileManagerComponentBase::EVENTID_MOVEFILESUCCEEDED:
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
        Fw::LogStringArg sourceFileName;
        _status = args.deserialize(sourceFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg destFileName;
        _status = args.deserialize(destFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_MoveFileSucceeded(sourceFileName, destFileName);

        break;

      }

      case FileManagerComponentBase::EVENTID_REMOVEFILESUCCEEDED:
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

        this->logIn_ACTIVITY_HI_RemoveFileSucceeded(fileName);

        break;

      }

      case FileManagerComponentBase::EVENTID_APPENDFILESTARTED:
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
        Fw::LogStringArg source;
        _status = args.deserialize(source);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg target;
        _status = args.deserialize(target);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_AppendFileStarted(source, target);

        break;

      }

      case FileManagerComponentBase::EVENTID_SHELLCOMMANDSTARTED:
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
        Fw::LogStringArg command;
        _status = args.deserialize(command);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_ShellCommandStarted(command);

        break;

      }

      case FileManagerComponentBase::EVENTID_CREATEDIRECTORYSTARTED:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_CreateDirectoryStarted(dirName);

        break;

      }

      case FileManagerComponentBase::EVENTID_REMOVEDIRECTORYSTARTED:
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
        Fw::LogStringArg dirName;
        _status = args.deserialize(dirName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_RemoveDirectoryStarted(dirName);

        break;

      }

      case FileManagerComponentBase::EVENTID_MOVEFILESTARTED:
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
        Fw::LogStringArg sourceFileName;
        _status = args.deserialize(sourceFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        Fw::LogStringArg destFileName;
        _status = args.deserialize(destFileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_MoveFileStarted(sourceFileName, destFileName);

        break;

      }

      case FileManagerComponentBase::EVENTID_REMOVEFILESTARTED:
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

        this->logIn_ACTIVITY_HI_RemoveFileStarted(fileName);

        break;

      }

      case FileManagerComponentBase::EVENTID_FILESIZESUCCEEDED:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U64 size;
#if FW_AMPCS_COMPATIBLE
        {
          // Deserialize the argument size
          U8 _argSize;
          _status = args.deserialize(_argSize);
          FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
          );
          FW_ASSERT(_argSize == sizeof(U64),_argSize,sizeof(U64));
        }
#endif
        _status = args.deserialize(size);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_ACTIVITY_HI_FileSizeSucceeded(fileName, size);

        break;

      }

      case FileManagerComponentBase::EVENTID_FILESIZEERROR:
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
        Fw::LogStringArg fileName;
        _status = args.deserialize(fileName);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 status;
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
        _status = args.deserialize(status);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_FileSizeError(fileName, status);

        break;

      }

      case FileManagerComponentBase::EVENTID_FILESIZESTARTED:
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

        this->logIn_ACTIVITY_HI_FileSizeStarted(fileName);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void FileManagerTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_DirectoryCreateError->clear();
    this->eventHistory_DirectoryRemoveError->clear();
    this->eventHistory_FileMoveError->clear();
    this->eventHistory_FileRemoveError->clear();
    this->eventHistory_ShellCommandFailed->clear();
    this->eventHistory_AppendFileFailed->clear();
    this->eventHistory_AppendFileSucceeded->clear();
    this->eventHistory_ShellCommandSucceeded->clear();
    this->eventHistory_CreateDirectorySucceeded->clear();
    this->eventHistory_RemoveDirectorySucceeded->clear();
    this->eventHistory_MoveFileSucceeded->clear();
    this->eventHistory_RemoveFileSucceeded->clear();
    this->eventHistory_AppendFileStarted->clear();
    this->eventHistory_ShellCommandStarted->clear();
    this->eventHistory_CreateDirectoryStarted->clear();
    this->eventHistory_RemoveDirectoryStarted->clear();
    this->eventHistory_MoveFileStarted->clear();
    this->eventHistory_RemoveFileStarted->clear();
    this->eventHistory_FileSizeSucceeded->clear();
    this->eventHistory_FileSizeError->clear();
    this->eventHistory_FileSizeStarted->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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

  void FileManagerTesterBase ::
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
  // Event: DirectoryCreateError
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_DirectoryCreateError(
        const Fw::LogStringArg& dirName,
        U32 status
    )
  {
    EventEntry_DirectoryCreateError e = {
      dirName, status
    };
    eventHistory_DirectoryCreateError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DirectoryRemoveError
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_DirectoryRemoveError(
        const Fw::LogStringArg& dirName,
        U32 status
    )
  {
    EventEntry_DirectoryRemoveError e = {
      dirName, status
    };
    eventHistory_DirectoryRemoveError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileMoveError
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_FileMoveError(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName,
        U32 status
    )
  {
    EventEntry_FileMoveError e = {
      sourceFileName, destFileName, status
    };
    eventHistory_FileMoveError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileRemoveError
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_FileRemoveError(
        const Fw::LogStringArg& fileName,
        U32 status
    )
  {
    EventEntry_FileRemoveError e = {
      fileName, status
    };
    eventHistory_FileRemoveError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandFailed
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_ShellCommandFailed(
        const Fw::LogStringArg& command,
        U32 status
    )
  {
    EventEntry_ShellCommandFailed e = {
      command, status
    };
    eventHistory_ShellCommandFailed->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileFailed
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_AppendFileFailed(
        const Fw::LogStringArg& source,
        const Fw::LogStringArg& target,
        U32 status
    )
  {
    EventEntry_AppendFileFailed e = {
      source, target, status
    };
    eventHistory_AppendFileFailed->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_AppendFileSucceeded(
        const Fw::LogStringArg& source,
        const Fw::LogStringArg& target
    )
  {
    EventEntry_AppendFileSucceeded e = {
      source, target
    };
    eventHistory_AppendFileSucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandSucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_ShellCommandSucceeded(
        const Fw::LogStringArg& command
    )
  {
    EventEntry_ShellCommandSucceeded e = {
      command
    };
    eventHistory_ShellCommandSucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: CreateDirectorySucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_CreateDirectorySucceeded(
        const Fw::LogStringArg& dirName
    )
  {
    EventEntry_CreateDirectorySucceeded e = {
      dirName
    };
    eventHistory_CreateDirectorySucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: RemoveDirectorySucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_RemoveDirectorySucceeded(
        const Fw::LogStringArg& dirName
    )
  {
    EventEntry_RemoveDirectorySucceeded e = {
      dirName
    };
    eventHistory_RemoveDirectorySucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: MoveFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_MoveFileSucceeded(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_MoveFileSucceeded e = {
      sourceFileName, destFileName
    };
    eventHistory_MoveFileSucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: RemoveFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_RemoveFileSucceeded(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_RemoveFileSucceeded e = {
      fileName
    };
    eventHistory_RemoveFileSucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_AppendFileStarted(
        const Fw::LogStringArg& source,
        const Fw::LogStringArg& target
    )
  {
    EventEntry_AppendFileStarted e = {
      source, target
    };
    eventHistory_AppendFileStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_ShellCommandStarted(
        const Fw::LogStringArg& command
    )
  {
    EventEntry_ShellCommandStarted e = {
      command
    };
    eventHistory_ShellCommandStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: CreateDirectoryStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_CreateDirectoryStarted(
        const Fw::LogStringArg& dirName
    )
  {
    EventEntry_CreateDirectoryStarted e = {
      dirName
    };
    eventHistory_CreateDirectoryStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: RemoveDirectoryStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_RemoveDirectoryStarted(
        const Fw::LogStringArg& dirName
    )
  {
    EventEntry_RemoveDirectoryStarted e = {
      dirName
    };
    eventHistory_RemoveDirectoryStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: MoveFileStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_MoveFileStarted(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_MoveFileStarted e = {
      sourceFileName, destFileName
    };
    eventHistory_MoveFileStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: RemoveFileStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_RemoveFileStarted(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_RemoveFileStarted e = {
      fileName
    };
    eventHistory_RemoveFileStarted->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeSucceeded
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_FileSizeSucceeded(
        const Fw::LogStringArg& fileName,
        U64 size
    )
  {
    EventEntry_FileSizeSucceeded e = {
      fileName, size
    };
    eventHistory_FileSizeSucceeded->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeError
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_WARNING_HI_FileSizeError(
        const Fw::LogStringArg& fileName,
        U32 status
    )
  {
    EventEntry_FileSizeError e = {
      fileName, status
    };
    eventHistory_FileSizeError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeStarted
  // ----------------------------------------------------------------------

  void FileManagerTesterBase ::
    logIn_ACTIVITY_HI_FileSizeStarted(
        const Fw::LogStringArg& fileName
    )
  {
    EventEntry_FileSizeStarted e = {
      fileName
    };
    eventHistory_FileSizeStarted->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
