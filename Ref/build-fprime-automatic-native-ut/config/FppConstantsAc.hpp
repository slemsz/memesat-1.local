// ======================================================================
// \title  FppConstantsAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for FPP constants
// ======================================================================

#ifndef config_FppConstantsAc_HPP
#define config_FppConstantsAc_HPP

#include "FpConfig.hpp"

//! Number of rate group member output ports for ActiveRateGroup
enum FppConstant_ActiveRateGroupOutputPorts {
  ActiveRateGroupOutputPorts = 10
};

//! Number of rate group member output ports for PassiveRateGroup
enum FppConstant_PassiveRateGroupOutputPorts {
  PassiveRateGroupOutputPorts = 10
};

//! Used to drive rate groups
enum FppConstant_RateGroupDriverRateGroupPorts {
  RateGroupDriverRateGroupPorts = 3
};

//! Used for command and registration ports
enum FppConstant_CmdDispatcherComponentCommandPorts {
  CmdDispatcherComponentCommandPorts = 30
};

//! Used for uplink/sequencer buffer/response ports
enum FppConstant_CmdDispatcherSequencePorts {
  CmdDispatcherSequencePorts = 5
};

//! Number of static memory allocations
enum FppConstant_StaticMemoryAllocations {
  StaticMemoryAllocations = 4
};

//! Used to ping active components
enum FppConstant_HealthPingPorts {
  HealthPingPorts = 25
};

//! Used for broadcasting completed file downlinks
enum FppConstant_FileDownCompletePorts {
  FileDownCompletePorts = 1
};

//! Used for number of Fw::Com type ports supported by Svc::ComQueue
enum FppConstant_ComQueueComPorts {
  ComQueueComPorts = 2
};

//! Used for number of Fw::Buffer type ports supported by Svc::ComQueue
enum FppConstant_ComQueueBufferPorts {
  ComQueueBufferPorts = 1
};

//! Used for maximum number of connected buffer repeater consumers
enum FppConstant_BufferRepeaterOutputPorts {
  BufferRepeaterOutputPorts = 10
};

enum FppConstant_GenericHubInputPorts {
  GenericHubInputPorts = 10
};

enum FppConstant_GenericHubOutputPorts {
  GenericHubOutputPorts = 10
};

enum FppConstant_GenericHubInputBuffers {
  GenericHubInputBuffers = 10
};

enum FppConstant_GenericHubOutputBuffers {
  GenericHubOutputBuffers = 10
};

#endif