// ======================================================================
// \title  FileDownlink/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for FileDownlink component test harness base class
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

  FileDownlinkTesterBase ::
    FileDownlinkTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize command history
    this->cmdResponseHistory = new History<CmdResponse>(maxHistorySize);
    // Initialize telemetry histories
    this->tlmHistory_FilesSent =
      new History<TlmEntry_FilesSent>(maxHistorySize);
    this->tlmHistory_PacketsSent =
      new History<TlmEntry_PacketsSent>(maxHistorySize);
    this->tlmHistory_Warnings =
      new History<TlmEntry_Warnings>(maxHistorySize);
    // Initialize event histories
#if FW_ENABLE_TEXT_LOGGING
    this->textLogHistory = new History<TextLogEntry>(maxHistorySize);
#endif
    this->eventHistory_FileOpenError =
      new History<EventEntry_FileOpenError>(maxHistorySize);
    this->eventHistory_FileReadError =
      new History<EventEntry_FileReadError>(maxHistorySize);
    this->eventHistory_FileSent =
      new History<EventEntry_FileSent>(maxHistorySize);
    this->eventHistory_DownlinkCanceled =
      new History<EventEntry_DownlinkCanceled>(maxHistorySize);
    this->eventHistory_DownlinkTimeout =
      new History<EventEntry_DownlinkTimeout>(maxHistorySize);
    this->eventHistory_DownlinkPartialWarning =
      new History<EventEntry_DownlinkPartialWarning>(maxHistorySize);
    this->eventHistory_DownlinkPartialFail =
      new History<EventEntry_DownlinkPartialFail>(maxHistorySize);
    this->eventHistory_SendDataFail =
      new History<EventEntry_SendDataFail>(maxHistorySize);
    this->eventHistory_SendStarted =
      new History<EventEntry_SendStarted>(maxHistorySize);
    // Initialize histories for typed user output ports
    this->fromPortHistory_FileComplete =
      new History<FromPortEntry_FileComplete>(maxHistorySize);
    this->fromPortHistory_bufferSendOut =
      new History<FromPortEntry_bufferSendOut>(maxHistorySize);
    this->fromPortHistory_pingOut =
      new History<FromPortEntry_pingOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  FileDownlinkTesterBase ::
    ~FileDownlinkTesterBase()
  {
    // Destroy command history
    delete this->cmdResponseHistory;
    // Destroy telemetry histories
    delete this->tlmHistory_FilesSent;
    delete this->tlmHistory_PacketsSent;
    delete this->tlmHistory_Warnings;
    // Destroy event histories
#if FW_ENABLE_TEXT_LOGGING
    delete this->textLogHistory;
#endif
    delete this->eventHistory_FileOpenError;
    delete this->eventHistory_FileReadError;
    delete this->eventHistory_FileSent;
    delete this->eventHistory_DownlinkCanceled;
    delete this->eventHistory_DownlinkTimeout;
    delete this->eventHistory_DownlinkPartialWarning;
    delete this->eventHistory_DownlinkPartialFail;
    delete this->eventHistory_SendDataFail;
    delete this->eventHistory_SendStarted;
    // Destroy port histories
    delete this->fromPortHistory_FileComplete;
    // Destroy port histories
    delete this->fromPortHistory_bufferSendOut;
    // Destroy port histories
    delete this->fromPortHistory_pingOut;
  }

  void FileDownlinkTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port FileComplete

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_FileComplete());
        ++_port
    ) {

      this->m_from_FileComplete[_port].init();
      this->m_from_FileComplete[_port].addCallComp(
          this,
          from_FileComplete_static
      );
      this->m_from_FileComplete[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_FileComplete[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_FileComplete[_port].setObjName(_portName);
#endif

    }

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

    // Initialize output port SendFile

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_SendFile());
        ++_port
    ) {
      this->m_to_SendFile[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_SendFile[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_SendFile[_port].setObjName(_portName);
#endif

    }

    // Initialize output port bufferReturn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferReturn());
        ++_port
    ) {
      this->m_to_bufferReturn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferReturn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferReturn[_port].setObjName(_portName);
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

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_FileComplete() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_FileComplete));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_to_Run() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_Run));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_to_SendFile() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_SendFile));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_to_bufferReturn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferReturn));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_bufferSendOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferSendOut));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_to_cmdIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_cmdIn));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_cmdRegOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdRegOut));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_cmdResponseOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_cmdResponseOut));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_eventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_eventOut));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_to_pingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_pingIn));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_pingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_pingOut));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_textEventOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_textEventOut));
  }
