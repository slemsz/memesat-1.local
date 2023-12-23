// ======================================================================
// \title  ByteStreamDriverModel/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for ByteStreamDriverModel component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdlib>
#include <cstring>
#include "TesterBase.hpp"

namespace Drv {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  ByteStreamDriverModelTesterBase ::
    ByteStreamDriverModelTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize histories for typed user output ports
    this->fromPortHistory_allocate =
      new History<FromPortEntry_allocate>(maxHistorySize);
    this->fromPortHistory_deallocate =
      new History<FromPortEntry_deallocate>(maxHistorySize);
    this->fromPortHistory_recv =
      new History<FromPortEntry_recv>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  ByteStreamDriverModelTesterBase ::
    ~ByteStreamDriverModelTesterBase()
  {
    // Destroy port histories
    delete this->fromPortHistory_allocate;
    // Destroy port histories
    delete this->fromPortHistory_deallocate;
    // Destroy port histories
    delete this->fromPortHistory_recv;
  }

  void ByteStreamDriverModelTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port allocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_allocate());
        ++_port
    ) {

      this->m_from_allocate[_port].init();
      this->m_from_allocate[_port].addCallComp(
          this,
          from_allocate_static
      );
      this->m_from_allocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_allocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_allocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port deallocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_deallocate());
        ++_port
    ) {

      this->m_from_deallocate[_port].init();
      this->m_from_deallocate[_port].addCallComp(
          this,
          from_deallocate_static
      );
      this->m_from_deallocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_deallocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_deallocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port ready

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_ready());
        ++_port
    ) {

      this->m_from_ready[_port].init();
      this->m_from_ready[_port].addCallComp(
          this,
          from_ready_static
      );
      this->m_from_ready[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_ready[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_ready[_port].setObjName(_portName);
#endif

    }

    // Attach input port recv

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_recv());
        ++_port
    ) {

      this->m_from_recv[_port].init();
      this->m_from_recv[_port].addCallComp(
          this,
          from_recv_static
      );
      this->m_from_recv[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_recv[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_recv[_port].setObjName(_portName);
#endif

    }

    // Initialize output port poll

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_poll());
        ++_port
    ) {
      this->m_to_poll[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_poll[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_poll[_port].setObjName(_portName);
#endif

    }

    // Initialize output port send

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_send());
        ++_port
    ) {
      this->m_to_send[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_send[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_send[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_from_allocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_allocate));
  }

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_from_deallocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_deallocate));
  }

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_to_poll() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_poll));
  }

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_from_ready() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_ready));
  }

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_from_recv() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_recv));
  }

  NATIVE_INT_TYPE ByteStreamDriverModelTesterBase ::
    getNum_to_send() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_send));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    connect_to_poll(
        const NATIVE_INT_TYPE portNum,
        Drv::InputByteStreamPollPort *const poll
    )
  {
    FW_ASSERT(portNum < this->getNum_to_poll(),static_cast<FwAssertArgType>(portNum));
    this->m_to_poll[portNum].addCallPort(poll);
  }

  void ByteStreamDriverModelTesterBase ::
    connect_to_send(
        const NATIVE_INT_TYPE portNum,
        Drv::InputByteStreamSendPort *const send
    )
  {
    FW_ASSERT(portNum < this->getNum_to_send(),static_cast<FwAssertArgType>(portNum));
    this->m_to_send[portNum].addCallPort(send);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  Drv::PollStatus ByteStreamDriverModelTesterBase ::
    invoke_to_poll(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &pollBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_poll(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_poll(),static_cast<FwAssertArgType>(portNum));
    return this->m_to_poll[portNum].invoke(
        pollBuffer
    );
  }

  Drv::SendStatus ByteStreamDriverModelTesterBase ::
    invoke_to_send(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &sendBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_send(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_send(),static_cast<FwAssertArgType>(portNum));
    return this->m_to_send[portNum].invoke(
        sendBuffer
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool ByteStreamDriverModelTesterBase ::
    isConnected_to_poll(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_poll(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_poll[portNum].isConnected();
  }

  bool ByteStreamDriverModelTesterBase ::
    isConnected_to_send(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_send(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_send[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputBufferGetPort *ByteStreamDriverModelTesterBase ::
    get_from_allocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_allocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_allocate[portNum];
  }

  Fw::InputBufferSendPort *ByteStreamDriverModelTesterBase ::
    get_from_deallocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_deallocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_deallocate[portNum];
  }

  Drv::InputByteStreamReadyPort *ByteStreamDriverModelTesterBase ::
    get_from_ready(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_ready(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_ready[portNum];
  }

  Drv::InputByteStreamRecvPort *ByteStreamDriverModelTesterBase ::
    get_from_recv(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_recv(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_recv[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  Fw::Buffer ByteStreamDriverModelTesterBase ::
    from_allocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(callComp);
    ByteStreamDriverModelTesterBase* _testerBase =
      static_cast<ByteStreamDriverModelTesterBase*>(callComp);
    return _testerBase->from_allocate_handlerBase(
        portNum,
        size
    );
  }

  void ByteStreamDriverModelTesterBase ::
    from_deallocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    ByteStreamDriverModelTesterBase* _testerBase =
      static_cast<ByteStreamDriverModelTesterBase*>(callComp);
    _testerBase->from_deallocate_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void ByteStreamDriverModelTesterBase ::
    from_ready_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum
    )
  {
    FW_ASSERT(callComp);
    ByteStreamDriverModelTesterBase* _testerBase =
      static_cast<ByteStreamDriverModelTesterBase*>(callComp);
    _testerBase->from_ready_handlerBase(portNum);
  }

  void ByteStreamDriverModelTesterBase ::
    from_recv_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &recvBuffer,
        const Drv::RecvStatus &recvStatus
    )
  {
    FW_ASSERT(callComp);
    ByteStreamDriverModelTesterBase* _testerBase =
      static_cast<ByteStreamDriverModelTesterBase*>(callComp);
    _testerBase->from_recv_handlerBase(
        portNum,
        recvBuffer, recvStatus
    );
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_allocate->clear();
    this->fromPortHistory_deallocate->clear();
    this->fromPortHistorySize_ready = 0;
    this->fromPortHistory_recv->clear();
  }

  // ----------------------------------------------------------------------
  // From port: allocate
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    pushFromPortEntry_allocate(
        U32 size
    )
  {
    FromPortEntry_allocate _e = {
      size
    };
    this->fromPortHistory_allocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: deallocate
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    pushFromPortEntry_deallocate(
        Fw::Buffer &fwBuffer
    )
  {
    FromPortEntry_deallocate _e = {
      fwBuffer
    };
    this->fromPortHistory_deallocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: ready
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    pushFromPortEntry_ready(

    )
  {
    ++this->fromPortHistorySize_ready;
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: recv
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    pushFromPortEntry_recv(
        Fw::Buffer &recvBuffer,
        const Drv::RecvStatus &recvStatus
    )
  {
    FromPortEntry_recv _e = {
      recvBuffer, recvStatus
    };
    this->fromPortHistory_recv->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  Fw::Buffer ByteStreamDriverModelTesterBase ::
    from_allocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(portNum < this->getNum_from_allocate(),static_cast<FwAssertArgType>(portNum));
    return this->from_allocate_handler(
        portNum,
        size
    );
  }

  void ByteStreamDriverModelTesterBase ::
    from_deallocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_deallocate(),static_cast<FwAssertArgType>(portNum));
    this->from_deallocate_handler(
        portNum,
        fwBuffer
    );
  }

  void ByteStreamDriverModelTesterBase ::
    from_ready_handlerBase(
        const NATIVE_INT_TYPE portNum
    )
  {
    FW_ASSERT(portNum < this->getNum_from_ready(),static_cast<FwAssertArgType>(portNum));
    this->from_ready_handler(portNum);
  }

  void ByteStreamDriverModelTesterBase ::
    from_recv_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &recvBuffer,
        const Drv::RecvStatus &recvStatus
    )
  {
    FW_ASSERT(portNum < this->getNum_from_recv(),static_cast<FwAssertArgType>(portNum));
    this->from_recv_handler(
        portNum,
        recvBuffer, recvStatus
    );
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelTesterBase ::
    clearHistory()
  {
    this->clearFromPortHistory();
  }

} // end namespace Drv
