// ======================================================================
// \title  TcpClientComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for TcpClient component base class
// ======================================================================

#ifndef Drv_TcpClientComponentAc_HPP
#define Drv_TcpClientComponentAc_HPP

#include "Drv/ByteStreamDriverModel/ByteStreamReadyPortAc.hpp"
#include "Drv/ByteStreamDriverModel/ByteStreamRecvPortAc.hpp"
#include "Drv/ByteStreamDriverModel/ByteStreamSendPortAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Buffer/BufferGetPortAc.hpp"
#include "Fw/Buffer/BufferSendPortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Os/Mutex.hpp"

namespace Drv {

  //! \class TcpClientComponentBase
  //! \brief Auto-generated base for TcpClient component
  class TcpClientComponentBase :
    public Fw::PassiveComponentBase
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class TcpClientComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! Enumerations for numbers of typed input ports
      enum {
        NUM_SEND_INPUT_PORTS = 1,
      };

      //! Enumerations for numbers of typed output ports
      enum {
        NUM_ALLOCATE_OUTPUT_PORTS = 1,
        NUM_DEALLOCATE_OUTPUT_PORTS = 1,
        NUM_READY_OUTPUT_PORTS = 1,
        NUM_RECV_OUTPUT_PORTS = 1,
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize TcpClientComponentBase object
      void init(
          NATIVE_INT_TYPE instance = 0 //!< The instance number
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for typed input ports
      // ----------------------------------------------------------------------

      //! Get typed input port at index
      //!
      //! \return send[portNum]
      Drv::InputByteStreamSendPort* get_send_InputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    public:

      // ----------------------------------------------------------------------
      // Connect typed input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to allocate[portNum]
      void set_allocate_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputBufferGetPort* port //!< The input port
      );

      //! Connect port to deallocate[portNum]
      void set_deallocate_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputBufferSendPort* port //!< The input port
      );

      //! Connect port to ready[portNum]
      void set_ready_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Drv::InputByteStreamReadyPort* port //!< The input port
      );

      //! Connect port to recv[portNum]
      void set_recv_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Drv::InputByteStreamRecvPort* port //!< The input port
      );

#if FW_PORT_SERIALIZATION

    public:

      // ----------------------------------------------------------------------
      // Connect serial input ports to typed output ports
      // ----------------------------------------------------------------------

      //! Connect port to deallocate[portNum]
      void set_deallocate_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to ready[portNum]
      void set_ready_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

      //! Connect port to recv[portNum]
      void set_recv_OutputPort(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::InputSerializePort* port //!< The port
      );

#endif

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct TcpClientComponentBase object
      TcpClientComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy TcpClientComponentBase object
      virtual ~TcpClientComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed input ports
      // ----------------------------------------------------------------------

      //! Get the number of send input ports
      //!
      //! \return The number of send input ports
      NATIVE_INT_TYPE getNum_send_InputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Getters for numbers of typed output ports
      // ----------------------------------------------------------------------

      //! Get the number of allocate output ports
      //!
      //! \return The number of allocate output ports
      NATIVE_INT_TYPE getNum_allocate_OutputPorts() const;

      //! Get the number of deallocate output ports
      //!
      //! \return The number of deallocate output ports
      NATIVE_INT_TYPE getNum_deallocate_OutputPorts() const;

      //! Get the number of ready output ports
      //!
      //! \return The number of ready output ports
      NATIVE_INT_TYPE getNum_ready_OutputPorts() const;

      //! Get the number of recv output ports
      //!
      //! \return The number of recv output ports
      NATIVE_INT_TYPE getNum_recv_OutputPorts() const;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Connection status queries for typed output ports
      // ----------------------------------------------------------------------

      //! Check whether port allocate is connected
      //!
      //! \return Whether port allocate is connected
      bool isConnected_allocate_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port deallocate is connected
      //!
      //! \return Whether port deallocate is connected
      bool isConnected_deallocate_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port ready is connected
      //!
      //! \return Whether port ready is connected
      bool isConnected_ready_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Check whether port recv is connected
      //!
      //! \return Whether port recv is connected
      bool isConnected_recv_OutputPort(
          NATIVE_INT_TYPE portNum //!< The port number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Handlers to implement for typed input ports
      // ----------------------------------------------------------------------

      //! Handler for input port send
      virtual Drv::SendStatus send_handler(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& sendBuffer //!< Data to send
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Port handler base-class functions for typed input ports
      //
      // Call these functions directly to bypass the corresponding ports
      // ----------------------------------------------------------------------

      //! Handler base-class function for input port send
      Drv::SendStatus send_handlerBase(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& sendBuffer //!< Data to send
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Invocation functions for typed output ports
      // ----------------------------------------------------------------------

      //! Invoke output port allocate
      Fw::Buffer allocate_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          U32 size
      );

      //! Invoke output port deallocate
      void deallocate_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& fwBuffer
      );

      //! Invoke output port ready
      void ready_out(
          NATIVE_INT_TYPE portNum //!< The port number
      );

      //! Invoke output port recv
      void recv_out(
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& recvBuffer,
          const Drv::RecvStatus& recvStatus
      );

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
      // Calls for messages received on typed input ports
      // ----------------------------------------------------------------------

      //! Callback for port send
      static Drv::SendStatus m_p_send_in(
          Fw::PassiveComponentBase* callComp, //!< The component instance
          NATIVE_INT_TYPE portNum, //!< The port number
          Fw::Buffer& sendBuffer //!< Data to send
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed input ports
      // ----------------------------------------------------------------------

      //! Input port send
      Drv::InputByteStreamSendPort m_send_InputPort[NUM_SEND_INPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Typed output ports
      // ----------------------------------------------------------------------

      //! Output port allocate
      Fw::OutputBufferGetPort m_allocate_OutputPort[NUM_ALLOCATE_OUTPUT_PORTS];

      //! Output port deallocate
      Fw::OutputBufferSendPort m_deallocate_OutputPort[NUM_DEALLOCATE_OUTPUT_PORTS];

      //! Output port ready
      Drv::OutputByteStreamReadyPort m_ready_OutputPort[NUM_READY_OUTPUT_PORTS];

      //! Output port recv
      Drv::OutputByteStreamRecvPort m_recv_OutputPort[NUM_RECV_OUTPUT_PORTS];

    PRIVATE:

      // ----------------------------------------------------------------------
      // Mutexes
      // ----------------------------------------------------------------------

      //! Mutex for guarded ports
      Os::Mutex m_guardedPortMutex;

  };

}

#endif
