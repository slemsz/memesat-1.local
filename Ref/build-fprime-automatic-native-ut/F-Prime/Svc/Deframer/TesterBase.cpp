// ======================================================================
// \title  Deframer/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for Deframer component test harness base class
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

  DeframerTesterBase ::
    DeframerTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize histories for typed user output ports
    this->fromPortHistory_bufferAllocate =
      new History<FromPortEntry_bufferAllocate>(maxHistorySize);
    this->fromPortHistory_bufferDeallocate =
      new History<FromPortEntry_bufferDeallocate>(maxHistorySize);
    this->fromPortHistory_bufferOut =
      new History<FromPortEntry_bufferOut>(maxHistorySize);
    this->fromPortHistory_comOut =
      new History<FromPortEntry_comOut>(maxHistorySize);
    this->fromPortHistory_framedDeallocate =
      new History<FromPortEntry_framedDeallocate>(maxHistorySize);
    this->fromPortHistory_framedPoll =
      new History<FromPortEntry_framedPoll>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  DeframerTesterBase ::
    ~DeframerTesterBase()
  {
    // Destroy port histories
    delete this->fromPortHistory_bufferAllocate;
    // Destroy port histories
    delete this->fromPortHistory_bufferDeallocate;
    // Destroy port histories
    delete this->fromPortHistory_bufferOut;
    // Destroy port histories
    delete this->fromPortHistory_comOut;
    // Destroy port histories
    delete this->fromPortHistory_framedDeallocate;
    // Destroy port histories
    delete this->fromPortHistory_framedPoll;
  }

  void DeframerTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port bufferAllocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_bufferAllocate());
        ++_port
    ) {

      this->m_from_bufferAllocate[_port].init();
      this->m_from_bufferAllocate[_port].addCallComp(
          this,
          from_bufferAllocate_static
      );
      this->m_from_bufferAllocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_bufferAllocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_bufferAllocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port bufferDeallocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_bufferDeallocate());
        ++_port
    ) {

      this->m_from_bufferDeallocate[_port].init();
      this->m_from_bufferDeallocate[_port].addCallComp(
          this,
          from_bufferDeallocate_static
      );
      this->m_from_bufferDeallocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_bufferDeallocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_bufferDeallocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port bufferOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_bufferOut());
        ++_port
    ) {

      this->m_from_bufferOut[_port].init();
      this->m_from_bufferOut[_port].addCallComp(
          this,
          from_bufferOut_static
      );
      this->m_from_bufferOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_bufferOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_bufferOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port comOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_comOut());
        ++_port
    ) {

      this->m_from_comOut[_port].init();
      this->m_from_comOut[_port].addCallComp(
          this,
          from_comOut_static
      );
      this->m_from_comOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_comOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_comOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port framedDeallocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_framedDeallocate());
        ++_port
    ) {

      this->m_from_framedDeallocate[_port].init();
      this->m_from_framedDeallocate[_port].addCallComp(
          this,
          from_framedDeallocate_static
      );
      this->m_from_framedDeallocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_framedDeallocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_framedDeallocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port framedPoll

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_framedPoll());
        ++_port
    ) {

      this->m_from_framedPoll[_port].init();
      this->m_from_framedPoll[_port].addCallComp(
          this,
          from_framedPoll_static
      );
      this->m_from_framedPoll[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_framedPoll[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_framedPoll[_port].setObjName(_portName);
#endif

    }

    // Initialize output port cmdResponseIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_cmdResponseIn());
        ++_port
    ) {
      this->m_to_cmdResponseIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_cmdResponseIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_cmdResponseIn[_port].setObjName(_portName);
#endif

    }

    // Initialize output port framedIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_framedIn());
        ++_port
    ) {
      this->m_to_framedIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_framedIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_framedIn[_port].setObjName(_portName);
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

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_bufferAllocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferAllocate));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_bufferDeallocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferDeallocate));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_bufferOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferOut));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_to_cmdResponseIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_cmdResponseIn));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_comOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_comOut));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_framedDeallocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_framedDeallocate));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_to_framedIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_framedIn));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_from_framedPoll() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_framedPoll));
  }

  NATIVE_INT_TYPE DeframerTesterBase ::
    getNum_to_schedIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_schedIn));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    connect_to_cmdResponseIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputCmdResponsePort *const cmdResponseIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_cmdResponseIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_cmdResponseIn[portNum].addCallPort(cmdResponseIn);
  }

  void DeframerTesterBase ::
    connect_to_framedIn(
        const NATIVE_INT_TYPE portNum,
        Drv::InputByteStreamRecvPort *const framedIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_framedIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_framedIn[portNum].addCallPort(framedIn);
  }

  void DeframerTesterBase ::
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

  void DeframerTesterBase ::
    invoke_to_cmdResponseIn(
        const NATIVE_INT_TYPE portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        const Fw::CmdResponse &response
    )
  {
    FW_ASSERT(portNum < this->getNum_to_cmdResponseIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_cmdResponseIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_cmdResponseIn[portNum].invoke(
        opCode, cmdSeq, response
    );
  }

  void DeframerTesterBase ::
    invoke_to_framedIn(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &recvBuffer,
        const Drv::RecvStatus &recvStatus
    )
  {
    FW_ASSERT(portNum < this->getNum_to_framedIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_framedIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_framedIn[portNum].invoke(
        recvBuffer, recvStatus
    );
  }

  void DeframerTesterBase ::
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

  bool DeframerTesterBase ::
    isConnected_to_cmdResponseIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_cmdResponseIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_cmdResponseIn[portNum].isConnected();
  }

  bool DeframerTesterBase ::
    isConnected_to_framedIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_framedIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_framedIn[portNum].isConnected();
  }

  bool DeframerTesterBase ::
    isConnected_to_schedIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_schedIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_schedIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputBufferGetPort *DeframerTesterBase ::
    get_from_bufferAllocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferAllocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferAllocate[portNum];
  }

  Fw::InputBufferSendPort *DeframerTesterBase ::
    get_from_bufferDeallocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferDeallocate[portNum];
  }

  Fw::InputBufferSendPort *DeframerTesterBase ::
    get_from_bufferOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferOut[portNum];
  }

  Fw::InputComPort *DeframerTesterBase ::
    get_from_comOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_comOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_comOut[portNum];
  }

  Fw::InputBufferSendPort *DeframerTesterBase ::
    get_from_framedDeallocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_framedDeallocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_framedDeallocate[portNum];
  }

  Drv::InputByteStreamPollPort *DeframerTesterBase ::
    get_from_framedPoll(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_framedPoll(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_framedPoll[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  Fw::Buffer DeframerTesterBase ::
    from_bufferAllocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    return _testerBase->from_bufferAllocate_handlerBase(
        portNum,
        size
    );
  }

  void DeframerTesterBase ::
    from_bufferDeallocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    _testerBase->from_bufferDeallocate_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void DeframerTesterBase ::
    from_bufferOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    _testerBase->from_bufferOut_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void DeframerTesterBase ::
    from_comOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    _testerBase->from_comOut_handlerBase(
        portNum,
        data, context
    );
  }

  void DeframerTesterBase ::
    from_framedDeallocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    _testerBase->from_framedDeallocate_handlerBase(
        portNum,
        fwBuffer
    );
  }

  Drv::PollStatus DeframerTesterBase ::
    from_framedPoll_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &pollBuffer
    )
  {
    FW_ASSERT(callComp);
    DeframerTesterBase* _testerBase =
      static_cast<DeframerTesterBase*>(callComp);
    return _testerBase->from_framedPoll_handlerBase(
        portNum,
        pollBuffer
    );
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_bufferAllocate->clear();
    this->fromPortHistory_bufferDeallocate->clear();
    this->fromPortHistory_bufferOut->clear();
    this->fromPortHistory_comOut->clear();
    this->fromPortHistory_framedDeallocate->clear();
    this->fromPortHistory_framedPoll->clear();
  }

  // ----------------------------------------------------------------------
  // From port: bufferAllocate
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_bufferAllocate(
        U32 size
    )
  {
    FromPortEntry_bufferAllocate _e = {
      size
    };
    this->fromPortHistory_bufferAllocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: bufferDeallocate
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_bufferDeallocate(
        Fw::Buffer &fwBuffer
    )
  {
    FromPortEntry_bufferDeallocate _e = {
      fwBuffer
    };
    this->fromPortHistory_bufferDeallocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: bufferOut
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_bufferOut(
        Fw::Buffer &fwBuffer
    )
  {
    FromPortEntry_bufferOut _e = {
      fwBuffer
    };
    this->fromPortHistory_bufferOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: comOut
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_comOut(
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FromPortEntry_comOut _e = {
      data, context
    };
    this->fromPortHistory_comOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: framedDeallocate
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_framedDeallocate(
        Fw::Buffer &fwBuffer
    )
  {
    FromPortEntry_framedDeallocate _e = {
      fwBuffer
    };
    this->fromPortHistory_framedDeallocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: framedPoll
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    pushFromPortEntry_framedPoll(
        Fw::Buffer &pollBuffer
    )
  {
    FromPortEntry_framedPoll _e = {
      pollBuffer
    };
    this->fromPortHistory_framedPoll->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  Fw::Buffer DeframerTesterBase ::
    from_bufferAllocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(portNum < this->getNum_from_bufferAllocate(),static_cast<FwAssertArgType>(portNum));
    return this->from_bufferAllocate_handler(
        portNum,
        size
    );
  }

  void DeframerTesterBase ::
    from_bufferDeallocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    this->from_bufferDeallocate_handler(
        portNum,
        fwBuffer
    );
  }

  void DeframerTesterBase ::
    from_bufferOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_bufferOut(),static_cast<FwAssertArgType>(portNum));
    this->from_bufferOut_handler(
        portNum,
        fwBuffer
    );
  }

  void DeframerTesterBase ::
    from_comOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(portNum < this->getNum_from_comOut(),static_cast<FwAssertArgType>(portNum));
    this->from_comOut_handler(
        portNum,
        data, context
    );
  }

  void DeframerTesterBase ::
    from_framedDeallocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_framedDeallocate(),static_cast<FwAssertArgType>(portNum));
    this->from_framedDeallocate_handler(
        portNum,
        fwBuffer
    );
  }

  Drv::PollStatus DeframerTesterBase ::
    from_framedPoll_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &pollBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_framedPoll(),static_cast<FwAssertArgType>(portNum));
    return this->from_framedPoll_handler(
        portNum,
        pollBuffer
    );
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void DeframerTesterBase ::
    clearHistory()
  {
    this->clearFromPortHistory();
  }

} // end namespace Svc
