// ======================================================================
// \title  BufferAccumulatorComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for BufferAccumulator component base class
// ======================================================================

#ifndef Svc_BufferAccumulatorComponentAc_HPP
#define Svc_BufferAccumulatorComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Buffer/BufferSendPortAc.hpp"
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
#include "Svc/BufferAccumulator/BufferAccumulator_BlockModeEnumAc.hpp"
#include "Svc/BufferAccumulator/BufferAccumulator_OpStateEnumAc.hpp"
#include "Svc/Ping/PingPortAc.hpp"

namespace Svc {

  //! \class BufferAccumulatorComponentBase
  //! \brief Auto-generated base for BufferAccumulator component
  class BufferAccumulatorComponentBase :
    public Fw::ActiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class BufferAccumulatorComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of special input ports
      enum {
        NUM_CMDIN_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_BUFFERSENDINFILL_INPUT_PORTS = 1,
        NUM_BUFFERSENDINRETURN_INPUT_PORTS = 1,
        NUM_PINGIN_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of special output ports
      enum {
        NUM_CMDREGOUT_OUTPUT_PORTS = 1,
        NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
        NUM_EVENTOUT_OUTPUT_PORTS = 1,
        NUM_EVENTOUTTEXT_OUTPUT_PORTS = 1,
        NUM_TIMECALLER_OUTPUT_PORTS = 1,
        NUM_TLMOUT_OUTPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_BUFFERSENDOUTDRAIN_OUTPUT_PORTS = 1,
        NUM_BUFFERSENDOUTRETURN_OUTPUT_PORTS = 1,
        NUM_PINGOUT_OUTPUT_PORTS = 1,
      };

      //! Command opcodes
      enum {
        OPCODE_BA_SETMODE = 0x0, //!< Set the mode
        OPCODE_BA_DRAINBUFFERS = 0x1, //!< Drain the commanded number of buffers
      };

      //! Event IDs
      enum {
        EVENTID_BA_BUFFERACCEPTED = 0x0, //!< The Buffer Accumulator instance accepted and enqueued a buffer. To avoid uncontrolled sending of events, this event occurs only when the previous buffer received caused a QueueFull error.
        EVENTID_BA_QUEUEFULL = 0x1, //!< The Buffer Accumulator instance received a buffer when its queue was full. To avoid uncontrolled sending of events, this event occurs only when the previous buffer received did not cause a QueueFull error.
        EVENTID_BA_STILLDRAINING = 0x2, //!< Got DrainBuffers command while executing DrainBuffers command
        EVENTID_BA_ALREADYDRAINING = 0x3, //!< Got DrainBuffers command while in DRAIN mode
        EVENTID_BA_DRAINSTALLED = 0x4, //!< Ran out of buffers while executing DrainBuffers command
        EVENTID_BA_PARTIALDRAINDONE = 0x5, //!< Finished DrainBuffers command
        EVENTID_BA_NONBLOCKDRAIN = 0x6, //!< Not enough buffers to complete requested drain, and NOBLOCK was set; will only drain what we have
      };

      //! Channel IDs
      enum {
        CHANNELID_BA_NUMQUEUEDBUFFERS = 0x0, //!< Channel ID for BA_NumQueuedBuffers
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize BufferAccumulatorComponentBase object
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
      //! \return cmdIn[portNum]
      Fw::InputCmdPort* get_cmdIn_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return bufferSendInFill[portNum]
      Fw::InputBufferSendPort* get_bufferSendInFill_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return bufferSendInReturn[portNum]
      Fw::InputBufferSendPort* get_bufferSendInReturn_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return pingIn[portNum]
      Svc::InputPingPort* get_pingIn_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect input ports to special output ports
      // ----------------------------------------------------------------------

      //! Connect port to cmdRegOut[portNum]
      void set_cmdRegOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputCmdRegPort* port //!< The input port
      );

      //! Connect port to cmdResponseOut[portNum]
      void set_cmdResponseOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputCmdResponsePort* port //!< The input port
      );

      //! Connect port to eventOut[portNum]
      void set_eventOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputLogPort* port //!< The input port
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to eventOutText[portNum]
      void set_eventOutText_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputLogTextPort* port //!< The input port
      );

