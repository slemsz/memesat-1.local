// ======================================================================
// \title  Framer/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for Framer component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef Framer_TESTER_BASE_HPP
#define Framer_TESTER_BASE_HPP

#include <Svc/Framer/FramerComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class FramerTesterBase
  //! \brief Auto-generated base class for Framer component test harness
  //!
  class FramerTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object FramerTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect bufferIn to to_bufferIn[portNum]
      //!
      void connect_to_bufferIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputBufferSendPort *const bufferIn /*!< The port*/
      );

      //! Connect comIn to to_comIn[portNum]
      //!
      void connect_to_comIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputComPort *const comIn /*!< The port*/
      );

      //! Connect comStatusIn to to_comStatusIn[portNum]
      //!
      void connect_to_comStatusIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputSuccessConditionPort *const comStatusIn /*!< The port*/
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for 'from' ports
      // Connect these input ports to the output ports under test
      // ----------------------------------------------------------------------

      //! Get the port that receives input from bufferDeallocate
      //!
      //! \return from_bufferDeallocate[portNum]
      //!
      Fw::InputBufferSendPort* get_from_bufferDeallocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from comStatusOut
      //!
      //! \return from_comStatusOut[portNum]
      //!
      Fw::InputSuccessConditionPort* get_from_comStatusOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from framedAllocate
      //!
      //! \return from_framedAllocate[portNum]
      //!
      Fw::InputBufferGetPort* get_from_framedAllocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from framedOut
      //!
      //! \return from_framedOut[portNum]
      //!
      Drv::InputByteStreamSendPort* get_from_framedOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object FramerTesterBase
      //!
      FramerTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FramerTesterBase
      //!
      virtual ~FramerTesterBase();

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

      //! Handler prototype for from_comStatusOut
      //!
      virtual void from_comStatusOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Success &condition /*!< 
      Condition success/failure
      */
      ) = 0;

      //! Handler base function for from_comStatusOut
      //!
      void from_comStatusOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Success &condition /*!< 
      Condition success/failure
      */
      );

      //! Handler prototype for from_framedAllocate
      //!
      virtual Fw::Buffer from_framedAllocate_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      ) = 0;

      //! Handler base function for from_framedAllocate
      //!
      Fw::Buffer from_framedAllocate_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Handler prototype for from_framedOut
      //!
      virtual Drv::SendStatus from_framedOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &sendBuffer 
      ) = 0;

      //! Handler base function for from_framedOut
      //!
      Drv::SendStatus from_framedOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &sendBuffer 
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

      //! Push an entry on the history for from_comStatusOut
      void pushFromPortEntry_comStatusOut(
          Fw::Success &condition /*!< 
      Condition success/failure
      */
      );

      //! A history entry for from_comStatusOut
      //!
      typedef struct {
          Fw::Success condition;
      } FromPortEntry_comStatusOut;

      //! The history for from_comStatusOut
      //!
      History<FromPortEntry_comStatusOut>
        *fromPortHistory_comStatusOut;

      //! Push an entry on the history for from_framedAllocate
      void pushFromPortEntry_framedAllocate(
          U32 size 
      );

      //! A history entry for from_framedAllocate
      //!
      typedef struct {
          U32 size;
      } FromPortEntry_framedAllocate;

      //! The history for from_framedAllocate
      //!
      History<FromPortEntry_framedAllocate>
        *fromPortHistory_framedAllocate;

      //! Push an entry on the history for from_framedOut
      void pushFromPortEntry_framedOut(
          Fw::Buffer &sendBuffer 
      );

      //! A history entry for from_framedOut
      //!
      typedef struct {
          Fw::Buffer sendBuffer;
      } FromPortEntry_framedOut;

      //! The history for from_framedOut
      //!
      History<FromPortEntry_framedOut>
        *fromPortHistory_framedOut;

    protected:

      // ----------------------------------------------------------------------
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

      //! Invoke the to port connected to bufferIn
      //!
      void invoke_to_bufferIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Invoke the to port connected to comIn
      //!
      void invoke_to_comIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::ComBuffer &data, /*!< 
      Buffer containing packet data
      */
          U32 context /*!< 
      Call context value; meaning chosen by user
      */
      );

      //! Invoke the to port connected to comStatusIn
      //!
      void invoke_to_comStatusIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Success &condition /*!< 
      Condition success/failure
      */
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

      //! Get the number of from_bufferDeallocate ports
      //!
      //! \return The number of from_bufferDeallocate ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferDeallocate() const;

      //! Get the number of to_bufferIn ports
      //!
      //! \return The number of to_bufferIn ports
      //!
      NATIVE_INT_TYPE getNum_to_bufferIn() const;

      //! Get the number of to_comIn ports
      //!
      //! \return The number of to_comIn ports
      //!
      NATIVE_INT_TYPE getNum_to_comIn() const;

      //! Get the number of to_comStatusIn ports
      //!
      //! \return The number of to_comStatusIn ports
      //!
      NATIVE_INT_TYPE getNum_to_comStatusIn() const;

      //! Get the number of from_comStatusOut ports
      //!
      //! \return The number of from_comStatusOut ports
      //!
      NATIVE_INT_TYPE getNum_from_comStatusOut() const;

      //! Get the number of from_framedAllocate ports
      //!
      //! \return The number of from_framedAllocate ports
      //!
      NATIVE_INT_TYPE getNum_from_framedAllocate() const;

      //! Get the number of from_framedOut ports
      //!
      //! \return The number of from_framedOut ports
      //!
      NATIVE_INT_TYPE getNum_from_framedOut() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_bufferIn[portNum] is connected
      //!
      bool isConnected_to_bufferIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_comIn[portNum] is connected
      //!
      bool isConnected_to_comIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_comStatusIn[portNum] is connected
      //!
      bool isConnected_to_comStatusIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    private:

      // ----------------------------------------------------------------------
      // To ports
      // ----------------------------------------------------------------------

      //! To port connected to bufferIn
      //!
      Fw::OutputBufferSendPort m_to_bufferIn[1];

      //! To port connected to comIn
      //!
      Fw::OutputComPort m_to_comIn[1];

      //! To port connected to comStatusIn
      //!
      Fw::OutputSuccessConditionPort m_to_comStatusIn[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to bufferDeallocate
      //!
      Fw::InputBufferSendPort m_from_bufferDeallocate[1];

      //! From port connected to comStatusOut
      //!
      Fw::InputSuccessConditionPort m_from_comStatusOut[1];

      //! From port connected to framedAllocate
      //!
      Fw::InputBufferGetPort m_from_framedAllocate[1];

      //! From port connected to framedOut
      //!
      Drv::InputByteStreamSendPort m_from_framedOut[1];

    private:

      // ----------------------------------------------------------------------
      // Static functions for output ports
      // ----------------------------------------------------------------------

      //! Static function for port from_bufferDeallocate
      //!
      static void from_bufferDeallocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_comStatusOut
      //!
      static void from_comStatusOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Success &condition /*!< 
      Condition success/failure
      */
      );

      //! Static function for port from_framedAllocate
      //!
      static Fw::Buffer from_framedAllocate_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Static function for port from_framedOut
      //!
      static Drv::SendStatus from_framedOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &sendBuffer 
      );

  };

} // end namespace Svc

#endif
