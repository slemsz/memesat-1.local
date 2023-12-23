// ======================================================================
// \title  FileDownlink/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for FileDownlink component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef FileDownlink_TESTER_BASE_HPP
#define FileDownlink_TESTER_BASE_HPP

#include <Svc/FileDownlink/FileDownlinkComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class FileDownlinkTesterBase
  //! \brief Auto-generated base class for FileDownlink component test harness
  //!
  class FileDownlinkTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object FileDownlinkTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect Run to to_Run[portNum]
      //!
      void connect_to_Run(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Svc::InputSchedPort *const Run /*!< The port*/
      );

      //! Connect SendFile to to_SendFile[portNum]
      //!
      void connect_to_SendFile(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Svc::InputSendFileRequestPort *const SendFile /*!< The port*/
      );

      //! Connect bufferReturn to to_bufferReturn[portNum]
      //!
      void connect_to_bufferReturn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputBufferSendPort *const bufferReturn /*!< The port*/
      );

      //! Connect cmdIn to to_cmdIn[portNum]
      //!
      void connect_to_cmdIn(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputCmdPort *const cmdIn /*!< The port*/
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

      //! Get the port that receives input from FileComplete
      //!
      //! \return from_FileComplete[portNum]
      //!
      Svc::InputSendFileCompletePort* get_from_FileComplete(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Get the port that receives input from bufferSendOut
      //!
      //! \return from_bufferSendOut[portNum]
      //!
      Fw::InputBufferSendPort* get_from_bufferSendOut(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

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

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the port that receives input from textEventOut
      //!
      //! \return from_textEventOut[portNum]
      //!
      Fw::InputLogTextPort* get_from_textEventOut(
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

      //! Construct object FileDownlinkTesterBase
      //!
      FileDownlinkTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FileDownlinkTesterBase
      //!
      virtual ~FileDownlinkTesterBase();

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

      //! Handler prototype for from_FileComplete
      //!
      virtual void from_FileComplete_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          const Svc::SendFileResponse &resp 
      ) = 0;

      //! Handler base function for from_FileComplete
      //!
      void from_FileComplete_handlerBase(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          const Svc::SendFileResponse &resp 
      );

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

      //! Push an entry on the history for from_FileComplete
      void pushFromPortEntry_FileComplete(
          const Svc::SendFileResponse &resp 
      );

      //! A history entry for from_FileComplete
      //!
      typedef struct {
          Svc::SendFileResponse resp;
      } FromPortEntry_FileComplete;

      //! The history for from_FileComplete
      //!
      History<FromPortEntry_FileComplete>
        *fromPortHistory_FileComplete;

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

      //! Invoke the to port connected to Run
      //!
      void invoke_to_Run(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< 
      The call order
      */
      );

      //! Invoke the to port connected to SendFile
      //!
      Svc::SendFileResponse invoke_to_SendFile(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          const sourceFileNameString &sourceFileName, /*!< 
      Path of file to downlink
      */
          const destFileNameString &destFileName, /*!< 
      Path to store downlinked file at
      */
          U32 offset, /*!< 
      Amount of data in bytes to downlink from file. 0 to read until end of file
      */
          U32 length /*!< 
      Amount of data in bytes to downlink from file. 0 to read until end of file
      */
      );

      //! Invoke the to port connected to bufferReturn
      //!
      void invoke_to_bufferReturn(
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

      //! Get the number of from_FileComplete ports
      //!
      //! \return The number of from_FileComplete ports
      //!
      NATIVE_INT_TYPE getNum_from_FileComplete() const;

      //! Get the number of to_Run ports
      //!
      //! \return The number of to_Run ports
      //!
      NATIVE_INT_TYPE getNum_to_Run() const;

      //! Get the number of to_SendFile ports
      //!
      //! \return The number of to_SendFile ports
      //!
      NATIVE_INT_TYPE getNum_to_SendFile() const;

      //! Get the number of to_bufferReturn ports
      //!
      //! \return The number of to_bufferReturn ports
      //!
      NATIVE_INT_TYPE getNum_to_bufferReturn() const;

      //! Get the number of from_bufferSendOut ports
      //!
      //! \return The number of from_bufferSendOut ports
      //!
      NATIVE_INT_TYPE getNum_from_bufferSendOut() const;

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

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Get the number of from_textEventOut ports
      //!
      //! \return The number of from_textEventOut ports
      //!
      NATIVE_INT_TYPE getNum_from_textEventOut() const;
#endif

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
      //! Whether to_Run[portNum] is connected
      //!
      bool isConnected_to_Run(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_SendFile[portNum] is connected
      //!
      bool isConnected_to_SendFile(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_bufferReturn[portNum] is connected
      //!
      bool isConnected_to_bufferReturn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_cmdIn[portNum] is connected
      //!
      bool isConnected_to_cmdIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_pingIn[portNum] is connected
      //!
      bool isConnected_to_pingIn(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      // ----------------------------------------------------------------------
      // Functions for sending commands
      // ----------------------------------------------------------------------

    protected:

      // send command buffers directly - used for intentional command encoding errors
      void sendRawCmd(FwOpcodeType opcode, U32 cmdSeq, Fw::CmdArgBuffer& args);

      //! Send a SendFile command
      //!
      void sendCmd_SendFile(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& sourceFileName, /*!< 
          The name of the on-board file to send
          */
          const Fw::CmdStringArg& destFileName /*!< 
          The name of the destination file on the ground
          */
      );

      //! Send a Cancel command
      //!
      void sendCmd_Cancel(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      //! Send a SendPartial command
      //!
      void sendCmd_SendPartial(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& sourceFileName, /*!< 
          The name of the on-board file to send
          */
          const Fw::CmdStringArg& destFileName, /*!< 
          The name of the destination file on the ground
          */
          U32 startOffset, /*!< 
          Starting offset of the source file
          */
          U32 length /*!< 
          Number of bytes to send from starting offset. Length of 0 implies until the end of the file
          */
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
      // Event: FileReadError
      // ----------------------------------------------------------------------

      //! Handle event FileReadError
      //!
      virtual void logIn_WARNING_HI_FileReadError(
          const Fw::LogStringArg& fileName, /*!< The name of the file*/
          I32 status /*!< The file status of read*/
      );

      //! A history entry for event FileReadError
      //!
      typedef struct {
        Fw::LogStringArg fileName;
        I32 status;
      } EventEntry_FileReadError;

      //! The history of FileReadError events
      //!
      History<EventEntry_FileReadError>
        *eventHistory_FileReadError;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSent
      // ----------------------------------------------------------------------

      //! Handle event FileSent
      //!
      virtual void logIn_ACTIVITY_HI_FileSent(
          const Fw::LogStringArg& sourceFileName, /*!< The source file name*/
          const Fw::LogStringArg& destFileName /*!< The destination file name*/
      );

      //! A history entry for event FileSent
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_FileSent;

      //! The history of FileSent events
      //!
      History<EventEntry_FileSent>
        *eventHistory_FileSent;

    protected:

      // ----------------------------------------------------------------------
      // Event: DownlinkCanceled
      // ----------------------------------------------------------------------

      //! Handle event DownlinkCanceled
      //!
      virtual void logIn_ACTIVITY_HI_DownlinkCanceled(
          const Fw::LogStringArg& sourceFileName, /*!< The source file name*/
          const Fw::LogStringArg& destFileName /*!< The destination file name*/
      );

      //! A history entry for event DownlinkCanceled
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_DownlinkCanceled;

      //! The history of DownlinkCanceled events
      //!
      History<EventEntry_DownlinkCanceled>
        *eventHistory_DownlinkCanceled;

    protected:

      // ----------------------------------------------------------------------
      // Event: DownlinkTimeout
      // ----------------------------------------------------------------------

      //! Handle event DownlinkTimeout
      //!
      virtual void logIn_WARNING_HI_DownlinkTimeout(
          const Fw::LogStringArg& sourceFileName, /*!< The source filename*/
          const Fw::LogStringArg& destFileName /*!< The destination file name*/
      );

      //! A history entry for event DownlinkTimeout
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_DownlinkTimeout;

      //! The history of DownlinkTimeout events
      //!
      History<EventEntry_DownlinkTimeout>
        *eventHistory_DownlinkTimeout;

    protected:

      // ----------------------------------------------------------------------
      // Event: DownlinkPartialWarning
      // ----------------------------------------------------------------------

      //! Handle event DownlinkPartialWarning
      //!
      virtual void logIn_WARNING_LO_DownlinkPartialWarning(
          U32 startOffset, /*!< Starting file offset in bytes*/
          U32 length, /*!< Number of bytes to downlink*/
          U32 filesize, /*!< Size of source file*/
          const Fw::LogStringArg& sourceFileName, /*!< The source filename*/
          const Fw::LogStringArg& destFileName /*!< The destination file name*/
      );

      //! A history entry for event DownlinkPartialWarning
      //!
      typedef struct {
        U32 startOffset;
        U32 length;
        U32 filesize;
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_DownlinkPartialWarning;

      //! The history of DownlinkPartialWarning events
      //!
      History<EventEntry_DownlinkPartialWarning>
        *eventHistory_DownlinkPartialWarning;

    protected:

      // ----------------------------------------------------------------------
      // Event: DownlinkPartialFail
      // ----------------------------------------------------------------------

      //! Handle event DownlinkPartialFail
      //!
      virtual void logIn_WARNING_HI_DownlinkPartialFail(
          const Fw::LogStringArg& sourceFileName, /*!< The source filename*/
          const Fw::LogStringArg& destFileName, /*!< The destination file name*/
          U32 startOffset, /*!< Starting file offset in bytes*/
          U32 filesize /*!< Size of source file*/
      );

      //! A history entry for event DownlinkPartialFail
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
        U32 startOffset;
        U32 filesize;
      } EventEntry_DownlinkPartialFail;

      //! The history of DownlinkPartialFail events
      //!
      History<EventEntry_DownlinkPartialFail>
        *eventHistory_DownlinkPartialFail;

    protected:

      // ----------------------------------------------------------------------
      // Event: SendDataFail
      // ----------------------------------------------------------------------

      //! Handle event SendDataFail
      //!
      virtual void logIn_WARNING_HI_SendDataFail(
          const Fw::LogStringArg& sourceFileName, /*!< The source filename*/
          U32 byteOffset /*!< Byte offset*/
      );

      //! A history entry for event SendDataFail
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        U32 byteOffset;
      } EventEntry_SendDataFail;

      //! The history of SendDataFail events
      //!
      History<EventEntry_SendDataFail>
        *eventHistory_SendDataFail;

    protected:

      // ----------------------------------------------------------------------
      // Event: SendStarted
      // ----------------------------------------------------------------------

      //! Handle event SendStarted
      //!
      virtual void logIn_ACTIVITY_HI_SendStarted(
          U32 fileSize, /*!< The source file size*/
          const Fw::LogStringArg& sourceFileName, /*!< The source filename*/
          const Fw::LogStringArg& destFileName /*!< The destination filename*/
      );

      //! A history entry for event SendStarted
      //!
      typedef struct {
        U32 fileSize;
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_SendStarted;

      //! The history of SendStarted events
      //!
      History<EventEntry_SendStarted>
        *eventHistory_SendStarted;

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
      // Channel: FilesSent
      // ----------------------------------------------------------------------

      //! Handle channel FilesSent
      //!
      virtual void tlmInput_FilesSent(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel FilesSent
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_FilesSent;

      //! The history of FilesSent values
      //!
      History<TlmEntry_FilesSent>
        *tlmHistory_FilesSent;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PacketsSent
      // ----------------------------------------------------------------------

      //! Handle channel PacketsSent
      //!
      virtual void tlmInput_PacketsSent(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel PacketsSent
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_PacketsSent;

      //! The history of PacketsSent values
      //!
      History<TlmEntry_PacketsSent>
        *tlmHistory_PacketsSent;

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

      //! To port connected to Run
      //!
      Svc::OutputSchedPort m_to_Run[1];

      //! To port connected to SendFile
      //!
      Svc::OutputSendFileRequestPort m_to_SendFile[1];

      //! To port connected to bufferReturn
      //!
      Fw::OutputBufferSendPort m_to_bufferReturn[1];

      //! To port connected to cmdIn
      //!
      Fw::OutputCmdPort m_to_cmdIn[1];

      //! To port connected to pingIn
      //!
      Svc::OutputPingPort m_to_pingIn[1];

    private:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From port connected to FileComplete
      //!
      Svc::InputSendFileCompletePort m_from_FileComplete[1];

      //! From port connected to bufferSendOut
      //!
      Fw::InputBufferSendPort m_from_bufferSendOut[1];

      //! From port connected to cmdRegOut
      //!
      Fw::InputCmdRegPort m_from_cmdRegOut[1];

      //! From port connected to cmdResponseOut
      //!
      Fw::InputCmdResponsePort m_from_cmdResponseOut[1];

      //! From port connected to eventOut
      //!
      Fw::InputLogPort m_from_eventOut[1];

      //! From port connected to pingOut
      //!
      Svc::InputPingPort m_from_pingOut[1];

#if FW_ENABLE_TEXT_LOGGING == 1
      //! From port connected to textEventOut
      //!
      Fw::InputLogTextPort m_from_textEventOut[1];
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

      //! Static function for port from_FileComplete
      //!
      static void from_FileComplete_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          const Svc::SendFileResponse &resp 
      );

      //! Static function for port from_bufferSendOut
      //!
      static void from_bufferSendOut_static(
          Fw::PassiveComponentBase *const callComp, /*!< The component instance*/
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

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

#if FW_ENABLE_TEXT_LOGGING == 1
      //! Static function for port from_textEventOut
      //!
      static void from_textEventOut_static(
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

} // end namespace Svc

#endif