#endif

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_timeCaller() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_timeCaller));
  }

  NATIVE_INT_TYPE FileDownlinkTesterBase ::
    getNum_from_tlmOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_tlmOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    connect_to_Run(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort *const Run
    )
  {
    FW_ASSERT(portNum < this->getNum_to_Run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_Run[portNum].addCallPort(Run);
  }

  void FileDownlinkTesterBase ::
    connect_to_SendFile(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSendFileRequestPort *const SendFile
    )
  {
    FW_ASSERT(portNum < this->getNum_to_SendFile(),static_cast<FwAssertArgType>(portNum));
    this->m_to_SendFile[portNum].addCallPort(SendFile);
  }

  void FileDownlinkTesterBase ::
    connect_to_bufferReturn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort *const bufferReturn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferReturn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferReturn[portNum].addCallPort(bufferReturn);
  }

  void FileDownlinkTesterBase ::
    connect_to_cmdIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdPort *const cmdIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_cmdIn[portNum].addCallPort(cmdIn);
  }

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

  Svc::SendFileResponse FileDownlinkTesterBase ::
    invoke_to_SendFile(
        const NATIVE_INT_TYPE portNum,
        const sourceFileNameString &sourceFileName,
        const destFileNameString &destFileName,
        U32 offset,
        U32 length
    )
  {
    FW_ASSERT(portNum < this->getNum_to_SendFile(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_SendFile(),static_cast<FwAssertArgType>(portNum));
    return this->m_to_SendFile[portNum].invoke(
        sourceFileName, destFileName, offset, length
    );
  }

  void FileDownlinkTesterBase ::
    invoke_to_bufferReturn(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferReturn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferReturn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferReturn[portNum].invoke(
        fwBuffer
    );
  }

  void FileDownlinkTesterBase ::
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

  bool FileDownlinkTesterBase ::
    isConnected_to_Run(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_Run(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_Run[portNum].isConnected();
  }

  bool FileDownlinkTesterBase ::
    isConnected_to_SendFile(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_SendFile(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_SendFile[portNum].isConnected();
  }

  bool FileDownlinkTesterBase ::
    isConnected_to_bufferReturn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferReturn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferReturn[portNum].isConnected();
  }

  bool FileDownlinkTesterBase ::
    isConnected_to_cmdIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_cmdIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_cmdIn[portNum].isConnected();
  }

  bool FileDownlinkTesterBase ::
    isConnected_to_pingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_pingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Svc::InputSendFileCompletePort *FileDownlinkTesterBase ::
    get_from_FileComplete(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_FileComplete(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_FileComplete[portNum];
  }

  Fw::InputBufferSendPort *FileDownlinkTesterBase ::
    get_from_bufferSendOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferSendOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferSendOut[portNum];
  }

  Fw::InputCmdRegPort *FileDownlinkTesterBase ::
    get_from_cmdRegOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdRegOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdRegOut[portNum];
  }

  Fw::InputCmdResponsePort *FileDownlinkTesterBase ::
    get_from_cmdResponseOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_cmdResponseOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_cmdResponseOut[portNum];
  }

  Fw::InputLogPort *FileDownlinkTesterBase ::
    get_from_eventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_eventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_eventOut[portNum];
  }

  Svc::InputPingPort *FileDownlinkTesterBase ::
    get_from_pingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_pingOut[portNum];
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  Fw::InputLogTextPort *FileDownlinkTesterBase ::
    get_from_textEventOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_textEventOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_textEventOut[portNum];
  }
#endif

  Fw::InputTimePort *FileDownlinkTesterBase ::
    get_from_timeCaller(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_timeCaller(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_timeCaller[portNum];
  }

  Fw::InputTlmPort *FileDownlinkTesterBase ::
    get_from_tlmOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_tlmOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_tlmOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    from_FileComplete_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        const Svc::SendFileResponse &resp
    )
  {
    FW_ASSERT(callComp);
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(callComp);
    _testerBase->from_FileComplete_handlerBase(
        portNum,
        resp
    );
  }

  void FileDownlinkTesterBase ::
    from_bufferSendOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(callComp);
    _testerBase->from_bufferSendOut_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void FileDownlinkTesterBase ::
    from_pingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(callComp);
    _testerBase->from_pingOut_handlerBase(
        portNum,
        key
    );
  }

  void FileDownlinkTesterBase ::
    from_cmdResponseOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(component);
    _testerBase->cmdResponseIn(opCode, cmdSeq, response);
  }

  void FileDownlinkTesterBase ::
    from_cmdRegOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        const FwOpcodeType opCode
    )
  {

  }

  void FileDownlinkTesterBase ::
    from_tlmOut_static(
        Fw::PassiveComponentBase *const component,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(component);
    _testerBase->dispatchTlm(id, timeTag, val);
  }

  void FileDownlinkTesterBase ::
    from_eventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::LogBuffer &args
    )
  {
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(component);
    _testerBase->dispatchEvents(id, timeTag, severity, args);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void FileDownlinkTesterBase ::
    from_textEventOut_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        FwEventIdType id,
        Fw::Time &timeTag,
        const Fw::LogSeverity &severity,
        Fw::TextLogString &text
    )
  {
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(component);
    _testerBase->textLogIn(id,timeTag,severity,text);
  }
