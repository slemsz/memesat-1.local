// ======================================================================
// \title  ByteStreamDriverModel/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for ByteStreamDriverModel component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef ByteStreamDriverModel_TESTER_BASE_HPP
#define ByteStreamDriverModel_TESTER_BASE_HPP

#include <Drv/TcpClient/ByteStreamDriverModelComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Drv {

  //! \class ByteStreamDriverModelTesterBase
  //! \brief Auto-generated base class for ByteStreamDriverModel component test harness
  //!
  class ByteStreamDriverModelTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object ByteStreamDriverModelTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect poll to to_poll[portNum]
      //!
      void connect_to_poll(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Drv::InputByteStreamPollPort *const poll /*!< The port*/
      );

      //! Connect send to to_send[portNum]
      //!
      void connect_to_send(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Drv::InputByteStreamSendPort *const send /*!< The port*/
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for 'from' ports
      // Connect these input ports to the output ports under test
      // ----------------------------------------------------------------------

      //! Get the port that receives input from allocate
      //!
      //! \return from_allocate[portNum]
      //!
      Fw::InputBufferGetPort* get_from_allocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from deallocate
      //!
      //! \return from_deallocate[portNum]
      //!
      Fw::InputBufferSendPort* get_from_deallocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from ready
      //!
      //! \return from_ready[portNum]
      //!
      Drv::InputByteStreamReadyPort* get_from_ready(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from recv
      //!
      //! \return from_recv[portNum]
      //!
      Drv::InputByteStreamRecvPort* get_from_recv(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object ByteStreamDriverModelTesterBase
      //!
      ByteStreamDriverModelTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object ByteStreamDriverModelTesterBase
      //!
      virtual ~ByteStreamDriverModelTesterBase();

      // ----------------------------------------------------------------------
      // Test history
      // ----------------------------------------------------------------------

    protected:

      //! \class History
      //! \brief A history of port inputs
      //!
      template <typename T> class History {

        public:

          //! Create a History
          //!
          History(
              const U32 maxSize /*!< The maximum history size*/
          ) :
              numEntries(0),
              maxSize(maxSize)
          {
            this->entries = new T[maxSize];
          }

          //! Destroy a History
          //!
          ~History() {
            delete[] this->entries;
          }

          //! Clear the history
          //!
          void clear() { this->numEntries = 0; }

          //! Push an item onto the history
          //!
          void push_back(
              T entry /*!< The item*/
          ) {
            FW_ASSERT(this->numEntries < this->maxSize);
            entries[this->numEntries++] = entry;
          }

          //! Get an item at an index
          //!
          //! \return The item at index i
          //!
          T at(
              const U32 i /*!< The index*/
          ) const {
            FW_ASSERT(i < this->numEntries);
            return entries[i];
          }

          //! Get the number of entries in the history
          //!
          //! \return The number of entries in the history
          //!
          U32 size() const { return this->numEntries; }

        private:

          //! The number of entries in the history
          //!
          U32 numEntries;

          //! The maximum history size
          //!
          const U32 maxSize;

          //! The entries
          //!
          T *entries;

      };

      //! Clear all history
      //!
      void clearHistory();

    protected:

      // ----------------------------------------------------------------------
      // Handler prototypes for typed from ports
      // ----------------------------------------------------------------------

      //! Handler prototype for from_allocate
      //!
      virtual Fw::Buffer from_allocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      ) = 0;

      //! Handler base function for from_allocate
      //!
      Fw::Buffer from_allocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Handler prototype for from_deallocate
      //!
      virtual void from_deallocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      ) = 0;

      //! Handler base function for from_deallocate
      //!
      void from_deallocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Handler prototype for from_ready
      //!
      virtual void from_ready_handler(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      ) = 0;

      //! Handler base function for from_ready
      //!
      void from_ready_handlerBase(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Handler prototype for from_recv
      //!
      virtual void from_recv_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &recvBuffer, 
          const Drv::RecvStatus &recvStatus 
      ) = 0;

      //! Handler base function for from_recv
      //!
      void from_recv_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &recvBuffer, 
          const Drv::RecvStatus &recvStatus 
      );

    protected:

      // ----------------------------------------------------------------------
      // Histories for typed from ports
      // ----------------------------------------------------------------------

      //! Clear from port history
      //!
      void clearFromPortHistory();

      //! The total number of from port entries
      //!
      U32 fromPortHistorySize;

      //! Push an entry on the history for from_allocate
      void pushFromPortEntry_allocate(
          U32 size 
      );

      //! A history entry for from_allocate
      //!
      typedef struct {
          U32 size;
      } FromPortEntry_allocate;

      //! The history for from_allocate
      //!
      History<FromPortEntry_allocate>
        *fromPortHistory_allocate;

      //! Push an entry on the history for from_deallocate
      void pushFromPortEntry_deallocate(
          Fw::Buffer &fwBuffer 
      );

      //! A history entry for from_deallocate
      //!
      typedef struct {
          Fw::Buffer fwBuffer;
      } FromPortEntry_deallocate;

      //! The history for from_deallocate
      //!
      History<FromPortEntry_deallocate>
        *fromPortHistory_deallocate;

      //! Push an entry on the history for from_ready
      void pushFromPortEntry_ready(

      );

      //! Size of history for from_ready
      //!
      U32 fromPortHistorySize_ready;

      //! Push an entry on the history for from_recv
      void pushFromPortEntry_recv(
          Fw::Buffer &recvBuffer, 
          const Drv::RecvStatus &recvStatus 
      );

      //! A history entry for from_recv
      //!
      typedef struct {
          Fw::Buffer recvBuffer;
          Drv::RecvStatus recvStatus;
      } FromPortEntry_recv;

      //! The history for from_recv
      //!
      History<FromPortEntry_recv>
        *fromPortHistory_recv;

    protected:

      // ----------------------------------------------------------------------
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

      //! Invoke the to port connected to poll
      //!
      Drv::PollStatus invoke_to_poll(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &pollBuffer 
      );

      //! Invoke the to port connected to send
      //!
      Drv::SendStatus invoke_to_send(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &sendBuffer 
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

      //! Get the number of from_allocate ports
      //!
      //! \return The number of from_allocate ports
      //!
      NATIVE_INT_TYPE getNum_from_allocate() const;

      //! Get the number of from_deallocate ports
      //!
      //! \return The number of from_deallocate ports
      //!
      NATIVE_INT_TYPE getNum_from_deallocate() const;

      //! Get the number of to_poll ports
      //!
      //! \return The number of to_poll ports
      //!
      NATIVE_INT_TYPE getNum_to_poll() const;

      //! Get the number of from_ready ports
      //!
      //! \return The number of from_ready ports
      //!
      NATIVE_INT_TYPE getNum_from_ready() const;

      //! Get the number of from_recv ports
      //!
      //! \return The number of from_recv ports
      //!
      NATIVE_INT_TYPE getNum_from_recv() const;

      //! Get the number of to_send ports
      //!
      //! \return The number of to_send ports
      //!
      NATIVE_INT_TYPE getNum_to_send() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_poll[portNum] is connected
      //!
      bool isConnected_to_poll(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_send[portNum] is connected
      //!
      bool isConnected_to_send(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    private:

      // ----------------------------------------------------------------------
      // To ports
      // ----------------------------------------------------------------------

      //! To port connected to poll
      //!
      Drv::OutputByteStreamPollPort m_to_poll[1];

      //! To port connected to send
      //!
      Drv::OutputByteStreamSendPort m_to_send[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to allocate
      //!
      Fw::InputBufferGetPort m_from_allocate[1];

      //! From port connected to deallocate
      //!
      Fw::InputBufferSendPort m_from_deallocate[1];

      //! From port connected to ready
      //!
      Drv::InputByteStreamReadyPort m_from_ready[1];

      //! From port connected to recv
      //!
      Drv::InputByteStreamRecvPort m_from_recv[1];

    private:

      // ----------------------------------------------------------------------
      // Static functions for output ports
      // ----------------------------------------------------------------------

      //! Static function for port from_allocate
      //!
      static Fw::Buffer from_allocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Static function for port from_deallocate
      //!
      static void from_deallocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_ready
      //!
      static void from_ready_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Static function for port from_recv
      //!
      static void from_recv_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &recvBuffer, 
          const Drv::RecvStatus &recvStatus 
      );

  };

} // end namespace Drv

#endif
