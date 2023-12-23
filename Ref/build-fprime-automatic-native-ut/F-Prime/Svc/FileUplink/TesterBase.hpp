// ======================================================================
// \title  FileUplink/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for FileUplink component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef FileUplink_TESTER_BASE_HPP
#define FileUplink_TESTER_BASE_HPP

#include <Svc/FileUplink/FileUplinkComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class FileUplinkTesterBase
  //! \brief Auto-generated base class for FileUplink component test harness
  //!
  class FileUplinkTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object FileUplinkTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect bufferSendIn to to_bufferSendIn[portNum]
      //!
      void connect_to_bufferSendIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputBufferSendPort *const bufferSendIn /*!< The port*/
      );

      //! Connect pingIn to to_pingIn[portNum]
      //!
      void connect_to_pingIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Svc::InputPingPort *const pingIn /*!< The port*/
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for 'from' ports
      // Connect these input ports to the output ports under test
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the port that receives input from LogText
      //!
      //! \return from_LogText[portNum]
      //!
      Fw::InputLogTextPort* get_from_LogText(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );
#endif

      //! Get the port that receives input from bufferSendOut
      //!
      //! \return from_bufferSendOut[portNum]
      //!
      Fw::InputBufferSendPort* get_from_bufferSendOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from eventOut
      //!
      //! \return from_eventOut[portNum]
      //!
      Fw::InputLogPort* get_from_eventOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from pingOut
      //!
      //! \return from_pingOut[portNum]
      //!
      Svc::InputPingPort* get_from_pingOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

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

      //! Construct object FileUplinkTesterBase
      //!
      FileUplinkTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FileUplinkTesterBase
      //!
      virtual ~FileUplinkTesterBase();

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

      //! Handler prototype for from_bufferSendOut
      //!
      virtual void from_bufferSendOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      ) = 0;

      //! Handler base function for from_bufferSendOut
      //!
      void from_bufferSendOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Handler prototype for from_pingOut
      //!
      virtual void from_pingOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 key /*!< 
      Value to return to pinger
      */
      ) = 0;

      //! Handler base function for from_pingOut
      //!
      void from_pingOut_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 key /*!< 
      Value to return to pinger
      */
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

      //! Push an entry on the history for from_bufferSendOut
      void pushFromPortEntry_bufferSendOut(
          Fw::Buffer &fwBuffer 
      );

      //! A history entry for from_bufferSendOut
      //!
      typedef struct {
          Fw::Buffer fwBuffer;
      } FromPortEntry_bufferSendOut;

      //! The history for from_bufferSendOut
      //!
      History<FromPortEntry_bufferSendOut>
        *fromPortHistory_bufferSendOut;

      //! Push an entry on the history for from_pingOut
      void pushFromPortEntry_pingOut(
          U32 key /*!< 
      Value to return to pinger
      */
      );

      //! A history entry for from_pingOut
      //!
      typedef struct {
          U32 key;
      } FromPortEntry_pingOut;

      //! The history for from_pingOut
      //!
      History<FromPortEntry_pingOut>
        *fromPortHistory_pingOut;

    protected:

      // ----------------------------------------------------------------------
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

      //! Invoke the to port connected to bufferSendIn
      //!
      void invoke_to_bufferSendIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Invoke the to port connected to pingIn
      //!
      void invoke_to_pingIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 key /*!< 
      Value to return to pinger
      */
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the number of from_LogText ports
      //!
      //! \return The number of from_LogText ports
      //!
      NATIVE_INT_TYPE getNum_from_LogText() const;
