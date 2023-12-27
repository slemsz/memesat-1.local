// ======================================================================
// \title  TcpClientComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for TcpClient component base class
// ======================================================================

#include <cstdio>

#include "F-Prime/Drv/TcpClient/TcpClientComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Drv {

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void TcpClientComponentBase ::
    init(NATIVE_INT_TYPE instance)
  {
    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port send
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_send_InputPorts());
      port++
    ) {
      this->m_send_InputPort[port].init();
      this->m_send_InputPort[port].addCallComp(
        this,
        m_p_send_in
      );
      this->m_send_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_send_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_send_InputPort[port].setObjName(portName);
#endif
    }

    // Connect output port allocate
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_allocate_OutputPorts());
      port++
    ) {
      this->m_allocate_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_allocate_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_allocate_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port deallocate
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_deallocate_OutputPorts());
      port++
    ) {
      this->m_deallocate_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_deallocate_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_deallocate_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port ready
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_ready_OutputPorts());
      port++
    ) {
      this->m_ready_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_ready_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_ready_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port recv
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_recv_OutputPorts());
      port++
    ) {
      this->m_recv_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_recv_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_recv_OutputPort[port].setObjName(portName);
#endif
    }
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Drv::InputByteStreamSendPort* TcpClientComponentBase ::
    get_send_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_send_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_send_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Connect typed input ports to typed output ports
  // ----------------------------------------------------------------------

  void TcpClientComponentBase ::
    set_allocate_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputBufferGetPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_allocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_allocate_OutputPort[portNum].addCallPort(port);
  }

  void TcpClientComponentBase ::
    set_deallocate_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_deallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_deallocate_OutputPort[portNum].addCallPort(port);
  }

  void TcpClientComponentBase ::
    set_ready_OutputPort(
        NATIVE_INT_TYPE portNum,
        Drv::InputByteStreamReadyPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_ready_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_ready_OutputPort[portNum].addCallPort(port);
  }

  void TcpClientComponentBase ::
    set_recv_OutputPort(
        NATIVE_INT_TYPE portNum,
        Drv::InputByteStreamRecvPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_recv_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_recv_OutputPort[portNum].addCallPort(port);
  }

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to typed output ports
  // ----------------------------------------------------------------------

  void TcpClientComponentBase ::
    set_deallocate_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_deallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_deallocate_OutputPort[portNum].registerSerialPort(port);
  }

  void TcpClientComponentBase ::
    set_ready_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_ready_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_ready_OutputPort[portNum].registerSerialPort(port);
  }

  void TcpClientComponentBase ::
    set_recv_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_recv_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_recv_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  TcpClientComponentBase ::
    TcpClientComponentBase(const char* compName) :
      Fw::PassiveComponentBase(compName)
  {

  }

  TcpClientComponentBase ::
    ~TcpClientComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE TcpClientComponentBase ::
    getNum_send_InputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_send_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE TcpClientComponentBase ::
    getNum_allocate_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_allocate_OutputPort));
  }

  NATIVE_INT_TYPE TcpClientComponentBase ::
    getNum_deallocate_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_deallocate_OutputPort));
  }

  NATIVE_INT_TYPE TcpClientComponentBase ::
    getNum_ready_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_ready_OutputPort));
  }

  NATIVE_INT_TYPE TcpClientComponentBase ::
    getNum_recv_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_recv_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for typed output ports
  // ----------------------------------------------------------------------

  bool TcpClientComponentBase ::
    isConnected_allocate_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_allocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_allocate_OutputPort[portNum].isConnected();
  }

  bool TcpClientComponentBase ::
    isConnected_deallocate_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_deallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_deallocate_OutputPort[portNum].isConnected();
  }

  bool TcpClientComponentBase ::
    isConnected_ready_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_ready_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_ready_OutputPort[portNum].isConnected();
  }

  bool TcpClientComponentBase ::
    isConnected_recv_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_recv_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_recv_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  Drv::SendStatus TcpClientComponentBase ::
    send_handlerBase(
        NATIVE_INT_TYPE portNum,
        Fw::Buffer& sendBuffer
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_send_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    Drv::SendStatus retVal;

    // Lock guard mutex before calling
    this->lock();

    // Down call to pure virtual handler method implemented in Impl class
    retVal = this->send_handler(
      portNum,
      sendBuffer
    );

    // Unlock guard mutex
    this->unLock();

    return retVal;
  }

  // ----------------------------------------------------------------------
  // Invocation functions for typed output ports
  // ----------------------------------------------------------------------

  Fw::Buffer TcpClientComponentBase ::
    allocate_out(
        NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(
      portNum < this->getNum_allocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    return this->m_allocate_OutputPort[portNum].invoke(
      size
    );
  }

  void TcpClientComponentBase ::
    deallocate_out(
        NATIVE_INT_TYPE portNum,
        Fw::Buffer& fwBuffer
    )
  {
    FW_ASSERT(
      portNum < this->getNum_deallocate_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_deallocate_OutputPort[portNum].invoke(
      fwBuffer
    );
  }

  void TcpClientComponentBase ::
    ready_out(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_ready_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_ready_OutputPort[portNum].invoke();
  }

  void TcpClientComponentBase ::
    recv_out(
        NATIVE_INT_TYPE portNum,
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
    )
  {
    FW_ASSERT(
      portNum < this->getNum_recv_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_recv_OutputPort[portNum].invoke(
      recvBuffer,
      recvStatus
    );
  }

  // ----------------------------------------------------------------------
  // Mutex operations for guarded ports
  //
  // You can override these operations to provide more sophisticated
  // synchronization
  // ----------------------------------------------------------------------

  void TcpClientComponentBase ::
    lock()
  {
    this->m_guardedPortMutex.lock();
  }

  void TcpClientComponentBase ::
    unLock()
  {
    this->m_guardedPortMutex.unLock();
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  Drv::SendStatus TcpClientComponentBase ::
    m_p_send_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        Fw::Buffer& sendBuffer
    )
  {
    FW_ASSERT(callComp);
    TcpClientComponentBase* compPtr = static_cast<TcpClientComponentBase*>(callComp);
    return compPtr->send_handlerBase(
      portNum,
      sendBuffer
    );
  }

}