#endif

  void FileDownlinkTesterBase ::
    from_timeCaller_static(
        Fw::PassiveComponentBase *const component,
        const NATIVE_INT_TYPE portNum,
        Fw::Time& time
    )
  {
    FileDownlinkTesterBase* _testerBase =
      static_cast<FileDownlinkTesterBase*>(component);
    time = _testerBase->m_testTime;
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_FileComplete->clear();
    this->fromPortHistory_bufferSendOut->clear();
    this->fromPortHistory_pingOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: FileComplete
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    pushFromPortEntry_FileComplete(
        const Svc::SendFileResponse &resp
    )
  {
    FromPortEntry_FileComplete _e = {
      resp
    };
    this->fromPortHistory_FileComplete->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: bufferSendOut
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
    from_FileComplete_handlerBase(
        const NATIVE_INT_TYPE portNum,
        const Svc::SendFileResponse &resp
    )
  {
    FW_ASSERT(portNum < this->getNum_from_FileComplete(),static_cast<FwAssertArgType>(portNum));
    this->from_FileComplete_handler(
        portNum,
        resp
    );
  }

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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
  // Command: SendFile
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    sendCmd_SendFile(
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
    _opcode = FileDownlinkComponentBase::OPCODE_SENDFILE + idBase;

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
  // Command: Cancel
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    sendCmd_Cancel(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileDownlinkComponentBase::OPCODE_CANCEL + idBase;

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
  // Command: SendPartial
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    sendCmd_SendPartial(
        const NATIVE_INT_TYPE instance,
        const U32 cmdSeq,
        const Fw::CmdStringArg& sourceFileName,
        const Fw::CmdStringArg& destFileName,
        U32 startOffset,
        U32 length
    )
  {

    // Serialize arguments

    Fw::CmdArgBuffer buff;
    Fw::SerializeStatus _status;
    _status = buff.serialize(sourceFileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(destFileName);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(startOffset);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));
    _status = buff.serialize(length);
    FW_ASSERT(_status == Fw::FW_SERIALIZE_OK,static_cast<FwAssertArgType>(_status));

    // Call output command port

    FwOpcodeType _opcode;
    const U32 idBase = this->getIdBase();
    _opcode = FileDownlinkComponentBase::OPCODE_SENDPARTIAL + idBase;

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


  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
    setTestTime(const Fw::Time& time)
  {
    this->m_testTime = time;
  }

  // ----------------------------------------------------------------------
  // Telemetry dispatch
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
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

      case FileDownlinkComponentBase::CHANNELID_FILESSENT:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing FilesSent: %d\n", _status);
          return;
        }
        this->tlmInput_FilesSent(timeTag, arg);
        break;
      }

      case FileDownlinkComponentBase::CHANNELID_PACKETSSENT:
      {
        U32 arg;
        const Fw::SerializeStatus _status = val.deserialize(arg);
        if (_status != Fw::FW_SERIALIZE_OK) {
          printf("Error deserializing PacketsSent: %d\n", _status);
          return;
        }
        this->tlmInput_PacketsSent(timeTag, arg);
        break;
      }

      case FileDownlinkComponentBase::CHANNELID_WARNINGS:
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

  void FileDownlinkTesterBase ::
    clearTlm()
  {
    this->tlmSize = 0;
    this->tlmHistory_FilesSent->clear();
    this->tlmHistory_PacketsSent->clear();
    this->tlmHistory_Warnings->clear();
  }

  // ----------------------------------------------------------------------
  // Channel: FilesSent
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    tlmInput_FilesSent(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_FilesSent e = { timeTag, val };
    this->tlmHistory_FilesSent->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: PacketsSent
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    tlmInput_PacketsSent(
        const Fw::Time& timeTag,
        const U32& val
    )
  {
    TlmEntry_PacketsSent e = { timeTag, val };
    this->tlmHistory_PacketsSent->push_back(e);
    ++this->tlmSize;
  }

  // ----------------------------------------------------------------------
  // Channel: Warnings
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

      case FileDownlinkComponentBase::EVENTID_FILEOPENERROR:
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

      case FileDownlinkComponentBase::EVENTID_FILEREADERROR:
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

        this->logIn_WARNING_HI_FileReadError(fileName, status);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_FILESENT:
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

        this->logIn_ACTIVITY_HI_FileSent(sourceFileName, destFileName);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_DOWNLINKCANCELED:
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

        this->logIn_ACTIVITY_HI_DownlinkCanceled(sourceFileName, destFileName);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_DOWNLINKTIMEOUT:
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

        this->logIn_WARNING_HI_DownlinkTimeout(sourceFileName, destFileName);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_DOWNLINKPARTIALWARNING:
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
        FW_ASSERT(_numArgs == 5,_numArgs,5);

#endif
        U32 startOffset;
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
        _status = args.deserialize(startOffset);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 length;
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
        _status = args.deserialize(length);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 filesize;
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
        _status = args.deserialize(filesize);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

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

        this->logIn_WARNING_LO_DownlinkPartialWarning(startOffset, length, filesize, sourceFileName, destFileName);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_DOWNLINKPARTIALFAIL:
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

        U32 startOffset;
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
        _status = args.deserialize(startOffset);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        U32 filesize;
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
        _status = args.deserialize(filesize);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_DownlinkPartialFail(sourceFileName, destFileName, startOffset, filesize);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_SENDDATAFAIL:
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

        U32 byteOffset;
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
        _status = args.deserialize(byteOffset);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

        this->logIn_WARNING_HI_SendDataFail(sourceFileName, byteOffset);

        break;

      }

      case FileDownlinkComponentBase::EVENTID_SENDSTARTED:
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
        U32 fileSize;
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
        _status = args.deserialize(fileSize);
        FW_ASSERT(
            _status == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(_status)
        );

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

        this->logIn_ACTIVITY_HI_SendStarted(fileSize, sourceFileName, destFileName);

        break;

      }

      default: {
        FW_ASSERT(0, id);
        break;
      }

    }

  }

  void FileDownlinkTesterBase ::
    clearEvents()
  {
    this->eventsSize = 0;
    this->eventHistory_FileOpenError->clear();
    this->eventHistory_FileReadError->clear();
    this->eventHistory_FileSent->clear();
    this->eventHistory_DownlinkCanceled->clear();
    this->eventHistory_DownlinkTimeout->clear();
    this->eventHistory_DownlinkPartialWarning->clear();
    this->eventHistory_DownlinkPartialFail->clear();
    this->eventHistory_SendDataFail->clear();
    this->eventHistory_SendStarted->clear();
  }