#endif

      //! Get the number of to_bufferSendIn ports
      //!
      //! \return The number of to_bufferSendIn ports
      //!
      NATIVE_INT_TYPE getNum_to_bufferSendIn() const;

      //! Get the number of from_bufferSendOut ports
      //!
      //! \return The number of from_bufferSendOut ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferSendOut() const;

      //! Get the number of from_eventOut ports
      //!
      //! \return The number of from_eventOut ports
      //!
      NATIVE_INT_TYPE getNum_from_eventOut() const;

      //! Get the number of to_pingIn ports
      //!
      //! \return The number of to_pingIn ports
      //!
      NATIVE_INT_TYPE getNum_to_pingIn() const;

      //! Get the number of from_pingOut ports
      //!
      //! \return The number of from_pingOut ports
      //!
      NATIVE_INT_TYPE getNum_from_pingOut() const;

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
      //! Whether to_bufferSendIn[portNum] is connected
      //!
      bool isConnected_to_bufferSendIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_pingIn[portNum] is connected
      //!
      bool isConnected_to_pingIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

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
      // Event: BadChecksum
      // ----------------------------------------------------------------------

      //! Handle event BadChecksum
      //!
      virtual void logIn_WARNING_HI_BadChecksum(
          const Fw::LogStringArg& fileName, /*!< The file name*/
          U32 computed, /*!< The computed value*/
          U32 read /*!< The value read*/
      );

      //! A history entry for event BadChecksum
      //!
      typedef struct {
        Fw::LogStringArg fileName;
        U32 computed;
        U32 read;
      } EventEntry_BadChecksum;

      //! The history of BadChecksum events
      //!
      History<EventEntry_BadChecksum>
        *eventHistory_BadChecksum;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileOpenError
      // ----------------------------------------------------------------------

      //! Handle event FileOpenError
      //!
      virtual void logIn_WARNING_HI_FileOpenError(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event FileOpenError
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_FileOpenError;

      //! The history of FileOpenError events
      //!
      History<EventEntry_FileOpenError>
        *eventHistory_FileOpenError;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileReceived
      // ----------------------------------------------------------------------

      //! Handle event FileReceived
      //!
      virtual void logIn_ACTIVITY_HI_FileReceived(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event FileReceived
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_FileReceived;

      //! The history of FileReceived events
      //!
      History<EventEntry_FileReceived>
        *eventHistory_FileReceived;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileWriteError
      // ----------------------------------------------------------------------

      //! Handle event FileWriteError
      //!
      virtual void logIn_WARNING_HI_FileWriteError(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event FileWriteError
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_FileWriteError;

      //! The history of FileWriteError events
      //!
      History<EventEntry_FileWriteError>
        *eventHistory_FileWriteError;

    protected:

      // ----------------------------------------------------------------------
      // Event: InvalidReceiveMode
      // ----------------------------------------------------------------------

      //! Handle event InvalidReceiveMode
      //!
      virtual void logIn_WARNING_HI_InvalidReceiveMode(
          U32 packetType, /*!< The type of the packet received*/
          U32 mode /*!< The receive mode*/
      );

      //! A history entry for event InvalidReceiveMode
      //!
      typedef struct {
        U32 packetType;
        U32 mode;
      } EventEntry_InvalidReceiveMode;

      //! The history of InvalidReceiveMode events
      //!
      History<EventEntry_InvalidReceiveMode>
        *eventHistory_InvalidReceiveMode;

    protected:

      // ----------------------------------------------------------------------
      // Event: PacketOutOfBounds
      // ----------------------------------------------------------------------

      //! Handle event PacketOutOfBounds
      //!
      virtual void logIn_WARNING_HI_PacketOutOfBounds(
          U32 packetIndex, /*!< The sequence index of the packet*/
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event PacketOutOfBounds
      //!
      typedef struct {
        U32 packetIndex;
        Fw::LogStringArg fileName;
      } EventEntry_PacketOutOfBounds;

      //! The history of PacketOutOfBounds events
      //!
      History<EventEntry_PacketOutOfBounds>
        *eventHistory_PacketOutOfBounds;

    protected:

      // ----------------------------------------------------------------------
      // Event: PacketOutOfOrder
      // ----------------------------------------------------------------------

      //! Handle event PacketOutOfOrder
      //!
      virtual void logIn_WARNING_HI_PacketOutOfOrder(
          U32 packetIndex, /*!< The sequence index of the out-of-order packet*/
          U32 lastPacketIndex /*!< The sequence index of the last packet received before the out-of-order packet*/
      );

      //! A history entry for event PacketOutOfOrder
      //!
      typedef struct {
        U32 packetIndex;
        U32 lastPacketIndex;
      } EventEntry_PacketOutOfOrder;

      //! The history of PacketOutOfOrder events
      //!
      History<EventEntry_PacketOutOfOrder>
        *eventHistory_PacketOutOfOrder;

    protected:

      // ----------------------------------------------------------------------
      // Event: UplinkCanceled
      // ----------------------------------------------------------------------

      //! Handle event UplinkCanceled
      //!
      virtual void logIn_ACTIVITY_HI_UplinkCanceled(

      );

      //! Size of history for event UplinkCanceled
      //!
      U32 eventsSize_UplinkCanceled;

    protected:

      // ----------------------------------------------------------------------
      // Event: DecodeError
      // ----------------------------------------------------------------------

      //! Handle event DecodeError
      //!
      virtual void logIn_WARNING_HI_DecodeError(
          I32 status /*!< The sequence index of the out-of-order packet*/
      );

      //! A history entry for event DecodeError
      //!
      typedef struct {
        I32 status;
      } EventEntry_DecodeError;

      //! The history of DecodeError events
      //!
      History<EventEntry_DecodeError>
        *eventHistory_DecodeError;

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
      // Channel: FilesReceived
      // ----------------------------------------------------------------------

      //! Handle channel FilesReceived
      //!
      virtual void tlmInput_FilesReceived(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel FilesReceived
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_FilesReceived;

      //! The history of FilesReceived values
      //!
      History<TlmEntry_FilesReceived>
        *tlmHistory_FilesReceived;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PacketsReceived
      // ----------------------------------------------------------------------

      //! Handle channel PacketsReceived
      //!
      virtual void tlmInput_PacketsReceived(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel PacketsReceived
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_PacketsReceived;

      //! The history of PacketsReceived values
      //!
      History<TlmEntry_PacketsReceived>
        *tlmHistory_PacketsReceived;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Warnings
      // ----------------------------------------------------------------------

      //! Handle channel Warnings
      //!
      virtual void tlmInput_Warnings(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel Warnings
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_Warnings;

      //! The history of Warnings values
      //!
      History<TlmEntry_Warnings>
        *tlmHistory_Warnings;

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

      //! To port connected to bufferSendIn
      //!
      Fw::OutputBufferSendPort m_to_bufferSendIn[1];

      //! To port connected to pingIn
      //!
      Svc::OutputPingPort m_to_pingIn[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

#if FW_ENABLE_TEXT_LOGGING == 1
      //! From port connected to LogText
      //!
      Fw::InputLogTextPort m_from_LogText[1];
#endif

      //! From port connected to bufferSendOut
      //!
      Fw::InputBufferSendPort m_from_bufferSendOut[1];

      //! From port connected to eventOut
      //!
      Fw::InputLogPort m_from_eventOut[1];

      //! From port connected to pingOut
      //!
      Svc::InputPingPort m_from_pingOut[1];

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

      //! Static function for port from_bufferSendOut
      //!
      static void from_bufferSendOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

      //! Static function for port from_eventOut
      //!
      static void from_eventOut_static(
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

      //! Static function for port from_pingOut
      //!
      static void from_pingOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 key /*!< 
      Value to return to pinger
      */
      );

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

} // end namespace Svc

#endif
