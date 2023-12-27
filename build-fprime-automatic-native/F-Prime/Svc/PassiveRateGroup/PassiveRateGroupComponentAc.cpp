// ======================================================================
// \title  PassiveRateGroupComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveRateGroup component base class
// ======================================================================

#include <cstdio>

#include "F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif

namespace Svc {

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    init(NATIVE_INT_TYPE instance)
  {
    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port CycleIn
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_CycleIn_InputPorts());
      port++
    ) {
      this->m_CycleIn_InputPort[port].init();
      this->m_CycleIn_InputPort[port].addCallComp(
        this,
        m_p_CycleIn_in
      );
      this->m_CycleIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_CycleIn_InputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_CycleIn_InputPort[port].setObjName(portName);
#endif
    }

    // Connect output port Time
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_Time_OutputPorts());
      port++
    ) {
      this->m_Time_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_Time_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_Time_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port Tlm
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_Tlm_OutputPorts());
      port++
    ) {
      this->m_Tlm_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_Tlm_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_Tlm_OutputPort[port].setObjName(portName);
#endif
    }

    // Connect output port RateGroupMemberOut
    for (
      PlatformIntType port = 0;
      port < static_cast<PlatformIntType>(this->getNum_RateGroupMemberOut_OutputPorts());
      port++
    ) {
      this->m_RateGroupMemberOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
        portName,
        sizeof(portName),
        "%s_RateGroupMemberOut_OutputPort[%" PRI_PlatformIntType "]",
        this->m_objName,
        port
      );
      this->m_RateGroupMemberOut_OutputPort[port].setObjName(portName);
#endif
    }
  }

  // ----------------------------------------------------------------------
  // Getters for typed input ports
  // ----------------------------------------------------------------------

  Svc::InputCyclePort* PassiveRateGroupComponentBase ::
    get_CycleIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_CycleIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return &this->m_CycleIn_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Connect input ports to special output ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].addCallPort(port);
  }

  void PassiveRateGroupComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTlmPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Tlm_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Connect typed input ports to typed output ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    set_RateGroupMemberOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Svc::InputSchedPort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_RateGroupMemberOut_OutputPort[portNum].addCallPort(port);
  }

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to special output ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Time_OutputPort[portNum].registerSerialPort(port);
  }

  void PassiveRateGroupComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_Tlm_OutputPort[portNum].registerSerialPort(port);
  }

#endif

