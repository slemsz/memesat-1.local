// ======================================================================
// \title  PrmDbComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PrmDb component base class
// ======================================================================

#ifndef Svc_PrmDbComponentAc_HPP
#define Svc_PrmDbComponentAc_HPP

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
#include "Fw/Prm/PrmGetPortAc.hpp"
#include "Fw/Prm/PrmSetPortAc.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Os/Mutex.hpp"
#include "Svc/Ping/PingPortAc.hpp"
#include "Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.hpp"
#include "Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.hpp"

namespace Svc {

  //! \class PrmDbComponentBase
  //! \brief Auto-generated base for PrmDb component
  //!
  //! A component for storing parameters
  class PrmDbComponentBase :
    public Fw::ActiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class PrmDbComponentBaseFriend;

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
        NUM_GETPRM_INPUT_PORTS = 1,
        NUM_PINGIN_INPUT_PORTS = 1,
        NUM_SETPRM_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of special output ports
      enum {
        NUM_CMDREG_OUTPUT_PORTS = 1,
        NUM_CMDSTATUS_OUTPUT_PORTS = 1,
        NUM_LOG_OUTPUT_PORTS = 1,
        NUM_LOGTEXT_OUTPUT_PORTS = 1,
        NUM_TIME_OUTPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_PINGOUT_OUTPUT_PORTS = 1,
      };

      //! Command opcodes
      enum {
        OPCODE_PRM_SAVE_FILE = 0x0, //!< Command to save parameter image to file. Uses file name passed to constructor
      };

      //! Event IDs
      enum {
        EVENTID_PRMIDNOTFOUND = 0x0, //!< Parameter ID not found in database.
        EVENTID_PRMIDUPDATED = 0x1, //!< Parameter ID updated in database
        EVENTID_PRMDBFULL = 0x2, //!< Parameter database is full
        EVENTID_PRMIDADDED = 0x3, //!< Parameter ID added to database
        EVENTID_PRMFILEWRITEERROR = 0x4, //!< Failed to write parameter file
        EVENTID_PRMFILESAVECOMPLETE = 0x5, //!< Save of parameter file completed
        EVENTID_PRMFILEREADERROR = 0x6, //!< Failed to read parameter file
        EVENTID_PRMFILELOADCOMPLETE = 0x7, //!< Load of parameter file completed
      };

      //! Event throttle values: sets initial value of countdown variables
      enum {
        EVENTID_PRMIDNOTFOUND_THROTTLE = 5, //!< Throttle reset count for PrmIdNotFound
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize PrmDbComponentBase object
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
      //! \return getPrm[portNum]
      Fw::InputPrmGetPort* get_getPrm_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return pingIn[portNum]
      Svc::InputPingPort* get_pingIn_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return setPrm[portNum]
      Fw::InputPrmSetPort* get_setPrm_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect input ports to special output ports
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

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to pingOut[portNum]
      void set_pingOut_OutputPort(
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

#endif

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to pingOut[portNum]
      void set_pingOut_OutputPort(
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

      //! Construct PrmDbComponentBase object
      PrmDbComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy PrmDbComponentBase object
      virtual ~PrmDbComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special input ports
      // ----------------------------------------------------------------------

      //! Get the number of CmdDisp input ports
      //!
      //! \return The number of CmdDisp input ports
      NATIVE_INT_TYPE getNum_CmdDisp_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of getPrm input ports
      //!
      //! \return The number of getPrm input ports
      NATIVE_INT_TYPE getNum_getPrm_InputPorts() const;

      //! Get the number of pingIn input ports
      //!
      //! \return The number of pingIn input ports
      NATIVE_INT_TYPE getNum_pingIn_InputPorts() const;

      //! Get the number of setPrm input ports
      //!
      //! \return The number of setPrm input ports
      NATIVE_INT_TYPE getNum_setPrm_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special output ports
      // ----------------------------------------------------------------------

      //! Get the number of CmdReg output ports
      //!
      //! \return The number of CmdReg output ports
      NATIVE_INT_TYPE getNum_CmdReg_OutputPorts() const;

      //! Get the number of CmdStatus output ports
      //!
      //! \return The number of CmdStatus output ports
      NATIVE_INT_TYPE getNum_CmdStatus_OutputPorts() const;

      //! Get the number of Log output ports
      //!
      //! \return The number of Log output ports
      NATIVE_INT_TYPE getNum_Log_OutputPorts() const;

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Get the number of LogText output ports
      //!
      //! \return The number of LogText output ports
      NATIVE_INT_TYPE getNum_LogText_OutputPorts() const;

#endif

      //! Get the number of Time output ports
      //!
      //! \return The number of Time output ports
      NATIVE_INT_TYPE getNum_Time_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of pingOut output ports
      //!
      //! \return The number of pingOut output ports
      NATIVE_INT_TYPE getNum_pingOut_OutputPorts() const;

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

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port pingOut is connected
      //!
      //! \return Whether port pingOut is connected
      bool isConnected_pingOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port getPrm
      virtual Fw::ParamValid getPrm_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      ) = 0;

      //! Handler for input port pingIn
      virtual void pingIn_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      ) = 0;

