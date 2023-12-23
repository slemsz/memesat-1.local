// ======================================================================
// \title  TlmChan/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for TlmChan component test harness base class
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

  TlmChanTesterBase ::
    TlmChanTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize histories for typed user output ports
    this->fromPortHistory_PktSend =
      new History<FromPortEntry_PktSend>(maxHistorySize);
    this->fromPortHistory_pingOut =
      new History<FromPortEntry_pingOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  TlmChanTesterBase ::
    ~TlmChanTesterBase()
  {
    // Destroy port histories
    delete this->fromPortHistory_PktSend;
    // Destroy port histories
    delete this->fromPortHistory_pingOut;
  }

  void TlmChanTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port PktSend

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_PktSend());
        ++_port
    ) {

      this->m_from_PktSend[_port].init();
      this->m_from_PktSend[_port].addCallComp(
          this,
          from_PktSend_static
      );
      this->m_from_PktSend[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_PktSend[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_PktSend[_port].setObjName(_portName);
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

    // Initialize output port TlmGet

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_TlmGet());
        ++_port
    ) {
      this->m_to_TlmGet[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_TlmGet[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_TlmGet[_port].setObjName(_portName);
#endif

    }

    // Initialize output port TlmRecv

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_TlmRecv());
        ++_port
    ) {
      this->m_to_TlmRecv[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_TlmRecv[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_TlmRecv[_port].setObjName(_portName);
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

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_from_PktSend() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_PktSend));
  }

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_to_Run() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_Run));
  }

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_to_TlmGet() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_TlmGet));
  }

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_to_TlmRecv() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_TlmRecv));
  }

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_to_pingIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_pingIn));
  }

  NATIVE_INT_TYPE TlmChanTesterBase ::
    getNum_from_pingOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_pingOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void TlmChanTesterBase ::
    connect_to_Run(
        const NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort *const Run
    )
  {
    FW_ASSERT(portNum < this->getNum_to_Run(),static_cast<FwAssertArgType>(portNum));
    this->m_to_Run[portNum].addCallPort(Run);
  }

  void TlmChanTesterBase ::
    connect_to_TlmGet(
        const NATIVE_INT_TYPE portNum,
        Fw::InputTlmGetPort *const TlmGet
    )
  {
    FW_ASSERT(portNum < this->getNum_to_TlmGet(),static_cast<FwAssertArgType>(portNum));
    this->m_to_TlmGet[portNum].addCallPort(TlmGet);
  }

  void TlmChanTesterBase ::
    connect_to_TlmRecv(
        const NATIVE_INT_TYPE portNum,
        Fw::InputTlmPort *const TlmRecv
    )
  {
    FW_ASSERT(portNum < this->getNum_to_TlmRecv(),static_cast<FwAssertArgType>(portNum));
    this->m_to_TlmRecv[portNum].addCallPort(TlmRecv);
  }

  void TlmChanTesterBase ::
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

  void TlmChanTesterBase ::
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

  void TlmChanTesterBase ::
    invoke_to_TlmGet(
        const NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    FW_ASSERT(portNum < this->getNum_to_TlmGet(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_TlmGet(),static_cast<FwAssertArgType>(portNum));
    this->m_to_TlmGet[portNum].invoke(
        id, timeTag, val
    );
  }

  void TlmChanTesterBase ::
    invoke_to_TlmRecv(
        const NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time &timeTag,
        Fw::TlmBuffer &val
    )
  {
    FW_ASSERT(portNum < this->getNum_to_TlmRecv(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_TlmRecv(),static_cast<FwAssertArgType>(portNum));
    this->m_to_TlmRecv[portNum].invoke(
        id, timeTag, val
    );
  }

  void TlmChanTesterBase ::
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

  bool TlmChanTesterBase ::
    isConnected_to_Run(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_Run(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_Run[portNum].isConnected();
  }

  bool TlmChanTesterBase ::
    isConnected_to_TlmGet(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_TlmGet(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_TlmGet[portNum].isConnected();
  }

  bool TlmChanTesterBase ::
    isConnected_to_TlmRecv(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_TlmRecv(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_TlmRecv[portNum].isConnected();
  }

  bool TlmChanTesterBase ::
    isConnected_to_pingIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_pingIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_pingIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Fw::InputComPort *TlmChanTesterBase ::
    get_from_PktSend(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_PktSend(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_PktSend[portNum];
  }

  Svc::InputPingPort *TlmChanTesterBase ::
    get_from_pingOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_pingOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_pingOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void TlmChanTesterBase ::
    from_PktSend_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(callComp);
    TlmChanTesterBase* _testerBase =
      static_cast<TlmChanTesterBase*>(callComp);
    _testerBase->from_PktSend_handlerBase(
        portNum,
        data, context
    );
  }

  void TlmChanTesterBase ::
    from_pingOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        U32 key
    )
  {
    FW_ASSERT(callComp);
    TlmChanTesterBase* _testerBase =
      static_cast<TlmChanTesterBase*>(callComp);
    _testerBase->from_pingOut_handlerBase(
        portNum,
        key
    );
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void TlmChanTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_PktSend->clear();
    this->fromPortHistory_pingOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: PktSend
  // ----------------------------------------------------------------------

  void TlmChanTesterBase ::
    pushFromPortEntry_PktSend(
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FromPortEntry_PktSend _e = {
      data, context
    };
    this->fromPortHistory_PktSend->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void TlmChanTesterBase ::
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

  void TlmChanTesterBase ::
    from_PktSend_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Fw::ComBuffer &data,
        U32 context
    )
  {
    FW_ASSERT(portNum < this->getNum_from_PktSend(),static_cast<FwAssertArgType>(portNum));
    this->from_PktSend_handler(
        portNum,
        data, context
    );
  }

  void TlmChanTesterBase ::
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

  void TlmChanTesterBase ::
    clearHistory()
  {
    this->clearFromPortHistory();
  }

} // end namespace Svc
