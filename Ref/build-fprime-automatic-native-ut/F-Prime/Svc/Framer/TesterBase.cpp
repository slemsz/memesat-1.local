// ======================================================================
// \title  Framer/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for Framer component test harness base class
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

  FramerTesterBase ::
    FramerTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize histories for typed user output ports
    this->fromPortHistory_bufferDeallocate =
      new History<FromPortEntry_bufferDeallocate>(maxHistorySize);
    this->fromPortHistory_comStatusOut =
      new History<FromPortEntry_comStatusOut>(maxHistorySize);
    this->fromPortHistory_framedAllocate =
      new History<FromPortEntry_framedAllocate>(maxHistorySize);
    this->fromPortHistory_framedOut =
      new History<FromPortEntry_framedOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  FramerTesterBase ::
    ~FramerTesterBase()
  {
    // Destroy port histories
    delete this->fromPortHistory_bufferDeallocate;
    // Destroy port histories
    delete this->fromPortHistory_comStatusOut;
    // Destroy port histories
    delete this->fromPortHistory_framedAllocate;
    // Destroy port histories
    delete this->fromPortHistory_framedOut;
  }

  void FramerTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

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

    // Attach input port comStatusOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_comStatusOut());
        ++_port
    ) {

      this->m_from_comStatusOut[_port].init();
      this->m_from_comStatusOut[_port].addCallComp(
          this,
          from_comStatusOut_static
      );
      this->m_from_comStatusOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_comStatusOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_comStatusOut[_port].setObjName(_portName);
#endif

    }

    // Attach input port framedAllocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_framedAllocate());
        ++_port
    ) {

      this->m_from_framedAllocate[_port].init();
      this->m_from_framedAllocate[_port].addCallComp(
          this,
          from_framedAllocate_static
      );
      this->m_from_framedAllocate[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_framedAllocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_framedAllocate[_port].setObjName(_portName);
#endif

    }

    // Attach input port framedOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_framedOut());
        ++_port
    ) {

      this->m_from_framedOut[_port].init();
      this->m_from_framedOut[_port].addCallComp(
          this,
          from_framedOut_static
      );
      this->m_from_framedOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_framedOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_framedOut[_port].setObjName(_portName);
#endif

    }

    // Initialize output port bufferIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferIn());
        ++_port
    ) {
      this->m_to_bufferIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferIn[_port].setObjName(_portName);
#endif

    }

    // Initialize output port comIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_comIn());
        ++_port
    ) {
      this->m_to_comIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_comIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_comIn[_port].setObjName(_portName);
#endif

    }

    // Initialize output port comStatusIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_comStatusIn());
        ++_port
    ) {
      this->m_to_comStatusIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_comStatusIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_comStatusIn[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_from_bufferDeallocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_bufferDeallocate));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_to_bufferIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferIn));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_to_comIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_comIn));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_to_comStatusIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_comStatusIn));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_from_comStatusOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_comStatusOut));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_from_framedAllocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_framedAllocate));
  }

  NATIVE_INT_TYPE FramerTesterBase ::
    getNum_from_framedOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_framedOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    connect_to_bufferIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort *const bufferIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferIn[portNum].addCallPort(bufferIn);
  }

  void FramerTesterBase ::
    connect_to_comIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputComPort *const comIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_comIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_comIn[portNum].addCallPort(comIn);
  }

  void FramerTesterBase ::
    connect_to_comStatusIn(
        const NATIVE_INT_TYPE portNum,
        Fw::InputSuccessConditionPort *const comStatusIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_comStatusIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_comStatusIn[portNum].addCallPort(comStatusIn);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    invoke_to_bufferIn(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferIn[portNum].invoke(
        fwBuffer
    );
  }

  void FramerTesterBase ::
    invoke_to_comIn(
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(portNum < this->getNum_to_comIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_comIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_comIn[portNum].invoke(
        data, context
    );
  }

  void FramerTesterBase ::
    invoke_to_comStatusIn(
        const NATIVE_INT_TYPE portNum,
        Fw::Success &condition
    )
  {
    FW_ASSERT(portNum < this->getNum_to_comStatusIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_comStatusIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_comStatusIn[portNum].invoke(
        condition
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool FramerTesterBase ::
    isConnected_to_bufferIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferIn[portNum].isConnected();
  }

  bool FramerTesterBase ::
    isConnected_to_comIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_comIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_comIn[portNum].isConnected();
  }

  bool FramerTesterBase ::
    isConnected_to_comStatusIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_comStatusIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_comStatusIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputBufferSendPort *FramerTesterBase ::
    get_from_bufferDeallocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_bufferDeallocate[portNum];
  }

  Fw::InputSuccessConditionPort *FramerTesterBase ::
    get_from_comStatusOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_comStatusOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_comStatusOut[portNum];
  }

  Fw::InputBufferGetPort *FramerTesterBase ::
    get_from_framedAllocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_framedAllocate(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_framedAllocate[portNum];
  }

  Drv::InputByteStreamSendPort *FramerTesterBase ::
    get_from_framedOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_framedOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_framedOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    from_bufferDeallocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(callComp);
    FramerTesterBase* _testerBase =
      static_cast<FramerTesterBase*>(callComp);
    _testerBase->from_bufferDeallocate_handlerBase(
        portNum,
        fwBuffer
    );
  }

  void FramerTesterBase ::
    from_comStatusOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Success &condition
    )
  {
    FW_ASSERT(callComp);
    FramerTesterBase* _testerBase =
      static_cast<FramerTesterBase*>(callComp);
    _testerBase->from_comStatusOut_handlerBase(
        portNum,
        condition
    );
  }

  Fw::Buffer FramerTesterBase ::
    from_framedAllocate_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(callComp);
    FramerTesterBase* _testerBase =
      static_cast<FramerTesterBase*>(callComp);
    return _testerBase->from_framedAllocate_handlerBase(
        portNum,
        size
    );
  }

  Drv::SendStatus FramerTesterBase ::
    from_framedOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &sendBuffer
    )
  {
    FW_ASSERT(callComp);
    FramerTesterBase* _testerBase =
      static_cast<FramerTesterBase*>(callComp);
    return _testerBase->from_framedOut_handlerBase(
        portNum,
        sendBuffer
    );
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_bufferDeallocate->clear();
    this->fromPortHistory_comStatusOut->clear();
    this->fromPortHistory_framedAllocate->clear();
    this->fromPortHistory_framedOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: bufferDeallocate
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
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
  // From port: comStatusOut
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    pushFromPortEntry_comStatusOut(
        Fw::Success &condition
    )
  {
    FromPortEntry_comStatusOut _e = {
      condition
    };
    this->fromPortHistory_comStatusOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: framedAllocate
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    pushFromPortEntry_framedAllocate(
        U32 size
    )
  {
    FromPortEntry_framedAllocate _e = {
      size
    };
    this->fromPortHistory_framedAllocate->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: framedOut
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    pushFromPortEntry_framedOut(
        Fw::Buffer &sendBuffer
    )
  {
    FromPortEntry_framedOut _e = {
      sendBuffer
    };
    this->fromPortHistory_framedOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
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

  void FramerTesterBase ::
    from_comStatusOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Success &condition
    )
  {
    FW_ASSERT(portNum < this->getNum_from_comStatusOut(),static_cast<FwAssertArgType>(portNum));
    this->from_comStatusOut_handler(
        portNum,
        condition
    );
  }

  Fw::Buffer FramerTesterBase ::
    from_framedAllocate_handlerBase(
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(portNum < this->getNum_from_framedAllocate(),static_cast<FwAssertArgType>(portNum));
    return this->from_framedAllocate_handler(
        portNum,
        size
    );
  }

  Drv::SendStatus FramerTesterBase ::
    from_framedOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &sendBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_from_framedOut(),static_cast<FwAssertArgType>(portNum));
    return this->from_framedOut_handler(
        portNum,
        sendBuffer
    );
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void FramerTesterBase ::
    clearHistory()
  {
    this->clearFromPortHistory();
  }

} // end namespace Svc
