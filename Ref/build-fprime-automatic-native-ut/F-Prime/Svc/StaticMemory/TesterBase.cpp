// ======================================================================
// \title  StaticMemory/test/ut/TesterBase.cpp
// \author Auto-generated
// \brief  cpp file for StaticMemory component test harness base class
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

  StaticMemoryTesterBase ::
    StaticMemoryTesterBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
      Fw::PassiveComponentBase(compName)
  {
  }

  StaticMemoryTesterBase ::
    ~StaticMemoryTesterBase()
  {
  }

  void StaticMemoryTesterBase ::
    init(
        const NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class

		Fw::PassiveComponentBase::init(instance);

    // Initialize output port bufferAllocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferAllocate());
        ++_port
    ) {
      this->m_to_bufferAllocate[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferAllocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferAllocate[_port].setObjName(_portName);
#endif

    }

    // Initialize output port bufferDeallocate

    for (
        PlatformIntType _port = 0;
        _port < static_cast<PlatformIntType>(this->getNum_to_bufferDeallocate());
        ++_port
    ) {
      this->m_to_bufferDeallocate[_port].init();

#if FW_OBJECT_NAMES == 1
      char _portName[120];
      snprintf(
          _portName,
          sizeof(_portName),
          "%s_to_bufferDeallocate[%" PRI_PlatformIntType "]",
          this->m_objName,
          _port
      );
      this->m_to_bufferDeallocate[_port].setObjName(_portName);
#endif

    }

  }

  // ----------------------------------------------------------------------
  // Getters for port counts
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE StaticMemoryTesterBase ::
    getNum_to_bufferAllocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferAllocate));
  }

  NATIVE_INT_TYPE StaticMemoryTesterBase ::
    getNum_to_bufferDeallocate() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_to_bufferDeallocate));
  }

  // ----------------------------------------------------------------------
  // Connectors for to ports
  // ----------------------------------------------------------------------

  void StaticMemoryTesterBase ::
    connect_to_bufferAllocate(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferGetPort *const bufferAllocate
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferAllocate(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferAllocate[portNum].addCallPort(bufferAllocate);
  }

  void StaticMemoryTesterBase ::
    connect_to_bufferDeallocate(
        const NATIVE_INT_TYPE portNum,
        Fw::InputBufferSendPort *const bufferDeallocate
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferDeallocate[portNum].addCallPort(bufferDeallocate);
  }


  // ----------------------------------------------------------------------
  // Invocation functions for to ports
  // ----------------------------------------------------------------------

  Fw::Buffer StaticMemoryTesterBase ::
    invoke_to_bufferAllocate(
        const NATIVE_INT_TYPE portNum,
        U32 size
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferAllocate(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferAllocate(),static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferAllocate[portNum].invoke(
        size
    );
  }

  void StaticMemoryTesterBase ::
    invoke_to_bufferDeallocate(
        const NATIVE_INT_TYPE portNum,
        Fw::Buffer &fwBuffer
    )
  {
    FW_ASSERT(portNum < this->getNum_to_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    FW_ASSERT(portNum < this->getNum_to_bufferDeallocate(),static_cast<FwAssertArgType>(portNum));
    this->m_to_bufferDeallocate[portNum].invoke(
        fwBuffer
    );
  }

  // ----------------------------------------------------------------------
  // Connection status for to ports
  // ----------------------------------------------------------------------

  bool StaticMemoryTesterBase ::
    isConnected_to_bufferAllocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferAllocate(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferAllocate[portNum].isConnected();
  }

  bool StaticMemoryTesterBase ::
    isConnected_to_bufferDeallocate(const NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_to_bufferDeallocate(), static_cast<FwAssertArgType>(portNum));
    return this->m_to_bufferDeallocate[portNum].isConnected();
  }

} // end namespace Svc