#if FW_PORT_SERIALIZATION

  // ----------------------------------------------------------------------
  // Connect serial input ports to typed output ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    set_RateGroupMemberOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort* port
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    this->m_RateGroupMemberOut_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  PassiveRateGroupComponentBase ::
    PassiveRateGroupComponentBase(const char* compName) :
      Fw::PassiveComponentBase(compName)
  {
    // Write telemetry channel MaxCycleTime
    this->m_first_update_MaxCycleTime = true;
    this->m_last_MaxCycleTime = 0;
  }

  PassiveRateGroupComponentBase ::
    ~PassiveRateGroupComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed input ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PassiveRateGroupComponentBase ::
    getNum_CycleIn_InputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_CycleIn_InputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of special output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PassiveRateGroupComponentBase ::
    getNum_Time_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Time_OutputPort));
  }

  NATIVE_INT_TYPE PassiveRateGroupComponentBase ::
    getNum_Tlm_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_Tlm_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of typed output ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE PassiveRateGroupComponentBase ::
    getNum_RateGroupMemberOut_OutputPorts() const
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_RateGroupMemberOut_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Connection status queries for special output ports
  // ----------------------------------------------------------------------

  bool PassiveRateGroupComponentBase ::
    isConnected_Time_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Time_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Time_OutputPort[portNum].isConnected();
  }

  bool PassiveRateGroupComponentBase ::
    isConnected_Tlm_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_Tlm_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_Tlm_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Connection status queries for typed output ports
  // ----------------------------------------------------------------------

  bool PassiveRateGroupComponentBase ::
    isConnected_RateGroupMemberOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    return this->m_RateGroupMemberOut_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  //
  // Call these functions directly to bypass the corresponding ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    CycleIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        Svc::TimerVal& cycleStart
    )
  {
    // Make sure port number is valid
    FW_ASSERT(
      portNum < this->getNum_CycleIn_InputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );

    // Down call to pure virtual handler method implemented in Impl class
    this->CycleIn_handler(
      portNum,
      cycleStart
    );
  }

  // ----------------------------------------------------------------------
  // Invocation functions for typed output ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    RateGroupMemberOut_out(
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(
      portNum < this->getNum_RateGroupMemberOut_OutputPorts(),
      static_cast<FwAssertArgType>(portNum)
    );
    this->m_RateGroupMemberOut_OutputPort[portNum].invoke(
      context
    );
  }

  // ----------------------------------------------------------------------
  // Telemetry write functions
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    tlmWrite_MaxCycleTime(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
    // Check to see if it is the first time
    if (not this->m_first_update_MaxCycleTime) {
      // Check to see if value has changed. If not, don't write it.
      if (arg == this->m_last_MaxCycleTime) {
        return;
      }
      else {
        this->m_last_MaxCycleTime = arg;
      }
    }
    else {
      this->m_first_update_MaxCycleTime = false;
      this->m_last_MaxCycleTime = arg;
    }

    if (this->m_Tlm_OutputPort[0].isConnected()) {
      if (
        this->m_Time_OutputPort[0].isConnected() &&
        (_tlmTime ==  Fw::ZERO_TIME)
      ) {
        this->m_Time_OutputPort[0].invoke(_tlmTime);
      }

      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
        _stat == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_MAXCYCLETIME;

      this->m_Tlm_OutputPort[0].invoke(
        _id,
        _tlmTime,
        _tlmBuff
      );
    }
  }

  void PassiveRateGroupComponentBase ::
    tlmWrite_CycleTime(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
    if (this->m_Tlm_OutputPort[0].isConnected()) {
      if (
        this->m_Time_OutputPort[0].isConnected() &&
        (_tlmTime ==  Fw::ZERO_TIME)
      ) {
        this->m_Time_OutputPort[0].invoke(_tlmTime);
      }

      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
        _stat == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_CYCLETIME;

      this->m_Tlm_OutputPort[0].invoke(
        _id,
        _tlmTime,
        _tlmBuff
      );
    }
  }

  void PassiveRateGroupComponentBase ::
    tlmWrite_CycleCount(
        U32 arg,
        Fw::Time _tlmTime
    )
  {
    if (this->m_Tlm_OutputPort[0].isConnected()) {
      if (
        this->m_Time_OutputPort[0].isConnected() &&
        (_tlmTime ==  Fw::ZERO_TIME)
      ) {
        this->m_Time_OutputPort[0].invoke(_tlmTime);
      }

      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
        _stat == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_CYCLECOUNT;

      this->m_Tlm_OutputPort[0].invoke(
        _id,
        _tlmTime,
        _tlmBuff
      );
    }
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time PassiveRateGroupComponentBase ::
    getTime()
  {
    if (this->m_Time_OutputPort[0].isConnected()) {
      Fw::Time _time;
      this->m_Time_OutputPort[0].invoke(_time);
      return _time;
    }
    else {
      return Fw::Time(TB_NONE, 0, 0);
    }
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on typed input ports
  // ----------------------------------------------------------------------

  void PassiveRateGroupComponentBase ::
    m_p_CycleIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        Svc::TimerVal& cycleStart
    )
  {
    FW_ASSERT(callComp);
    PassiveRateGroupComponentBase* compPtr = static_cast<PassiveRateGroupComponentBase*>(callComp);
    compPtr->CycleIn_handlerBase(
      portNum,
      cycleStart
    );
  }

}