// ======================================================================
// \title  Time/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for Time component test harness base class
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

  TimeTesterBase ::
    TimeTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
  }

  TimeTesterBase ::
    ~TimeTesterBase()
  {
  }

  void TimeTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Initialize output port timeGetPort

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_timeGetPort());
        ++_port
    ) {
      this->m_to_timeGetPort[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_timeGetPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_timeGetPort[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE TimeTesterBase ::
    getNum_to_timeGetPort() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_timeGetPort));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void TimeTesterBase ::
    connect_to_timeGetPort(
        const NATIVE_INT_TYPE portNum,
        Fw::InputTimePort *const timeGetPort
    )
  {
    FW_ASSERT(portNum < this->getNum_to_timeGetPort(),static_cast<FwAssertArgType>(portNum));
    this->m_to_timeGetPort[portNum].addCallPort(timeGetPort);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  void TimeTesterBase ::
    invoke_to_timeGetPort(
        const NATIVE_INT_TYPE portNum,
        Fw::Time &time
    )
  {
    FW_ASSERT(portNum < this->getNum_to_timeGetPort(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_timeGetPort(),static_cast<FwAssertArgType>(portNum));
    this->m_to_timeGetPort[portNum].invoke(
        time
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool TimeTesterBase ::
    isConnected_to_timeGetPort(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_timeGetPort(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_timeGetPort[portNum].isConnected();
  }

} // end namespace Svc
