// ======================================================================
// \title  SystemResources/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for SystemResources component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef SystemResources_TESTER_BASE_HPP
#define SystemResources_TESTER_BASE_HPP

#include <Svc/SystemResources/SystemResourcesComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class SystemResourcesTesterBase
  //! \brief Auto-generated base class for SystemResources component test harness
  //!
  class SystemResourcesTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object SystemResourcesTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect CmdDisp to to_CmdDisp[portNum]
      //!
      void connect_to_CmdDisp(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputCmdPort *const CmdDisp /*!< The port*/
      );

      //! Connect run to to_run[portNum]
      //!
      void connect_to_run(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Svc::InputSchedPort *const run /*!< The port*/
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for 'from' ports
      // Connect these input ports to the output ports under test
      // ----------------------------------------------------------------------

      //! Get the port that receives input from CmdReg
      //!
      //! \return from_CmdReg[portNum]
      //!
      Fw::InputCmdRegPort* get_from_CmdReg(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from CmdStatus
      //!
      //! \return from_CmdStatus[portNum]
      //!
      Fw::InputCmdResponsePort* get_from_CmdStatus(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from Log
      //!
      //! \return from_Log[portNum]
      //!
      Fw::InputLogPort* get_from_Log(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the port that receives input from LogText
      //!
      //! \return from_LogText[portNum]
      //!
      Fw::InputLogTextPort* get_from_LogText(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );
#endif

      //! Get the port that receives input from Time
      //!
      //! \return from_Time[portNum]
      //!
      Fw::InputTimePort* get_from_Time(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from Tlm
      //!
      //! \return from_Tlm[portNum]
      //!
      Fw::InputTlmPort* get_from_Tlm(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object SystemResourcesTesterBase
      //!
      SystemResourcesTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object SystemResourcesTesterBase
      //!
      virtual ~SystemResourcesTesterBase();

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

      //! Invoke the to port connected to run
      //!
      void invoke_to_run(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< 
      The call order
      */
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

      //! Get the number of to_CmdDisp ports
      //!
      //! \return The number of to_CmdDisp ports
      //!
      NATIVE_INT_TYPE getNum_to_CmdDisp() const;

      //! Get the number of from_CmdReg ports
      //!
      //! \return The number of from_CmdReg ports
      //!
      NATIVE_INT_TYPE getNum_from_CmdReg() const;

      //! Get the number of from_CmdStatus ports
      //!
      //! \return The number of from_CmdStatus ports
      //!
      NATIVE_INT_TYPE getNum_from_CmdStatus() const;

      //! Get the number of from_Log ports
      //!
      //! \return The number of from_Log ports
      //!
      NATIVE_INT_TYPE getNum_from_Log() const;

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the number of from_LogText ports
      //!
      //! \return The number of from_LogText ports
      //!
      NATIVE_INT_TYPE getNum_from_LogText() const;
#endif

      //! Get the number of from_Time ports
      //!
      //! \return The number of from_Time ports
      //!
      NATIVE_INT_TYPE getNum_from_Time() const;

      //! Get the number of from_Tlm ports
      //!
      //! \return The number of from_Tlm ports
      //!
      NATIVE_INT_TYPE getNum_from_Tlm() const;

      //! Get the number of to_run ports
      //!
      //! \return The number of to_run ports
      //!
      NATIVE_INT_TYPE getNum_to_run() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_CmdDisp[portNum] is connected
      //!
      bool isConnected_to_CmdDisp(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_run[portNum] is connected
      //!
      bool isConnected_to_run(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      // ----------------------------------------------------------------------
      // Functions for sending commands
      // ----------------------------------------------------------------------

    protected:

      // send command buffers directly - used for intentional command encoding errors
      void sendRawCmd(FwOpcodeType opcode, U32 cmdSeq, Fw::CmdArgBuffer& args);

      //! Send a ENABLE command
      //!
      void sendCmd_ENABLE(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          Svc::SystemResourceEnabled enable /*!< 
          whether or not system resource telemetry is enabled
          */
      );

      //! Send a VERSION command
      //!
      void sendCmd_VERSION(
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
      // Event: FRAMEWORK_VERSION
      // ----------------------------------------------------------------------

      //! Handle event FRAMEWORK_VERSION
      //!
      virtual void logIn_ACTIVITY_LO_FRAMEWORK_VERSION(
          const Fw::LogStringArg& version /*!< version string*/
      );

      //! A history entry for event FRAMEWORK_VERSION
      //!
      typedef struct {
        Fw::LogStringArg version;
      } EventEntry_FRAMEWORK_VERSION;

      //! The history of FRAMEWORK_VERSION events
      //!
      History<EventEntry_FRAMEWORK_VERSION>
        *eventHistory_FRAMEWORK_VERSION;

    protected:

      // ----------------------------------------------------------------------
      // Event: PROJECT_VERSION
      // ----------------------------------------------------------------------

      //! Handle event PROJECT_VERSION
      //!
      virtual void logIn_ACTIVITY_LO_PROJECT_VERSION(
          const Fw::LogStringArg& version /*!< version string*/
      );

      //! A history entry for event PROJECT_VERSION
      //!
      typedef struct {
        Fw::LogStringArg version;
      } EventEntry_PROJECT_VERSION;

      //! The history of PROJECT_VERSION events
      //!
      History<EventEntry_PROJECT_VERSION>
        *eventHistory_PROJECT_VERSION;

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
      // Channel: MEMORY_TOTAL
      // ----------------------------------------------------------------------

      //! Handle channel MEMORY_TOTAL
      //!
      virtual void tlmInput_MEMORY_TOTAL(
          const Fw::Time& timeTag, /*!< The time*/
          const U64& val /*!< The channel value*/
      );

      //! A telemetry entry for channel MEMORY_TOTAL
      //!
      typedef struct {
        Fw::Time timeTag;
        U64 arg;
      } TlmEntry_MEMORY_TOTAL;

      //! The history of MEMORY_TOTAL values
      //!
      History<TlmEntry_MEMORY_TOTAL>
        *tlmHistory_MEMORY_TOTAL;

    protected:

      // ----------------------------------------------------------------------
      // Channel: MEMORY_USED
      // ----------------------------------------------------------------------

      //! Handle channel MEMORY_USED
      //!
      virtual void tlmInput_MEMORY_USED(
          const Fw::Time& timeTag, /*!< The time*/
          const U64& val /*!< The channel value*/
      );

      //! A telemetry entry for channel MEMORY_USED
      //!
      typedef struct {
        Fw::Time timeTag;
        U64 arg;
      } TlmEntry_MEMORY_USED;

      //! The history of MEMORY_USED values
      //!
      History<TlmEntry_MEMORY_USED>
        *tlmHistory_MEMORY_USED;

    protected:

      // ----------------------------------------------------------------------
      // Channel: NON_VOLATILE_TOTAL
      // ----------------------------------------------------------------------

      //! Handle channel NON_VOLATILE_TOTAL
      //!
      virtual void tlmInput_NON_VOLATILE_TOTAL(
          const Fw::Time& timeTag, /*!< The time*/
          const U64& val /*!< The channel value*/
      );

      //! A telemetry entry for channel NON_VOLATILE_TOTAL
      //!
      typedef struct {
        Fw::Time timeTag;
        U64 arg;
      } TlmEntry_NON_VOLATILE_TOTAL;

      //! The history of NON_VOLATILE_TOTAL values
      //!
      History<TlmEntry_NON_VOLATILE_TOTAL>
        *tlmHistory_NON_VOLATILE_TOTAL;

    protected:

      // ----------------------------------------------------------------------
      // Channel: NON_VOLATILE_FREE
      // ----------------------------------------------------------------------

      //! Handle channel NON_VOLATILE_FREE
      //!
      virtual void tlmInput_NON_VOLATILE_FREE(
          const Fw::Time& timeTag, /*!< The time*/
          const U64& val /*!< The channel value*/
      );

      //! A telemetry entry for channel NON_VOLATILE_FREE
      //!
      typedef struct {
        Fw::Time timeTag;
        U64 arg;
      } TlmEntry_NON_VOLATILE_FREE;

      //! The history of NON_VOLATILE_FREE values
      //!
      History<TlmEntry_NON_VOLATILE_FREE>
        *tlmHistory_NON_VOLATILE_FREE;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU
      // ----------------------------------------------------------------------

      //! Handle channel CPU
      //!
      virtual void tlmInput_CPU(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU;

      //! The history of CPU values
      //!
      History<TlmEntry_CPU>
        *tlmHistory_CPU;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_00
      // ----------------------------------------------------------------------

      //! Handle channel CPU_00
      //!
      virtual void tlmInput_CPU_00(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_00
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_00;

      //! The history of CPU_00 values
      //!
      History<TlmEntry_CPU_00>
        *tlmHistory_CPU_00;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_01
      // ----------------------------------------------------------------------

      //! Handle channel CPU_01
      //!
      virtual void tlmInput_CPU_01(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_01
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_01;

      //! The history of CPU_01 values
      //!
      History<TlmEntry_CPU_01>
        *tlmHistory_CPU_01;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_02
      // ----------------------------------------------------------------------

      //! Handle channel CPU_02
      //!
      virtual void tlmInput_CPU_02(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_02
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_02;

      //! The history of CPU_02 values
      //!
      History<TlmEntry_CPU_02>
        *tlmHistory_CPU_02;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_03
      // ----------------------------------------------------------------------

      //! Handle channel CPU_03
      //!
      virtual void tlmInput_CPU_03(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_03
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_03;

      //! The history of CPU_03 values
      //!
      History<TlmEntry_CPU_03>
        *tlmHistory_CPU_03;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_04
      // ----------------------------------------------------------------------

      //! Handle channel CPU_04
      //!
      virtual void tlmInput_CPU_04(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_04
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_04;

      //! The history of CPU_04 values
      //!
      History<TlmEntry_CPU_04>
        *tlmHistory_CPU_04;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_05
      // ----------------------------------------------------------------------

      //! Handle channel CPU_05
      //!
      virtual void tlmInput_CPU_05(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_05
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_05;

      //! The history of CPU_05 values
      //!
      History<TlmEntry_CPU_05>
        *tlmHistory_CPU_05;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_06
      // ----------------------------------------------------------------------

      //! Handle channel CPU_06
      //!
      virtual void tlmInput_CPU_06(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_06
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_06;

      //! The history of CPU_06 values
      //!
      History<TlmEntry_CPU_06>
        *tlmHistory_CPU_06;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_07
      // ----------------------------------------------------------------------

      //! Handle channel CPU_07
      //!
      virtual void tlmInput_CPU_07(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_07
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_07;

      //! The history of CPU_07 values
      //!
      History<TlmEntry_CPU_07>
        *tlmHistory_CPU_07;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_08
      // ----------------------------------------------------------------------

      //! Handle channel CPU_08
      //!
      virtual void tlmInput_CPU_08(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_08
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_08;

      //! The history of CPU_08 values
      //!
      History<TlmEntry_CPU_08>
        *tlmHistory_CPU_08;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_09
      // ----------------------------------------------------------------------

      //! Handle channel CPU_09
      //!
      virtual void tlmInput_CPU_09(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_09
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_09;

      //! The history of CPU_09 values
      //!
      History<TlmEntry_CPU_09>
        *tlmHistory_CPU_09;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_10
      // ----------------------------------------------------------------------

      //! Handle channel CPU_10
      //!
      virtual void tlmInput_CPU_10(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_10
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_10;

      //! The history of CPU_10 values
      //!
      History<TlmEntry_CPU_10>
        *tlmHistory_CPU_10;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_11
      // ----------------------------------------------------------------------

      //! Handle channel CPU_11
      //!
      virtual void tlmInput_CPU_11(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_11
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_11;

      //! The history of CPU_11 values
      //!
      History<TlmEntry_CPU_11>
        *tlmHistory_CPU_11;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_12
      // ----------------------------------------------------------------------

      //! Handle channel CPU_12
      //!
      virtual void tlmInput_CPU_12(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_12
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_12;

      //! The history of CPU_12 values
      //!
      History<TlmEntry_CPU_12>
        *tlmHistory_CPU_12;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_13
      // ----------------------------------------------------------------------

      //! Handle channel CPU_13
      //!
      virtual void tlmInput_CPU_13(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_13
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_13;

      //! The history of CPU_13 values
      //!
      History<TlmEntry_CPU_13>
        *tlmHistory_CPU_13;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_14
      // ----------------------------------------------------------------------

      //! Handle channel CPU_14
      //!
      virtual void tlmInput_CPU_14(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_14
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_14;

      //! The history of CPU_14 values
      //!
      History<TlmEntry_CPU_14>
        *tlmHistory_CPU_14;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_15
      // ----------------------------------------------------------------------

      //! Handle channel CPU_15
      //!
      virtual void tlmInput_CPU_15(
          const Fw::Time& timeTag, /*!< The time*/
          const F32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CPU_15
      //!
      typedef struct {
        Fw::Time timeTag;
        F32 arg;
      } TlmEntry_CPU_15;

      //! The history of CPU_15 values
      //!
      History<TlmEntry_CPU_15>
        *tlmHistory_CPU_15;

    protected:

      // ----------------------------------------------------------------------
      // Channel: FRAMEWORK_VERSION
      // ----------------------------------------------------------------------

      //! Handle channel FRAMEWORK_VERSION
      //!
      virtual void tlmInput_FRAMEWORK_VERSION(
          const Fw::Time& timeTag, /*!< The time*/
          const Fw::TlmString& val /*!< The channel value*/
      );

      //! A telemetry entry for channel FRAMEWORK_VERSION
      //!
      typedef struct {
        Fw::Time timeTag;
        Fw::TlmString arg;
      } TlmEntry_FRAMEWORK_VERSION;

      //! The history of FRAMEWORK_VERSION values
      //!
      History<TlmEntry_FRAMEWORK_VERSION>
        *tlmHistory_FRAMEWORK_VERSION;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PROJECT_VERSION
      // ----------------------------------------------------------------------

      //! Handle channel PROJECT_VERSION
      //!
      virtual void tlmInput_PROJECT_VERSION(
          const Fw::Time& timeTag, /*!< The time*/
          const Fw::TlmString& val /*!< The channel value*/
      );

      //! A telemetry entry for channel PROJECT_VERSION
      //!
      typedef struct {
        Fw::Time timeTag;
        Fw::TlmString arg;
      } TlmEntry_PROJECT_VERSION;

      //! The history of PROJECT_VERSION values
      //!
      History<TlmEntry_PROJECT_VERSION>
        *tlmHistory_PROJECT_VERSION;

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

      //! To port connected to CmdDisp
      //!
      Fw::OutputCmdPort m_to_CmdDisp[1];

      //! To port connected to run
      //!
      Svc::OutputSchedPort m_to_run[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to CmdReg
      //!
      Fw::InputCmdRegPort m_from_CmdReg[1];

      //! From port connected to CmdStatus
      //!
      Fw::InputCmdResponsePort m_from_CmdStatus[1];

      //! From port connected to Log
      //!
      Fw::InputLogPort m_from_Log[1];

#if FW_ENABLE_TEXT_LOGGING == 1
      //! From port connected to LogText
      //!
      Fw::InputLogTextPort m_from_LogText[1];
#endif

      //! From port connected to Time
      //!
      Fw::InputTimePort m_from_Time[1];

      //! From port connected to Tlm
      //!
      Fw::InputTlmPort m_from_Tlm[1];

    private:

      // ----------------------------------------------------------------------
      // Static functions for output ports
      // ----------------------------------------------------------------------

      //! Static function for port from_CmdReg
      //!
      static void from_CmdReg_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          FwOpcodeType opCode /*!< 
      Command Op Code
      */
      );

      //! Static function for port from_CmdStatus
      //!
      static void from_CmdStatus_static(
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

      //! Static function for port from_Log
      //!
      static void from_Log_static(
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
      //! Static function for port from_LogText
      //!
      static void from_LogText_static(
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

      //! Static function for port from_Time
      //!
      static void from_Time_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Time &time /*!< 
      The U32 cmd argument
      */
      );

      //! Static function for port from_Tlm
      //!
      static void from_Tlm_static(
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

} // end namespace Svc

#endif
