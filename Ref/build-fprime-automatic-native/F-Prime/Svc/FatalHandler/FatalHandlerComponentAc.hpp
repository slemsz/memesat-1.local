// ======================================================================
// \title  FatalHandlerComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for FatalHandler component base class
// ======================================================================

#ifndef Svc_FatalHandlerComponentAc_HPP
#define Svc_FatalHandlerComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Svc/Fatal/FatalEventPortAc.hpp"

namespace Svc {

  //! \class FatalHandlerComponentBase
  //! \brief Auto-generated base for FatalHandler component
  //!
  //! Handles FATAL calls
  class FatalHandlerComponentBase :
    public Fw::PassiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class FatalHandlerComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_FATALRECEIVE_INPUT_PORTS = 1,
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize FatalHandlerComponentBase object
      void init(
          NATIVE_INT_TYPE instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return FatalReceive[portNum]
      Svc::InputFatalEventPort* get_FatalReceive_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct FatalHandlerComponentBase object
      FatalHandlerComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy FatalHandlerComponentBase object
      virtual ~FatalHandlerComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of FatalReceive input ports
      //!
      //! \return The number of FatalReceive input ports
      NATIVE_INT_TYPE getNum_FatalReceive_InputPorts();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port FatalReceive
      virtual void FatalReceive_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwEventIdType Id //!< The ID of the FATAL event
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port FatalReceive
      void FatalReceive_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwEventIdType Id //!< The ID of the FATAL event
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port FatalReceive
      static void m_p_FatalReceive_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          FwEventIdType Id //!< The ID of the FATAL event
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port FatalReceive
      Svc::InputFatalEventPort m_FatalReceive_InputPort[NUM_FATALRECEIVE_INPUT_PORTS];

  };

}

#endif