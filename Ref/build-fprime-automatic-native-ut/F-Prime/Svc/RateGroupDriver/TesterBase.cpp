// ======================================================================
// \title  RateGroupDriver/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for RateGroupDriver component test harness base class
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

  RateGroupDriverTesterBase ::
    RateGroupDriverTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
    // Initialize histories for typed user output ports
    this->fromPortHistory_CycleOut =
      new History<FromPortEntry_CycleOut>(maxHistorySize);
    // Clear history
    this->clearHistory();
  }

  RateGroupDriverTesterBase ::
    ~RateGroupDriverTesterBase()
  {
    // Destroy port histories
    delete this->fromPortHistory_CycleOut;
  }

  void RateGroupDriverTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Attach input port CycleOut

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_from_CycleOut());
        ++_port
    ) {

      this->m_from_CycleOut[_port].init();
      this->m_from_CycleOut[_port].addCallComp(
          this,
          from_CycleOut_static
      );
      this->m_from_CycleOut[_port].setPortNum(_port);

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      (void) snprintf(
          _portName,
          sizeof(_portName),
          "%s_from_CycleOut[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_from_CycleOut[_port].setObjName(_portName);
#endif

    }

    // Initialize output port CycleIn

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_CycleIn());
        ++_port
    ) {
      this->m_to_CycleIn[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_CycleIn[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_CycleIn[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE RateGroupDriverTesterBase ::
    getNum_to_CycleIn() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_CycleIn));
  }

  NATIVE_INT_TYPE RateGroupDriverTesterBase ::
    getNum_from_CycleOut() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_from_CycleOut));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    connect_to_CycleIn(
        const NATIVE_INT_TYPE portNum,
        Svc::InputCyclePort *const CycleIn
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CycleIn[portNum].addCallPort(CycleIn);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    invoke_to_CycleIn(
        const NATIVE_INT_TYPE portNum,
        Svc::TimerVal &cycleStart
    )
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_CycleIn(),static_cast<FwAssertArgType>(portNum));
    this->m_to_CycleIn[portNum].invoke(
        cycleStart
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool RateGroupDriverTesterBase ::
    isConnected_to_CycleIn(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_CycleIn(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_CycleIn[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Getters for from ports
  // ----------------------------------------------------------------------

  Svc::InputCyclePort *RateGroupDriverTesterBase ::
    get_from_CycleOut(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_from_CycleOut(),static_cast<FwAssertArgType>(portNum));
    return &this->m_from_CycleOut[portNum];
  }

  // ----------------------------------------------------------------------
  // Static functions for from ports
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    from_CycleOut_static(
        Fw::PassiveComponentBase *const callComp,
        const NATIVE_INT_TYPE portNum,
        Svc::TimerVal &cycleStart
    )
  {
    FW_ASSERT(callComp);
    RateGroupDriverTesterBase* _testerBase =
      static_cast<RateGroupDriverTesterBase*>(callComp);
    _testerBase->from_CycleOut_handlerBase(
        portNum,
        cycleStart
    );
  }

  // ----------------------------------------------------------------------
  // Histories for typed from ports
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    clearFromPortHistory()
  {
    this->fromPortHistorySize = 0;
    this->fromPortHistory_CycleOut->clear();
  }

  // ----------------------------------------------------------------------
  // From port: CycleOut
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    pushFromPortEntry_CycleOut(
        Svc::TimerVal &cycleStart
    )
  {
    FromPortEntry_CycleOut _e = {
      cycleStart
    };
    this->fromPortHistory_CycleOut->push_back(_e);
    ++this->fromPortHistorySize;
  }

  // ----------------------------------------------------------------------
  // Handler base functions for from ports
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    from_CycleOut_handlerBase(
        const NATIVE_INT_TYPE portNum,
        Svc::TimerVal &cycleStart
    )
  {
    FW_ASSERT(portNum < this->getNum_from_CycleOut(),static_cast<FwAssertArgType>(portNum));
    this->from_CycleOut_handler(
        portNum,
        cycleStart
    );
  }

  // ----------------------------------------------------------------------
  // History
  // ----------------------------------------------------------------------

  void RateGroupDriverTesterBase ::
    clearHistory()
  {
    this->clearFromPortHistory();
  }

} // end namespace Svc