#endif

      //! Connect port to timeCaller[portNum]
      void set_timeCaller_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputTimePort* port //!< The input port
      );

      //! Connect port to tlmOut[portNum]
      void set_tlmOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputTlmPort* port //!< The input port
      );

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to bufferSendOutDrain[portNum]
      void set_bufferSendOutDrain_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputBufferSendPort* port //!< The input port
      );

      //! Connect port to bufferSendOutReturn[portNum]
      void set_bufferSendOutReturn_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputBufferSendPort* port //!< The input port
      );

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

      //! Connect port to cmdRegOut[portNum]
      void set_cmdRegOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to cmdResponseOut[portNum]
      void set_cmdResponseOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to eventOut[portNum]
      void set_eventOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Connect port to eventOutText[portNum]
      void set_eventOutText_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

      //! Connect port to timeCaller[portNum]
      void set_timeCaller_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to tlmOut[portNum]
      void set_tlmOut_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to bufferSendOutDrain[portNum]
      void set_bufferSendOutDrain_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to bufferSendOutReturn[portNum]
      void set_bufferSendOutReturn_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

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

      //! Construct BufferAccumulatorComponentBase object
      BufferAccumulatorComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy BufferAccumulatorComponentBase object
      virtual ~BufferAccumulatorComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special input ports
      // ----------------------------------------------------------------------

      //! Get the number of cmdIn input ports
      //!
      //! \return The number of cmdIn input ports
      NATIVE_INT_TYPE getNum_cmdIn_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of bufferSendInFill input ports
      //!
      //! \return The number of bufferSendInFill input ports
      NATIVE_INT_TYPE getNum_bufferSendInFill_InputPorts() const;

      //! Get the number of bufferSendInReturn input ports
      //!
      //! \return The number of bufferSendInReturn input ports
      NATIVE_INT_TYPE getNum_bufferSendInReturn_InputPorts() const;

      //! Get the number of pingIn input ports
      //!
      //! \return The number of pingIn input ports
      NATIVE_INT_TYPE getNum_pingIn_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of special output ports
      // ----------------------------------------------------------------------

      //! Get the number of cmdRegOut output ports
      //!
      //! \return The number of cmdRegOut output ports
      NATIVE_INT_TYPE getNum_cmdRegOut_OutputPorts() const;

      //! Get the number of cmdResponseOut output ports
      //!
      //! \return The number of cmdResponseOut output ports
      NATIVE_INT_TYPE getNum_cmdResponseOut_OutputPorts() const;

      //! Get the number of eventOut output ports
      //!
      //! \return The number of eventOut output ports
      NATIVE_INT_TYPE getNum_eventOut_OutputPorts() const;

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Get the number of eventOutText output ports
      //!
      //! \return The number of eventOutText output ports
      NATIVE_INT_TYPE getNum_eventOutText_OutputPorts() const;

#endif

      //! Get the number of timeCaller output ports
      //!
      //! \return The number of timeCaller output ports
      NATIVE_INT_TYPE getNum_timeCaller_OutputPorts() const;

      //! Get the number of tlmOut output ports
      //!
      //! \return The number of tlmOut output ports
      NATIVE_INT_TYPE getNum_tlmOut_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of bufferSendOutDrain output ports
      //!
      //! \return The number of bufferSendOutDrain output ports
      NATIVE_INT_TYPE getNum_bufferSendOutDrain_OutputPorts() const;

      //! Get the number of bufferSendOutReturn output ports
      //!
      //! \return The number of bufferSendOutReturn output ports
      NATIVE_INT_TYPE getNum_bufferSendOutReturn_OutputPorts() const;

      //! Get the number of pingOut output ports
      //!
      //! \return The number of pingOut output ports
      NATIVE_INT_TYPE getNum_pingOut_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for special output ports
      // ----------------------------------------------------------------------

      //! Check whether port cmdRegOut is connected
      //!
      //! \return Whether port cmdRegOut is connected
      bool isConnected_cmdRegOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port cmdResponseOut is connected
      //!
      //! \return Whether port cmdResponseOut is connected
      bool isConnected_cmdResponseOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port eventOut is connected
      //!
      //! \return Whether port eventOut is connected
      bool isConnected_eventOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Check whether port eventOutText is connected
      //!
      //! \return Whether port eventOutText is connected
      bool isConnected_eventOutText_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

