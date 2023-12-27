// ======================================================================
// \title  CmdSplitterComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for CmdSplitter component base class
// ======================================================================

#ifndef Svc_CmdSplitterComponentAc_HPP
#define Svc_CmdSplitterComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Com/ComPortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"

namespace Svc {

  //! \class CmdSplitterComponentBase
  //! \brief Auto-generated base for CmdSplitter component
  //!
  //! A component for splitting incoming commands to local or remote
  class CmdSplitterComponentBase :
    public Fw::PassiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class CmdSplitterComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_CMDBUFF_INPUT_PORTS = 5,
        NUM_SEQCMDSTATUS_INPUT_PORTS = 5,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_LOCALCMD_OUTPUT_PORTS = 5,
        NUM_REMOTECMD_OUTPUT_PORTS = 5,
        NUM_FORWARDSEQCMDSTATUS_OUTPUT_PORTS = 5,
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize CmdSplitterComponentBase object
      void init(
          NATIVE_INT_TYPE instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return CmdBuff[portNum]
      Fw::InputComPort* get_CmdBuff_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Get typed input port at index
      //!
      //! \return seqCmdStatus[portNum]
      Fw::InputCmdResponsePort* get_seqCmdStatus_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to LocalCmd[portNum]
      void set_LocalCmd_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputComPort* port //!< The input port
      );

      //! Connect port to RemoteCmd[portNum]
      void set_RemoteCmd_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputComPort* port //!< The input port
      );

      //! Connect port to forwardSeqCmdStatus[portNum]
      void set_forwardSeqCmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputCmdResponsePort* port //!< The input port
      );

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to LocalCmd[portNum]
      void set_LocalCmd_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to RemoteCmd[portNum]
      void set_RemoteCmd_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to forwardSeqCmdStatus[portNum]
      void set_forwardSeqCmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct CmdSplitterComponentBase object
      CmdSplitterComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy CmdSplitterComponentBase object
      virtual ~CmdSplitterComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of CmdBuff input ports
      //!
      //! \return The number of CmdBuff input ports
      NATIVE_INT_TYPE getNum_CmdBuff_InputPorts() const;

      //! Get the number of seqCmdStatus input ports
      //!
      //! \return The number of seqCmdStatus input ports
      NATIVE_INT_TYPE getNum_seqCmdStatus_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of LocalCmd output ports
      //!
      //! \return The number of LocalCmd output ports
      NATIVE_INT_TYPE getNum_LocalCmd_OutputPorts() const;

      //! Get the number of RemoteCmd output ports
      //!
      //! \return The number of RemoteCmd output ports
      NATIVE_INT_TYPE getNum_RemoteCmd_OutputPorts() const;

      //! Get the number of forwardSeqCmdStatus output ports
      //!
      //! \return The number of forwardSeqCmdStatus output ports
      NATIVE_INT_TYPE getNum_forwardSeqCmdStatus_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port LocalCmd is connected
      //!
      //! \return Whether port LocalCmd is connected
      bool isConnected_LocalCmd_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port RemoteCmd is connected
      //!
      //! \return Whether port RemoteCmd is connected
      bool isConnected_RemoteCmd_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port forwardSeqCmdStatus is connected
      //!
      //! \return Whether port forwardSeqCmdStatus is connected
      bool isConnected_forwardSeqCmdStatus_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port CmdBuff
      virtual void CmdBuff_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      ) = 0;

      //! Handler for input port seqCmdStatus
      virtual void seqCmdStatus_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          const Fw::CmdResponse& response //!< The command response argument
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port CmdBuff
      void CmdBuff_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Handler base-class function for input port seqCmdStatus
      void seqCmdStatus_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          const Fw::CmdResponse& response //!< The command response argument
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port LocalCmd
      void LocalCmd_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Invoke output port RemoteCmd
      void RemoteCmd_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Invoke output port forwardSeqCmdStatus
      void forwardSeqCmdStatus_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          const Fw::CmdResponse& response //!< The command response argument
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port CmdBuff
      static void m_p_CmdBuff_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::ComBuffer& data, //!< Buffer containing packet data
          U32 context //!< Call context value; meaning chosen by user
      );

      //! Callback for port seqCmdStatus
      static void m_p_seqCmdStatus_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          FwOpcodeType opCode, //!< Command Op Code
          U32 cmdSeq, //!< Command Sequence
          const Fw::CmdResponse& response //!< The command response argument
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port CmdBuff
      Fw::InputComPort m_CmdBuff_InputPort[NUM_CMDBUFF_INPUT_PORTS];

      //! Input port seqCmdStatus
      Fw::InputCmdResponsePort m_seqCmdStatus_InputPort[NUM_SEQCMDSTATUS_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port LocalCmd
      Fw::OutputComPort m_LocalCmd_OutputPort[NUM_LOCALCMD_OUTPUT_PORTS];

      //! Output port RemoteCmd
      Fw::OutputComPort m_RemoteCmd_OutputPort[NUM_REMOTECMD_OUTPUT_PORTS];

      //! Output port forwardSeqCmdStatus
      Fw::OutputCmdResponsePort m_forwardSeqCmdStatus_OutputPort[NUM_FORWARDSEQCMDSTATUS_OUTPUT_PORTS];

  };

}

#endif