      //! Handler for input port setPrm
      virtual void setPrm_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port getPrm
      Fw::ParamValid getPrm_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      );

      //! Handler base-class function for input port pingIn
      void pingIn_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

      //! Handler base-class function for input port setPrm
      void setPrm_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pre-message hooks for typed async input ports
      //
      // Each of these functions is invoked just before processing a message
      // on the corresponding port. By default, they do nothing. You can
      // override them to provide specific pre-message behavior.
      // ----------------------------------------------------------------------

      //! Pre-message hook for async input port pingIn
      virtual void pingIn_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

      //! Pre-message hook for async input port setPrm
      virtual void setPrm_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port pingOut
      void pingOut_out(
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

      //! Handler for command PRM_SAVE_FILE
      //!
      //! Command to save parameter image to file. Uses file name passed to constructor
      virtual void PRM_SAVE_FILE_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handler base-class functions
      //
      // Call these functions directly to bypass the command input port
      // ----------------------------------------------------------------------

      //! Base-class handler function for command PRM_SAVE_FILE
      //!
      //! Command to save parameter image to file. Uses file name passed to constructor
      void PRM_SAVE_FILE_cmdHandlerBase(
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

      //! Pre-message hook for command PRM_SAVE_FILE
      virtual void PRM_SAVE_FILE_preMsgHook(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event logging functions
      // ----------------------------------------------------------------------

      //! Log event PrmIdNotFound
      //!
      //! Parameter ID not found in database.
      void log_WARNING_LO_PrmIdNotFound(
          U32 Id //!< The parameter ID
      );

      //! Log event PrmIdUpdated
      //!
      //! Parameter ID updated in database
      void log_ACTIVITY_HI_PrmIdUpdated(
          U32 Id //!< The parameter ID
      );

      //! Log event PrmDbFull
      //!
      //! Parameter database is full
      void log_FATAL_PrmDbFull(
          U32 Id //!< The parameter ID
      );

      //! Log event PrmIdAdded
      //!
      //! Parameter ID added to database
      void log_ACTIVITY_HI_PrmIdAdded(
          U32 Id //!< The parameter ID
      );

      //! Log event PrmFileWriteError
      //!
      //! Failed to write parameter file
      void log_WARNING_HI_PrmFileWriteError(
          Svc::PrmDb_PrmWriteError stage, //!< The write stage
          I32 record, //!< The record that had the failure
          I32 error //!< The error code
      );

      //! Log event PrmFileSaveComplete
      //!
      //! Save of parameter file completed
      void log_ACTIVITY_HI_PrmFileSaveComplete(
          U32 records //!< The number of records saved
      );

      //! Log event PrmFileReadError
      //!
      //! Failed to read parameter file
      void log_WARNING_HI_PrmFileReadError(
          Svc::PrmDb_PrmReadError stage, //!< The read stage
          I32 record, //!< The record that had the failure
          I32 error //!< The error code
      );

      //! Log event PrmFileLoadComplete
      //!
      //! Load of parameter file completed
      void log_ACTIVITY_HI_PrmFileLoadComplete(
          U32 records //!< The number of records loaded
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event throttle reset functions
      // ----------------------------------------------------------------------

      //! Reset throttle value for PrmIdNotFound
      void log_WARNING_LO_PrmIdNotFound_ThrottleClear();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Time
      // ----------------------------------------------------------------------

      //!  Get the time
      //!
      //! \\return The current time
      Fw::Time getTime();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Mutex operations for guarded ports
      //
      // You can override these operations to provide more sophisticated
      // synchronization
      // ----------------------------------------------------------------------

      //! Lock the guarded mutex
      virtual void lock();

      //! Unlock the guarded mutex
      virtual void unLock();

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

      //! Callback for port getPrm
      static Fw::ParamValid m_p_getPrm_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
      );

      //! Callback for port pingIn
      static void m_p_pingIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

      //! Callback for port setPrm
      static void m_p_setPrm_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          FwPrmIdType id, //!< Parameter ID
          Fw::ParamBuffer& val //!< Buffer containing serialized parameter value
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

      //! Input port getPrm
      Fw::InputPrmGetPort m_getPrm_InputPort[NUM_GETPRM_INPUT_PORTS];

      //! Input port pingIn
      Svc::InputPingPort m_pingIn_InputPort[NUM_PINGIN_INPUT_PORTS];

      //! Input port setPrm
      Fw::InputPrmSetPort m_setPrm_InputPort[NUM_SETPRM_INPUT_PORTS];

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

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port pingOut
      Svc::OutputPingPort m_pingOut_OutputPort[NUM_PINGOUT_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Counter values for event throttling
      // ----------------------------------------------------------------------

      //! Throttle for PrmIdNotFound
      NATIVE_UINT_TYPE m_PrmIdNotFoundThrottle;

    PRIVATE:

      // ----------------------------------------------------------------------
      // Mutexes
      // ----------------------------------------------------------------------

      //! Mutex for guarded ports
      Os::Mutex m_guardedPortMutex;

  };

}

#endif