#endif

      //! Check whether port timeCaller is connected
      //!
      //! \return Whether port timeCaller is connected
      bool isConnected_timeCaller_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port tlmOut is connected
      //!
      //! \return Whether port tlmOut is connected
      bool isConnected_tlmOut_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port bufferSendOutDrain is connected
      //!
      //! \return Whether port bufferSendOutDrain is connected
      bool isConnected_bufferSendOutDrain_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port bufferSendOutReturn is connected
      //!
      //! \return Whether port bufferSendOutReturn is connected
      bool isConnected_bufferSendOutReturn_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

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

      //! Handler for input port bufferSendInFill
      virtual void bufferSendInFill_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      ) = 0;

      //! Handler for input port bufferSendInReturn
      virtual void bufferSendInReturn_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      ) = 0;

      //! Handler for input port pingIn
      virtual void pingIn_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port bufferSendInFill
      void bufferSendInFill_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Handler base-class function for input port bufferSendInReturn
      void bufferSendInReturn_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Handler base-class function for input port pingIn
      void pingIn_handlerBase(
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

      //! Pre-message hook for async input port bufferSendInFill
      virtual void bufferSendInFill_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Pre-message hook for async input port bufferSendInReturn
      virtual void bufferSendInReturn_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Pre-message hook for async input port pingIn
      virtual void pingIn_preMsgHook(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port bufferSendOutDrain
      void bufferSendOutDrain_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Invoke output port bufferSendOutReturn
      void bufferSendOutReturn_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

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

      //! Handler for command BA_SetMode
      //!
      //! Set the mode
      virtual void BA_SetMode_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Svc::BufferAccumulator_OpState mode
      ) = 0;

      //! Handler for command BA_DrainBuffers
      //!
      //! Drain the commanded number of buffers
      virtual void BA_DrainBuffers_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          U32 numToDrain,
          Svc::BufferAccumulator_BlockMode blockMode
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Command handler base-class functions
      //
      // Call these functions directly to bypass the command input port
      // ----------------------------------------------------------------------

      //! Base-class handler function for command BA_SetMode
      //!
      //! Set the mode
      void BA_SetMode_cmdHandlerBase(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdArgBuffer& args //!< The command argument buffer
      );

      //! Base-class handler function for command BA_DrainBuffers
      //!
      //! Drain the commanded number of buffers
      void BA_DrainBuffers_cmdHandlerBase(
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

      //! Pre-message hook for command BA_SetMode
      virtual void BA_SetMode_preMsgHook(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

      //! Pre-message hook for command BA_DrainBuffers
      virtual void BA_DrainBuffers_preMsgHook(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Event logging functions
      // ----------------------------------------------------------------------

      //! Log event BA_BufferAccepted
      //!
      //! The Buffer Accumulator instance accepted and enqueued a buffer. To avoid uncontrolled sending of events, this event occurs only when the previous buffer received caused a QueueFull error.
      void log_ACTIVITY_HI_BA_BufferAccepted();

      //! Log event BA_QueueFull
      //!
      //! The Buffer Accumulator instance received a buffer when its queue was full. To avoid uncontrolled sending of events, this event occurs only when the previous buffer received did not cause a QueueFull error.
      void log_WARNING_HI_BA_QueueFull();

      //! Log event BA_StillDraining
      //!
      //! Got DrainBuffers command while executing DrainBuffers command
      void log_WARNING_HI_BA_StillDraining(
          U32 numDrained,
          U32 numToDrain
      );

      //! Log event BA_AlreadyDraining
      //!
      //! Got DrainBuffers command while in DRAIN mode
      void log_WARNING_HI_BA_AlreadyDraining();

      //! Log event BA_DrainStalled
      //!
      //! Ran out of buffers while executing DrainBuffers command
      void log_WARNING_HI_BA_DrainStalled(
          U32 numDrained,
          U32 numToDrain
      );

      //! Log event BA_PartialDrainDone
      //!
      //! Finished DrainBuffers command
      void log_ACTIVITY_HI_BA_PartialDrainDone(U32 numDrained);

      //! Log event BA_NonBlockDrain
      //!
      //! Not enough buffers to complete requested drain, and NOBLOCK was set; will only drain what we have
      void log_WARNING_LO_BA_NonBlockDrain(
          U32 numWillDrain,
          U32 numReqDrain
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Telemetry write functions
      // ----------------------------------------------------------------------

      //! Write telemetry channel BA_NumQueuedBuffers
      //!
      //! The number of buffers queued
      void tlmWrite_BA_NumQueuedBuffers(
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

      //! Callback for port cmdIn
      static void m_p_cmdIn_in(
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

      //! Callback for port bufferSendInFill
      static void m_p_bufferSendInFill_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Callback for port bufferSendInReturn
      static void m_p_bufferSendInReturn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Callback for port pingIn
      static void m_p_pingIn_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 key //!< Value to return to pinger
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special input ports
      // ----------------------------------------------------------------------

      //! Input port cmdIn
      Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port bufferSendInFill
      Fw::InputBufferSendPort m_bufferSendInFill_InputPort[NUM_BUFFERSENDINFILL_INPUT_PORTS];

      //! Input port bufferSendInReturn
      Fw::InputBufferSendPort m_bufferSendInReturn_InputPort[NUM_BUFFERSENDINRETURN_INPUT_PORTS];

      //! Input port pingIn
      Svc::InputPingPort m_pingIn_InputPort[NUM_PINGIN_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Special output ports
      // ----------------------------------------------------------------------

      //! Output port cmdRegOut
      Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

      //! Output port cmdResponseOut
      Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

      //! Output port eventOut
      Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

      //! Output port eventOutText
      Fw::OutputLogTextPort m_eventOutText_OutputPort[NUM_EVENTOUTTEXT_OUTPUT_PORTS];

#endif

      //! Output port timeCaller
      Fw::OutputTimePort m_timeCaller_OutputPort[NUM_TIMECALLER_OUTPUT_PORTS];

      //! Output port tlmOut
      Fw::OutputTlmPort m_tlmOut_OutputPort[NUM_TLMOUT_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port bufferSendOutDrain
      Fw::OutputBufferSendPort m_bufferSendOutDrain_OutputPort[NUM_BUFFERSENDOUTDRAIN_OUTPUT_PORTS];

      //! Output port bufferSendOutReturn
      Fw::OutputBufferSendPort m_bufferSendOutReturn_OutputPort[NUM_BUFFERSENDOUTRETURN_OUTPUT_PORTS];

      //! Output port pingOut
      Svc::OutputPingPort m_pingOut_OutputPort[NUM_PINGOUT_OUTPUT_PORTS];

  };

}

#endif
