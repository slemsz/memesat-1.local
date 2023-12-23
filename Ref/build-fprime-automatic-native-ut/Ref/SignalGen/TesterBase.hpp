// ======================================================================
// \title  SignalGen/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for SignalGen component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef SignalGen_TESTER_BASE_HPP
#define SignalGen_TESTER_BASE_HPP

#include <Ref/SignalGen/SignalGenComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Ref {

  //! \class SignalGenTesterBase
  //! \brief Auto-generated base class for SignalGen component test harness
  //!
  class SignalGenTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object SignalGenTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect cmdIn to to_cmdIn[portNum]
      //!
      void connect_to_cmdIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputCmdPort *const cmdIn /*!< The port*/
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

      //! Get the port that receives input from cmdRegOut
      //!
      //! \return from_cmdRegOut[portNum]
      //!
      Fw::InputCmdRegPort* get_from_cmdRegOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from cmdResponseOut
      //!
      //! \return from_cmdResponseOut[portNum]
      //!
      Fw::InputCmdResponsePort* get_from_cmdResponseOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from logOut
      //!
      //! \return from_logOut[portNum]
      //!
      Fw::InputLogPort* get_from_logOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the port that receives input from logTextOut
      //!
      //! \return from_logTextOut[portNum]
      //!
      Fw::InputLogTextPort* get_from_logTextOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );
