// ======================================================================
// \title  PingReceiverComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PingReceiver component base class
// ======================================================================

#ifndef Ref_PingReceiverComponentAc_HPP
#define Ref_PingReceiverComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Cmd/CmdString.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Log/LogPortAc.hpp"
#include "Fw/Log/LogString.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Fw/Tlm/TlmPortAc.hpp"
#include "Fw/Tlm/TlmString.hpp"
#include "Svc/Ping/PingPortAc.hpp"

namespace Ref {

  //! \class PingReceiverComponentBase
  //! \brief Auto-generated base for PingReceiver component
  //!
  //! A rate group active component with input and output ping ports
  class PingReceiverComponentBase :
    public Fw::ActiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class PingReceiverComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of special input ports
      enum {
        NUM_CMDDISP_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_PINGIN_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of special output ports
      enum {
        NUM_CMDREG_OUTPUT_PORTS = 1,
        NUM_CMDSTATUS_OUTPUT_PORTS = 1,
        NUM_LOG_OUTPUT_PORTS = 1,
        NUM_LOGTEXT_OUTPUT_PORTS = 1,
        NUM_TIME_OUTPUT_PORTS = 1,
        NUM_TLM_OUTPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_PINGOUT_OUTPUT_PORTS = 1,
      };

      //! Command opcodes
      enum {
        OPCODE_PR_STOPPINGS = 0x0, //!< Command to disable ping response
      };

      //! Event IDs
      enum {
        EVENTID_PR_PINGSDISABLED = 0x0, //!< Disabled ping responses
        EVENTID_PR_PINGRECEIVED = 0x1, //!< Got ping
      };

      //! Channel IDs
      enum {
        CHANNELID_PR_NUMPINGS = 0x0, //!< Channel ID for PR_NumPings
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize PingReceiverComponentBase object
      void init(
          NATIVE_INT_TYPE queueDepth, //!< The queue depth
          NATIVE_INT_TYPE instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for special input ports
      // ----------------------------------------------------------------------

      //! Get special input port at index
      //!
      //! \return CmdDisp[portNum]
      Fw::InputCmdPort* get_CmdDisp_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return PingIn[portNum]
      Svc::InputPingPort* get_PingIn_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect special input ports to special output ports
      // ----------------------------------------------------------------------

      //! Connect port to CmdReg[portNum]
      void set_CmdReg_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputCmdRegPort* port //!< The input port
      );

      //! Connect port to CmdStatus[portNum]
      void set_CmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputCmdResponsePort* port //!< The input port
      );

      //! Connect port to Log[portNum]
      void set_Log_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputLogPort* port //!< The input port
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to LogText[portNum]
      void set_LogText_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputLogTextPort* port //!< The input port
      );

#endif

      //! Connect port to Time[portNum]
      void set_Time_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputTimePort* port //!< The input port
      );

      //! Connect port to Tlm[portNum]
      void set_Tlm_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputTlmPort* port //!< The input port
      );

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to PingOut[portNum]
      void set_PingOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Svc::InputPingPort* port //!< The input port
      );

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to special output ports
      // ----------------------------------------------------------------------

      //! Connect port to CmdReg[portNum]
      void set_CmdReg_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to CmdStatus[portNum]
      void set_CmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to Log[portNum]
      void set_Log_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to LogText[portNum]
      void set_LogText_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

      //! Connect port to Time[portNum]
      void set_Time_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to Tlm[portNum]
      void set_Tlm_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to PingOut[portNum]
      void set_PingOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

    public:

      // ----------------------------------------------------------------------
      // Command registration
      // ----------------------------------------------------------------------

      //! \brief Register commands with the Command Dispatcher
      //!
      //! Connect the dispatcher first
      void regCommands();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct PingReceiverComponentBase object
      PingReceiverComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy PingReceiverComponentBase object
      virtual ~PingReceiverComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special input ports
      // ----------------------------------------------------------------------

      //! Get the number of CmdDisp input ports
      //!
      //! \return The number of CmdDisp input ports
      NATIVE_INT_TYPE getNum_CmdDisp_InputPorts();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of PingIn input ports
      //!
      //! \return The number of PingIn input ports
      NATIVE_INT_TYPE getNum_PingIn_InputPorts();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special output ports
      // ----------------------------------------------------------------------

      //! Get the number of CmdReg output ports
      //!
      //! \return The number of CmdReg output ports
      NATIVE_INT_TYPE getNum_CmdReg_OutputPorts();

      //! Get the number of CmdStatus output ports
      //!
      //! \return The number of CmdStatus output ports
      NATIVE_INT_TYPE getNum_CmdStatus_OutputPorts();

      //! Get the number of Log output ports
      //!
      //! \return The number of Log output ports
      NATIVE_INT_TYPE getNum_Log_OutputPorts();

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Get the number of LogText output ports
      //!
      //! \return The number of LogText output ports
      NATIVE_INT_TYPE getNum_LogText_OutputPorts();