#if FW_ENABLE_TEXT_LOGGING

  // ----------------------------------------------------------------------
  // Text events
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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

  void FileDownlinkTesterBase ::
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
  // Event: FileOpenError
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
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
  // Event: FileReadError
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_WARNING_HI_FileReadError(
        const Fw::LogStringArg& fileName,
        I32 status
    )
  {
    EventEntry_FileReadError e = {
      fileName, status
    };
    eventHistory_FileReadError->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: FileSent
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_ACTIVITY_HI_FileSent(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_FileSent e = {
      sourceFileName, destFileName
    };
    eventHistory_FileSent->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkCanceled
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_ACTIVITY_HI_DownlinkCanceled(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_DownlinkCanceled e = {
      sourceFileName, destFileName
    };
    eventHistory_DownlinkCanceled->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkTimeout
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_WARNING_HI_DownlinkTimeout(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_DownlinkTimeout e = {
      sourceFileName, destFileName
    };
    eventHistory_DownlinkTimeout->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkPartialWarning
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_WARNING_LO_DownlinkPartialWarning(
        U32 startOffset,
        U32 length,
        U32 filesize,
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_DownlinkPartialWarning e = {
      startOffset, length, filesize, sourceFileName, destFileName
    };
    eventHistory_DownlinkPartialWarning->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkPartialFail
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_WARNING_HI_DownlinkPartialFail(
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName,
        U32 startOffset,
        U32 filesize
    )
  {
    EventEntry_DownlinkPartialFail e = {
      sourceFileName, destFileName, startOffset, filesize
    };
    eventHistory_DownlinkPartialFail->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: SendDataFail
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_WARNING_HI_SendDataFail(
        const Fw::LogStringArg& sourceFileName,
        U32 byteOffset
    )
  {
    EventEntry_SendDataFail e = {
      sourceFileName, byteOffset
    };
    eventHistory_SendDataFail->push_back(e);
    ++this->eventsSize;
  }

  // ----------------------------------------------------------------------
  // Event: SendStarted
  // ----------------------------------------------------------------------

  void FileDownlinkTesterBase ::
    logIn_ACTIVITY_HI_SendStarted(
        U32 fileSize,
        const Fw::LogStringArg& sourceFileName,
        const Fw::LogStringArg& destFileName
    )
  {
    EventEntry_SendStarted e = {
      fileSize, sourceFileName, destFileName
    };
    eventHistory_SendStarted->push_back(e);
    ++this->eventsSize;
  }

} // end namespace Svc
