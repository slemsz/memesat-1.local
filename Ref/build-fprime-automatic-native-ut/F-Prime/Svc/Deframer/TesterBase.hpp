// ======================================================================
// \title  Deframer/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for Deframer component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef Deframer_TESTER_BASE_HPP
#define Deframer_TESTER_BASE_HPP

#include <Svc/Deframer/DeframerComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class DeframerTesterBase
  //! \brief Auto-generated base class for Deframer component test harness
  //!
  class DeframerTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object DeframerTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect cmdResponseIn to to_cmdResponseIn[portNum]
      //!
      void connect_to_cmdResponseIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputCmdResponsePort *const cmdResponseIn /*!< The port*/
      );

      //! Connect framedIn to to_framedIn[portNum]
      //!
      void connect_to_framedIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Drv::InputByteStreamRecvPort *const framedIn /*!< The port*/
      );

      //! Connect schedIn to to_schedIn[portNum]
      //!
      void connect_to_schedIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Svc::InputSchedPort *const schedIn /*!< The port*/
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for 'from' ports
      // Connect these input ports to the output ports under test
      // ----------------------------------------------------------------------

      //! Get the port that receives input from bufferAllocate
      //!
      //! \return from_bufferAllocate[portNum]
      //!
      Fw::InputBufferGetPort* get_from_bufferAllocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from bufferDeallocate
      //!
      //! \return from_bufferDeallocate[portNum]
      //!
      Fw::InputBufferSendPort* get_from_bufferDeallocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from bufferOut
      //!
      //! \return from_bufferOut[portNum]
      //!
      Fw::InputBufferSendPort* get_from_bufferOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from comOut
      //!
      //! \return from_comOut[portNum]
      //!
      Fw::InputComPort* get_from_comOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from framedDeallocate
      //!
      //! \return from_framedDeallocate[portNum]
      //!
      Fw::InputBufferSendPort* get_from_framedDeallocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from framedPoll
      //!
      //! \return from_framedPoll[portNum]
      //!
      Drv::InputByteStreamPollPort* get_from_framedPoll(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object DeframerTesterBase
      //!
      DeframerTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object DeframerTesterBase
      //!
      virtual ~DeframerTesterBase();

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

      //! Handler prototype for from_bufferAllocate
      //!
      virtual Fw::Buffer from_bufferAllocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      ) = 0;

      //! Handler base function for from_bufferAllocate
      //!
      Fw::Buffer from_bufferAllocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Handler prototype for from_bufferDeallocate
      //!
      virtual void from_bufferDeallocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      ) = 0;

      //! Handler base function for from_bufferDeallocate
      //!
      void from_bufferDeallocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Handler prototype for from_bufferOut
      //!
      virtual void from_bufferOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      ) = 0;

      //! Handler base function for from_bufferOut
      //!
      void from_bufferOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Handler prototype for from_comOut
      //!
      virtual void from_comOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::ComBuffer &data, /*!< 
      Buffer containing packet data
      */
          U32 context /*!< 
      Call context value; meaning chosen by user
      */
      ) = 0;

      //! Handler base function for from_comOut
      //!
      void from_comOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::ComBuffer &data, /*!< 
      Buffer containing packet data
      */
          U32 context /*!< 
      Call context value; meaning chosen by user
      */
      );

      //! Handler prototype for from_framedDeallocate
      //!
      virtual void from_framedDeallocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      ) = 0;

      //! Handler base function for from_framedDeallocate
      //!
      void from_framedDeallocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Handler prototype for from_framedPoll
      //!
      virtual Drv::PollStatus from_framedPoll_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &pollBuffer 
      ) = 0;

      //! Handler base function for from_framedPoll
      //!
      Drv::PollStatus from_framedPoll_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &pollBuffer 
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

      //! Push an entry on the history for from_bufferAllocate
      void pushFromPortEntry_bufferAllocate(
          U32 size 
      );

      //! A history entry for from_bufferAllocate
      //!
      typedef struct {
          U32 size;
      } FromPortEntry_bufferAllocate;

      //! The history for from_bufferAllocate
      //!
      History<FromPortEntry_bufferAllocate>
        *fromPortHistory_bufferAllocate;

      //! Push an entry on the history for from_bufferDeallocate
      void pushFromPortEntry_bufferDeallocate(
          Fw::Buffer &fwBuffer 
      );

      //! A history entry for from_bufferDeallocate
      //!
      typedef struct {
          Fw::Buffer fwBuffer;
      } FromPortEntry_bufferDeallocate;

      //! The history for from_bufferDeallocate
      //!
      History<FromPortEntry_bufferDeallocate>
        *fromPortHistory_bufferDeallocate;

      //! Push an entry on the history for from_bufferOut
      void pushFromPortEntry_bufferOut(
          Fw::Buffer &fwBuffer 
      );

      //! A history entry for from_bufferOut
      //!
      typedef struct {
          Fw::Buffer fwBuffer;
      } FromPortEntry_bufferOut;

      //! The history for from_bufferOut
      //!
      History<FromPortEntry_bufferOut>
        *fromPortHistory_bufferOut;

      //! Push an entry on the history for from_comOut
      void pushFromPortEntry_comOut(
          Fw::ComBuffer &data, /*!< 
      Buffer containing packet data
      */
          U32 context /*!< 
      Call context value; meaning chosen by user
      */
      );

      //! A history entry for from_comOut
      //!
      typedef struct {
          Fw::ComBuffer data;
          U32 context;
      } FromPortEntry_comOut;

      //! The history for from_comOut
      //!
      History<FromPortEntry_comOut>
        *fromPortHistory_comOut;

      //! Push an entry on the history for from_framedDeallocate
      void pushFromPortEntry_framedDeallocate(
          Fw::Buffer &fwBuffer 
      );

      //! A history entry for from_framedDeallocate
      //!
      typedef struct {
          Fw::Buffer fwBuffer;
      } FromPortEntry_framedDeallocate;

      //! The history for from_framedDeallocate
      //!
      History<FromPortEntry_framedDeallocate>
        *fromPortHistory_framedDeallocate;

      //! Push an entry on the history for from_framedPoll
      void pushFromPortEntry_framedPoll(
          Fw::Buffer &pollBuffer 
      );

      //! A history entry for from_framedPoll
      //!
      typedef struct {
          Fw::Buffer pollBuffer;
      } FromPortEntry_framedPoll;

      //! The history for from_framedPoll
      //!
      History<FromPortEntry_framedPoll>
        *fromPortHistory_framedPoll;

    protected:

      // ----------------------------------------------------------------------
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

      //! Invoke the to port connected to cmdResponseIn
      //!
      void invoke_to_cmdResponseIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwOpcodeType opCode, /*!< 
      Command Op Code
      */
          U32 cmdSeq, /*!< 
      Command Sequence
      */
          const Fw::CmdResponse &response /*!< 
      The command response argument
      */
      );

      //! Invoke the to port connected to framedIn
      //!
      void invoke_to_framedIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &recvBuffer, 
          const Drv::RecvStatus &recvStatus 
      );

      //! Invoke the to port connected to schedIn
      //!
      void invoke_to_schedIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< 
      The call order
      */
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

      //! Get the number of from_bufferAllocate ports
      //!
      //! \return The number of from_bufferAllocate ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferAllocate() const;

      //! Get the number of from_bufferDeallocate ports
      //!
      //! \return The number of from_bufferDeallocate ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferDeallocate() const;

      //! Get the number of from_bufferOut ports
      //!
      //! \return The number of from_bufferOut ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferOut() const;

      //! Get the number of to_cmdResponseIn ports
      //!
      //! \return The number of to_cmdResponseIn ports
      //!
      NATIVE_INT_TYPE getNum_to_cmdResponseIn() const;

      //! Get the number of from_comOut ports
      //!
      //! \return The number of from_comOut ports
      //!
      NATIVE_INT_TYPE getNum_from_comOut() const;

      //! Get the number of from_framedDeallocate ports
      //!
      //! \return The number of from_framedDeallocate ports
      //!
      NATIVE_INT_TYPE getNum_from_framedDeallocate() const;

      //! Get the number of to_framedIn ports
      //!
      //! \return The number of to_framedIn ports
      //!
      NATIVE_INT_TYPE getNum_to_framedIn() const;

      //! Get the number of from_framedPoll ports
      //!
      //! \return The number of from_framedPoll ports
      //!
      NATIVE_INT_TYPE getNum_from_framedPoll() const;

      //! Get the number of to_schedIn ports
      //!
      //! \return The number of to_schedIn ports
      //!
      NATIVE_INT_TYPE getNum_to_schedIn() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_cmdResponseIn[portNum] is connected
      //!
      bool isConnected_to_cmdResponseIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_framedIn[portNum] is connected
      //!
      bool isConnected_to_framedIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_schedIn[portNum] is connected
      //!
      bool isConnected_to_schedIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    private:

      // ----------------------------------------------------------------------
      // To ports
      // ----------------------------------------------------------------------

      //! To port connected to cmdResponseIn
      //!
      Fw::OutputCmdResponsePort m_to_cmdResponseIn[1];

      //! To port connected to framedIn
      //!
      Drv::OutputByteStreamRecvPort m_to_framedIn[1];

      //! To port connected to schedIn
      //!
      Svc::OutputSchedPort m_to_schedIn[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to bufferAllocate
      //!
      Fw::InputBufferGetPort m_from_bufferAllocate[1];

      //! From port connected to bufferDeallocate
      //!
      Fw::InputBufferSendPort m_from_bufferDeallocate[1];

      //! From port connected to bufferOut
      //!
      Fw::InputBufferSendPort m_from_bufferOut[1];

      //! From port connected to comOut
      //!
      Fw::InputComPort m_from_comOut[1];

      //! From port connected to framedDeallocate
      //!
      Fw::InputBufferSendPort m_from_framedDeallocate[1];

      //! From port connected to framedPoll
      //!
      Drv::InputByteStreamPollPort m_from_framedPoll[1];

    private:

      // ----------------------------------------------------------------------
      // Static functions for output ports
      // ----------------------------------------------------------------------

      //! Static function for port from_bufferAllocate
      //!
      static Fw::Buffer from_bufferAllocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Static function for port from_bufferDeallocate
      //!
      static void from_bufferDeallocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_bufferOut
      //!
      static void from_bufferOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_comOut
      //!
      static void from_comOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::ComBuffer &data, /*!< 
      Buffer containing packet data
      */
          U32 context /*!< 
      Call context value; meaning chosen by user
      */
      );

      //! Static function for port from_framedDeallocate
      //!
      static void from_framedDeallocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_framedPoll
      //!
      static Drv::PollStatus from_framedPoll_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &pollBuffer 
      );

  };

} // end namespace Svc

#endif