#endif

      //! Get the number of Time output ports
      //!
      //! \return The number of Time output ports
      NATIVE_INT_TYPE getNum_Time_OutputPorts();

      //! Get the number of Tlm output ports
      //!
      //! \return The number of Tlm output ports
      NATIVE_INT_TYPE getNum_Tlm_OutputPorts();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of PingOut output ports
      //!
      //! \return The number of PingOut output ports
      NATIVE_INT_TYPE getNum_PingOut_OutputPorts();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for special output ports
      // ----------------------------------------------------------------------

      //! Check whether port CmdReg is connected
      //!
      //! \return Whether port CmdReg is connected
      bool isConnected_CmdReg_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port CmdStatus is connected
      //!
      //! \return Whether port CmdStatus is connected
      bool isConnected_CmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port Log is connected
      //!
      //! \return Whether port Log is connected
      bool isConnected_Log_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Check whether port LogText is connected
      //!
      //! \return Whether port LogText is connected
      bool isConnected_LogText_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

#endif

      //! Check whether port Time is connected
      //!
      //! \return Whether port Time is connected
      bool isConnected_Time_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port Tlm is connected
      //!
      //! \return Whether port Tlm is connected
      bool isConnected_Tlm_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port PingOut is connected
      //!
      //! \return Whether port PingOut is connected
      bool isConnected_PingOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port PingIn
      virtual void PingIn_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port PingIn
      void PingIn_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pre-message hooks for typed async input ports
      //
      // Each of these functions is invoked just before processing a message
      // on the corresponding port. By default, they do nothing. You can
      // override them to provide specific pre-message behavior.
      // ----------------------------------------------------------------------

      //! Pre-message hook for async input port PingIn
      virtual void PingIn_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port PingOut
      void PingOut_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command response
      // ----------------------------------------------------------------------

      //! Emit command response
      void cmdResponse_out(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdResponse response //!< The command response
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handlers to implement
      // ----------------------------------------------------------------------

      //! Handler for command PR_StopPings
      //!
      //! Command to disable ping response
      virtual void PR_StopPings_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handler base-class functions
      //
      // Call these functions directly to bypass the command input port
      // ----------------------------------------------------------------------

      //! Base-class handler function for command PR_StopPings
      //!
      //! Command to disable ping response
      void PR_StopPings_cmdHandlerBase(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdArgBuffer& args //!< The command argument buffer
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pre-message hooks for async commands
      //
      // Each of these functions is invoked just before processing the
      // corresponding command. By default they do nothing. You can
      // override them to provide specific pre-command behavior.
      // ----------------------------------------------------------------------

      //! Pre-message hook for command PR_StopPings
      virtual void PR_StopPings_preMsgHook(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event logging functions
      // ----------------------------------------------------------------------

      //! Log event PR_PingsDisabled
      //!
      //! Disabled ping responses
      void log_ACTIVITY_HI_PR_PingsDisabled();

      //! Log event PR_PingReceived
      //!
      //! Got ping
      void log_DIAGNOSTIC_PR_PingReceived(
          U32 code //!< Ping code
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Telemetry write functions
      // ----------------------------------------------------------------------

      //! Write telemetry channel PR_NumPings
      //!
      //! Number of pings received
      void tlmWrite_PR_NumPings(
          U32 arg, //!< The telemetry value
          Fw::Time _tlmTime = Fw::Time() //!< Timestamp. Default: unspecified, request from getTime port
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Time
      // ----------------------------------------------------------------------

      //!  Get the time
      //!
      //! \\return The current time
      Fw::Time getTime();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Message dispatch functions
      // ----------------------------------------------------------------------

      //! Called in the message loop to dispatch a message from the queue
      virtual MsgDispatchStatus doDispatch();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on special input ports
      // ----------------------------------------------------------------------

      //! Callback for port CmdDisp
      static void m_p_CmdDisp_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          Fw::CmdArgBuffer& args //!< Buffer containing arguments
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port PingIn
      static void m_p_PingIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special input ports
      // ----------------------------------------------------------------------

      //! Input port CmdDisp
      Fw::InputCmdPort m_CmdDisp_InputPort[NUM_CMDDISP_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port PingIn
      Svc::InputPingPort m_PingIn_InputPort[NUM_PINGIN_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special output ports
      // ----------------------------------------------------------------------

      //! Output port CmdReg
      Fw::OutputCmdRegPort m_CmdReg_OutputPort[NUM_CMDREG_OUTPUT_PORTS];

      //! Output port CmdStatus
      Fw::OutputCmdResponsePort m_CmdStatus_OutputPort[NUM_CMDSTATUS_OUTPUT_PORTS];

      //! Output port Log
      Fw::OutputLogPort m_Log_OutputPort[NUM_LOG_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Output port LogText
      Fw::OutputLogTextPort m_LogText_OutputPort[NUM_LOGTEXT_OUTPUT_PORTS];

#endif

      //! Output port Time
      Fw::OutputTimePort m_Time_OutputPort[NUM_TIME_OUTPUT_PORTS];

      //! Output port Tlm
      Fw::OutputTlmPort m_Tlm_OutputPort[NUM_TLM_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port PingOut
      Svc::OutputPingPort m_PingOut_OutputPort[NUM_PINGOUT_OUTPUT_PORTS];

  };

}

#endif
