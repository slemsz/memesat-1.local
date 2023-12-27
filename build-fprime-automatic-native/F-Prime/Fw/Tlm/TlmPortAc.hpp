// ======================================================================
// \title  TlmPortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Tlm port
// ======================================================================

#ifndef Fw_TlmPortAc_HPP
#define Fw_TlmPortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Time/Time.hpp"
#include "Fw/Tlm/TlmBuffer.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace Fw {

  //! Input Tlm port
  //! Port for sending telemetry
  class InputTlmPort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          sizeof(FwChanIdType) +
          Fw::Time::SERIALIZED_SIZE +
          Fw::TlmBuffer::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        FwChanIdType id,
        Fw::Time& timeTag,
        Fw::TlmBuffer& val
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputTlmPort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(
          FwChanIdType id, //!< Telemetry Channel ID
          Fw::Time& timeTag, //!< Time Tag
          Fw::TlmBuffer& val //!< Buffer containing serialized telemetry value
      );

    private:

#if FW_PORT_SERIALIZATION == 1

      //! Invoke the port with serialized arguments
      Fw::SerializeStatus invokeSerial(Fw::SerializeBufferBase& _buffer);

#endif

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the port callback function
      CompFuncPtr m_func;

  };

  //! Output Tlm port
  //! Port for sending telemetry
  class OutputTlmPort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputTlmPort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputTlmPort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(
          FwChanIdType id, //!< Telemetry Channel ID
          Fw::Time& timeTag, //!< Time Tag
          Fw::TlmBuffer& val //!< Buffer containing serialized telemetry value
      );

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputTlmPort* m_port;

  };

}

#endif