#endif

      //! Get the port that receives input from timeCaller
      //!
      //! \return from_timeCaller[portNum]
      //!
      Fw::InputTimePort* get_from_timeCaller(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from tlmOut
      //!
      //! \return from_tlmOut[portNum]
      //!
      Fw::InputTlmPort* get_from_tlmOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object SignalGenTesterBase
      //!
      SignalGenTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object SignalGenTesterBase
      //!
      virtual ~SignalGenTesterBase();

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
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

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

      //! Get the number of to_cmdIn ports
      //!
      //! \return The number of to_cmdIn ports
      //!
      NATIVE_INT_TYPE getNum_to_cmdIn() const;

      //! Get the number of from_cmdRegOut ports
      //!
      //! \return The number of from_cmdRegOut ports
      //!
      NATIVE_INT_TYPE getNum_from_cmdRegOut() const;

      //! Get the number of from_cmdResponseOut ports
      //!
      //! \return The number of from_cmdResponseOut ports
      //!
      NATIVE_INT_TYPE getNum_from_cmdResponseOut() const;

      //! Get the number of from_logOut ports
      //!
      //! \return The number of from_logOut ports
      //!
      NATIVE_INT_TYPE getNum_from_logOut() const;

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the number of from_logTextOut ports
      //!
      //! \return The number of from_logTextOut ports
      //!
      NATIVE_INT_TYPE getNum_from_logTextOut() const;
#endif

      //! Get the number of to_schedIn ports
      //!
      //! \return The number of to_schedIn ports
      //!
      NATIVE_INT_TYPE getNum_to_schedIn() const;

      //! Get the number of from_timeCaller ports
      //!
      //! \return The number of from_timeCaller ports
      //!
      NATIVE_INT_TYPE getNum_from_timeCaller() const;

      //! Get the number of from_tlmOut ports
      //!
      //! \return The number of from_tlmOut ports
      //!
      NATIVE_INT_TYPE getNum_from_tlmOut() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_cmdIn[portNum] is connected
      //!
      bool isConnected_to_cmdIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_schedIn[portNum] is connected
      //!
      bool isConnected_to_schedIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      // ----------------------------------------------------------------------
      // Functions for sending commands
      // ----------------------------------------------------------------------

    protected:

      // send command buffers directly - used for intentional command encoding errors
      void sendRawCmd(FwOpcodeType opcode, U32 cmdSeq, Fw::CmdArgBuffer& args);

      //! Send a SignalGen_Settings command
      //!
      void sendCmd_SignalGen_Settings(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U32 Frequency, 
          F32 Amplitude, 
          F32 Phase, 
          Ref::SignalType SigType 
      );

      //! Send a SignalGen_Toggle command
      //!
      void sendCmd_SignalGen_Toggle(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      //! Send a SignalGen_Skip command
      //!
      void sendCmd_SignalGen_Skip(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Command response handling
      // ----------------------------------------------------------------------

      //! Handle a command response
      //!
      virtual void cmdResponseIn(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdResponse response /*!< The command response*/
      );

      //! A type representing a command response
      //!
      typedef struct {
        FwOpcodeType opCode;
        U32 cmdSeq;
        Fw::CmdResponse response;
      } CmdResponse;

      //! The command response history
      //!
      History<CmdResponse> *cmdResponseHistory;

    protected:

      // ----------------------------------------------------------------------
      // Event dispatch
      // ----------------------------------------------------------------------

      //! Dispatch an event
      //!
      void dispatchEvents(
          const FwEventIdType id, /*!< The event ID*/
          Fw::Time& timeTag, /*!< The time*/
          const Fw::LogSeverity severity, /*!< The severity*/
          Fw::LogBuffer& args /*!< The serialized arguments*/
      );

      //! Clear event history
      //!
      void clearEvents();

      //! The total number of events seen
      //!
      U32 eventsSize;

#if FW_ENABLE_TEXT_LOGGING

    protected:

      // ----------------------------------------------------------------------
      // Text events
      // ----------------------------------------------------------------------

      //! Handle a text event
      //!
      virtual void textLogIn(
          const FwEventIdType id, /*!< The event ID*/
          Fw::Time& timeTag, /*!< The time*/
          const Fw::LogSeverity severity, /*!< The severity*/
          const Fw::TextLogString& text /*!< The event string*/
      );

      //! A history entry for the text log
      //!
      typedef struct {
        U32 id;
        Fw::Time timeTag;
        Fw::LogSeverity severity;
        Fw::TextLogString text;
      } TextLogEntry;

      //! The history of text log events
      //!
      History<TextLogEntry> *textLogHistory;

      //! Print a text log history entry
      //!
      static void printTextLogHistoryEntry(
          const TextLogEntry& e,
          FILE* file
      );

      //! Print the text log history
      //!
      void printTextLogHistory(FILE *const file);

#endif

    protected:

      // ----------------------------------------------------------------------
      // Event: SignalGen_SettingsChanged
      // ----------------------------------------------------------------------

      //! Handle event SignalGen_SettingsChanged
      //!
      virtual void logIn_ACTIVITY_LO_SignalGen_SettingsChanged(
          U32 Frequency, 
          F32 Amplitude, 
          F32 Phase, 
          Ref::SignalType SignalType 
      );

      //! A history entry for event SignalGen_SettingsChanged
      //!
      typedef struct {
        U32 Frequency;
        F32 Amplitude;
        F32 Phase;
        Ref::SignalType SignalType;
      } EventEntry_SignalGen_SettingsChanged;

      //! The history of SignalGen_SettingsChanged events
      //!
      History<EventEntry_SignalGen_SettingsChanged>
        *eventHistory_SignalGen_SettingsChanged;

    protected:

      // ----------------------------------------------------------------------
      // Telemetry dispatch
      // ----------------------------------------------------------------------

      //! Dispatch telemetry
      //!
      void dispatchTlm(
          const FwChanIdType id, /*!< The channel ID*/
          const Fw::Time& timeTag, /*!< The time*/
          Fw::TlmBuffer& val /*!< The channel value*/
      );

      //! Clear telemetry history
      //!
      void clearTlm();

      //! The total number of telemetry inputs seen
      //!
      U32 tlmSize;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Type
      // ----------------------------------------------------------------------

      //! Handle channel Type
      //!
      virtual void tlmInput_Type(
          const Fw::Time& timeTag, /*!< The time*/
          const Ref::SignalType& val /*!< The channel value*/
      );

      //! A telemetry entry for channel Type
      //!
      typedef struct {
        Fw::Time timeTag;
        Ref::SignalType arg;
      } TlmEntry_Type;

      //! The history of Type values
      //!
      History<TlmEntry_Type>
        *tlmHistory_Type;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Output
      // ----------------------------------------------------------------------

      //! Handle channel Output
      //!
      virtual void tlmInput_Output(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel Output
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_Output;

      //! The history of Output values
      //!
      History<TlmEntry_Output>
        *tlmHistory_Output;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PairOutput
      // ----------------------------------------------------------------------

      //! Handle channel PairOutput
      //!
      virtual void tlmInput_PairOutput(
          const Fw::Time& timeTag, /*!< The time*/
          const Ref::SignalPair& val /*!< The channel value*/
      );

      //! A telemetry entry for channel PairOutput
      //!
      typedef struct {
        Fw::Time timeTag;
        Ref::SignalPair arg;
      } TlmEntry_PairOutput;

      //! The history of PairOutput values
      //!
      History<TlmEntry_PairOutput>
        *tlmHistory_PairOutput;

    protected:

      // ----------------------------------------------------------------------
      // Channel: History
      // ----------------------------------------------------------------------

      //! Handle channel History
      //!
      virtual void tlmInput_History(
          const Fw::Time& timeTag, /*!< The time*/
          const Ref::SignalSet& val /*!< The channel value*/
      );

      //! A telemetry entry for channel History
      //!
      typedef struct {
        Fw::Time timeTag;
        Ref::SignalSet arg;
      } TlmEntry_History;

      //! The history of History values
      //!
      History<TlmEntry_History>
        *tlmHistory_History;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PairHistory
      // ----------------------------------------------------------------------

      //! Handle channel PairHistory
      //!
      virtual void tlmInput_PairHistory(
          const Fw::Time& timeTag, /*!< The time*/
          const Ref::SignalPairSet& val /*!< The channel value*/
      );

      //! A telemetry entry for channel PairHistory
      //!
      typedef struct {
        Fw::Time timeTag;
        Ref::SignalPairSet arg;
      } TlmEntry_PairHistory;

      //! The history of PairHistory values
      //!
      History<TlmEntry_PairHistory>
        *tlmHistory_PairHistory;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Info
      // ----------------------------------------------------------------------

      //! Handle channel Info
      //!
      virtual void tlmInput_Info(
          const Fw::Time& timeTag, /*!< The time*/
          const Ref::SignalInfo& val /*!< The channel value*/
      );

      //! A telemetry entry for channel Info
      //!
      typedef struct {
        Fw::Time timeTag;
        Ref::SignalInfo arg;
      } TlmEntry_Info;

      //! The history of Info values
      //!
      History<TlmEntry_Info>
        *tlmHistory_Info;

    protected:

      // ----------------------------------------------------------------------
      // Test time
      // ----------------------------------------------------------------------

      //! Set the test time for events and telemetry
      //!
      void setTestTime(
          const Fw::Time& timeTag /*!< The time*/
      );

    private:

      // ----------------------------------------------------------------------
      // To ports
      // ----------------------------------------------------------------------

      //! To port connected to cmdIn
      //!
      Fw::OutputCmdPort m_to_cmdIn[1];

      //! To port connected to schedIn
      //!
      Svc::OutputSchedPort m_to_schedIn[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to cmdRegOut
      //!
      Fw::InputCmdRegPort m_from_cmdRegOut[1];

      //! From port connected to cmdResponseOut
      //!
      Fw::InputCmdResponsePort m_from_cmdResponseOut[1];

      //! From port connected to logOut
      //!
      Fw::InputLogPort m_from_logOut[1];

#if FW_ENABLE_TEXT_LOGGING == 1
      //! From port connected to logTextOut
      //!
      Fw::InputLogTextPort m_from_logTextOut[1];
#endif

      //! From port connected to timeCaller
      //!
      Fw::InputTimePort m_from_timeCaller[1];

      //! From port connected to tlmOut
      //!
      Fw::InputTlmPort m_from_tlmOut[1];

    private:

      // ----------------------------------------------------------------------
      // Static functions for output ports
      // ----------------------------------------------------------------------

      //! Static function for port from_cmdRegOut
      //!
      static void from_cmdRegOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwOpcodeType opCode /*!< 
      Command Op Code
      */
      );

      //! Static function for port from_cmdResponseOut
      //!
      static void from_cmdResponseOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
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

      //! Static function for port from_logOut
      //!
      static void from_logOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwEventIdType id, /*!< 
      Log ID
      */
          Fw::Time &timeTag, /*!< 
      Time Tag
      */
          const Fw::LogSeverity &severity, /*!< 
      The severity argument
      */
          Fw::LogBuffer &args /*!< 
      Buffer containing serialized log entry
      */
      );

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Static function for port from_logTextOut
      //!
      static void from_logTextOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwEventIdType id, /*!< 
      Log ID
      */
          Fw::Time &timeTag, /*!< 
      Time Tag
      */
          const Fw::LogSeverity &severity, /*!< 
      The severity argument
      */
          Fw::TextLogString &text /*!< 
      Text of log message
      */
      );
#endif

      //! Static function for port from_timeCaller
      //!
      static void from_timeCaller_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Time &time /*!< 
      The U32 cmd argument
      */
      );

      //! Static function for port from_tlmOut
      //!
      static void from_tlmOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwChanIdType id, /*!< 
      Telemetry Channel ID
      */
          Fw::Time &timeTag, /*!< 
      Time Tag
      */
          Fw::TlmBuffer &val /*!< 
      Buffer containing serialized telemetry value
      */
      );

    private:

      // ----------------------------------------------------------------------
      // Test time
      // ----------------------------------------------------------------------

      //! Test time stamp
      //!
      Fw::Time m_testTime;

  };

} // end namespace Ref

#endif
