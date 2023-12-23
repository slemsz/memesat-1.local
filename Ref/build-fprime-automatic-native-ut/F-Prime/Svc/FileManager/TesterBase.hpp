// ======================================================================
// \title  FileManager/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for FileManager component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef FileManager_TESTER_BASE_HPP
#define FileManager_TESTER_BASE_HPP

#include <Svc/FileManager/FileManagerComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class FileManagerTesterBase
  //! \brief Auto-generated base class for FileManager component test harness
  //!
  class FileManagerTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object FileManagerTesterBase
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

      //! Construct object FileManagerTesterBase
      //!
      FileManagerTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FileManagerTesterBase
      //!
      virtual ~FileManagerTesterBase();

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

      //! Send a CreateDirectory command
      //!
      void sendCmd_CreateDirectory(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& dirName /*!< 
          The directory to create
          */
      );

      //! Send a MoveFile command
      //!
      void sendCmd_MoveFile(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& sourceFileName, /*!< 
          The source file name
          */
          const Fw::CmdStringArg& destFileName /*!< 
          The destination file name
          */
      );

      //! Send a RemoveDirectory command
      //!
      void sendCmd_RemoveDirectory(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& dirName /*!< 
          The directory to remove
          */
      );

      //! Send a RemoveFile command
      //!
      void sendCmd_RemoveFile(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& fileName, /*!< 
          The file to remove
          */
          bool ignoreErrors /*!< 
          Ignore non-existent files
          */
      );

      //! Send a ShellCommand command
      //!
      void sendCmd_ShellCommand(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& command, /*!< 
          The shell command string
          */
          const Fw::CmdStringArg& logFileName /*!< 
          The name of the log file
          */
      );

      //! Send a AppendFile command
      //!
      void sendCmd_AppendFile(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& source, /*!< 
          The name of the file to take content from
          */
          const Fw::CmdStringArg& target /*!< 
          The name of the file to append to
          */
      );

      //! Send a FileSize command
      //!
      void sendCmd_FileSize(
          const NATIVE_INT_TYPE instance, /*!< The instance number*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdStringArg& fileName /*!< 
          The file to get the size of
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
      // Event: DirectoryCreateError
      // ----------------------------------------------------------------------

      //! Handle event DirectoryCreateError
      //!
      virtual void logIn_WARNING_HI_DirectoryCreateError(
          const Fw::LogStringArg& dirName, /*!< The name of the directory*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event DirectoryCreateError
      //!
      typedef struct {
        Fw::LogStringArg dirName;
        U32 status;
      } EventEntry_DirectoryCreateError;

      //! The history of DirectoryCreateError events
      //!
      History<EventEntry_DirectoryCreateError>
        *eventHistory_DirectoryCreateError;

    protected:

      // ----------------------------------------------------------------------
      // Event: DirectoryRemoveError
      // ----------------------------------------------------------------------

      //! Handle event DirectoryRemoveError
      //!
      virtual void logIn_WARNING_HI_DirectoryRemoveError(
          const Fw::LogStringArg& dirName, /*!< The name of the directory*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event DirectoryRemoveError
      //!
      typedef struct {
        Fw::LogStringArg dirName;
        U32 status;
      } EventEntry_DirectoryRemoveError;

      //! The history of DirectoryRemoveError events
      //!
      History<EventEntry_DirectoryRemoveError>
        *eventHistory_DirectoryRemoveError;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileMoveError
      // ----------------------------------------------------------------------

      //! Handle event FileMoveError
      //!
      virtual void logIn_WARNING_HI_FileMoveError(
          const Fw::LogStringArg& sourceFileName, /*!< The name of the source file*/
          const Fw::LogStringArg& destFileName, /*!< The name of the destination file*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event FileMoveError
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
        U32 status;
      } EventEntry_FileMoveError;

      //! The history of FileMoveError events
      //!
      History<EventEntry_FileMoveError>
        *eventHistory_FileMoveError;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileRemoveError
      // ----------------------------------------------------------------------

      //! Handle event FileRemoveError
      //!
      virtual void logIn_WARNING_HI_FileRemoveError(
          const Fw::LogStringArg& fileName, /*!< The name of the file*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event FileRemoveError
      //!
      typedef struct {
        Fw::LogStringArg fileName;
        U32 status;
      } EventEntry_FileRemoveError;

      //! The history of FileRemoveError events
      //!
      History<EventEntry_FileRemoveError>
        *eventHistory_FileRemoveError;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandFailed
      // ----------------------------------------------------------------------

      //! Handle event ShellCommandFailed
      //!
      virtual void logIn_WARNING_HI_ShellCommandFailed(
          const Fw::LogStringArg& command, /*!< The command string*/
          U32 status /*!< The status code*/
      );

      //! A history entry for event ShellCommandFailed
      //!
      typedef struct {
        Fw::LogStringArg command;
        U32 status;
      } EventEntry_ShellCommandFailed;

      //! The history of ShellCommandFailed events
      //!
      History<EventEntry_ShellCommandFailed>
        *eventHistory_ShellCommandFailed;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileFailed
      // ----------------------------------------------------------------------

      //! Handle event AppendFileFailed
      //!
      virtual void logIn_WARNING_HI_AppendFileFailed(
          const Fw::LogStringArg& source, /*!< The name of the file being read from*/
          const Fw::LogStringArg& target, /*!< The name of the file to append to*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event AppendFileFailed
      //!
      typedef struct {
        Fw::LogStringArg source;
        Fw::LogStringArg target;
        U32 status;
      } EventEntry_AppendFileFailed;

      //! The history of AppendFileFailed events
      //!
      History<EventEntry_AppendFileFailed>
        *eventHistory_AppendFileFailed;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileSucceeded
      // ----------------------------------------------------------------------

      //! Handle event AppendFileSucceeded
      //!
      virtual void logIn_ACTIVITY_HI_AppendFileSucceeded(
          const Fw::LogStringArg& source, /*!< The name of the file being read from*/
          const Fw::LogStringArg& target /*!< The name of the file to append to*/
      );

      //! A history entry for event AppendFileSucceeded
      //!
      typedef struct {
        Fw::LogStringArg source;
        Fw::LogStringArg target;
      } EventEntry_AppendFileSucceeded;

      //! The history of AppendFileSucceeded events
      //!
      History<EventEntry_AppendFileSucceeded>
        *eventHistory_AppendFileSucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandSucceeded
      // ----------------------------------------------------------------------

      //! Handle event ShellCommandSucceeded
      //!
      virtual void logIn_ACTIVITY_HI_ShellCommandSucceeded(
          const Fw::LogStringArg& command /*!< The command string*/
      );

      //! A history entry for event ShellCommandSucceeded
      //!
      typedef struct {
        Fw::LogStringArg command;
      } EventEntry_ShellCommandSucceeded;

      //! The history of ShellCommandSucceeded events
      //!
      History<EventEntry_ShellCommandSucceeded>
        *eventHistory_ShellCommandSucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: CreateDirectorySucceeded
      // ----------------------------------------------------------------------

      //! Handle event CreateDirectorySucceeded
      //!
      virtual void logIn_ACTIVITY_HI_CreateDirectorySucceeded(
          const Fw::LogStringArg& dirName /*!< The name of the directory*/
      );

      //! A history entry for event CreateDirectorySucceeded
      //!
      typedef struct {
        Fw::LogStringArg dirName;
      } EventEntry_CreateDirectorySucceeded;

      //! The history of CreateDirectorySucceeded events
      //!
      History<EventEntry_CreateDirectorySucceeded>
        *eventHistory_CreateDirectorySucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveDirectorySucceeded
      // ----------------------------------------------------------------------

      //! Handle event RemoveDirectorySucceeded
      //!
      virtual void logIn_ACTIVITY_HI_RemoveDirectorySucceeded(
          const Fw::LogStringArg& dirName /*!< The name of the directory*/
      );

      //! A history entry for event RemoveDirectorySucceeded
      //!
      typedef struct {
        Fw::LogStringArg dirName;
      } EventEntry_RemoveDirectorySucceeded;

      //! The history of RemoveDirectorySucceeded events
      //!
      History<EventEntry_RemoveDirectorySucceeded>
        *eventHistory_RemoveDirectorySucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: MoveFileSucceeded
      // ----------------------------------------------------------------------

      //! Handle event MoveFileSucceeded
      //!
      virtual void logIn_ACTIVITY_HI_MoveFileSucceeded(
          const Fw::LogStringArg& sourceFileName, /*!< The name of the source file*/
          const Fw::LogStringArg& destFileName /*!< The name of the destination file*/
      );

      //! A history entry for event MoveFileSucceeded
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_MoveFileSucceeded;

      //! The history of MoveFileSucceeded events
      //!
      History<EventEntry_MoveFileSucceeded>
        *eventHistory_MoveFileSucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveFileSucceeded
      // ----------------------------------------------------------------------

      //! Handle event RemoveFileSucceeded
      //!
      virtual void logIn_ACTIVITY_HI_RemoveFileSucceeded(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event RemoveFileSucceeded
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_RemoveFileSucceeded;

      //! The history of RemoveFileSucceeded events
      //!
      History<EventEntry_RemoveFileSucceeded>
        *eventHistory_RemoveFileSucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileStarted
      // ----------------------------------------------------------------------

      //! Handle event AppendFileStarted
      //!
      virtual void logIn_ACTIVITY_HI_AppendFileStarted(
          const Fw::LogStringArg& source, /*!< The name of the file being read from*/
          const Fw::LogStringArg& target /*!< The name of the file to append to*/
      );

      //! A history entry for event AppendFileStarted
      //!
      typedef struct {
        Fw::LogStringArg source;
        Fw::LogStringArg target;
      } EventEntry_AppendFileStarted;

      //! The history of AppendFileStarted events
      //!
      History<EventEntry_AppendFileStarted>
        *eventHistory_AppendFileStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandStarted
      // ----------------------------------------------------------------------

      //! Handle event ShellCommandStarted
      //!
      virtual void logIn_ACTIVITY_HI_ShellCommandStarted(
          const Fw::LogStringArg& command /*!< The command string*/
      );

      //! A history entry for event ShellCommandStarted
      //!
      typedef struct {
        Fw::LogStringArg command;
      } EventEntry_ShellCommandStarted;

      //! The history of ShellCommandStarted events
      //!
      History<EventEntry_ShellCommandStarted>
        *eventHistory_ShellCommandStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: CreateDirectoryStarted
      // ----------------------------------------------------------------------

      //! Handle event CreateDirectoryStarted
      //!
      virtual void logIn_ACTIVITY_HI_CreateDirectoryStarted(
          const Fw::LogStringArg& dirName /*!< The name of the directory*/
      );

      //! A history entry for event CreateDirectoryStarted
      //!
      typedef struct {
        Fw::LogStringArg dirName;
      } EventEntry_CreateDirectoryStarted;

      //! The history of CreateDirectoryStarted events
      //!
      History<EventEntry_CreateDirectoryStarted>
        *eventHistory_CreateDirectoryStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveDirectoryStarted
      // ----------------------------------------------------------------------

      //! Handle event RemoveDirectoryStarted
      //!
      virtual void logIn_ACTIVITY_HI_RemoveDirectoryStarted(
          const Fw::LogStringArg& dirName /*!< The name of the directory*/
      );

      //! A history entry for event RemoveDirectoryStarted
      //!
      typedef struct {
        Fw::LogStringArg dirName;
      } EventEntry_RemoveDirectoryStarted;

      //! The history of RemoveDirectoryStarted events
      //!
      History<EventEntry_RemoveDirectoryStarted>
        *eventHistory_RemoveDirectoryStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: MoveFileStarted
      // ----------------------------------------------------------------------

      //! Handle event MoveFileStarted
      //!
      virtual void logIn_ACTIVITY_HI_MoveFileStarted(
          const Fw::LogStringArg& sourceFileName, /*!< The name of the source file*/
          const Fw::LogStringArg& destFileName /*!< The name of the destination file*/
      );

      //! A history entry for event MoveFileStarted
      //!
      typedef struct {
        Fw::LogStringArg sourceFileName;
        Fw::LogStringArg destFileName;
      } EventEntry_MoveFileStarted;

      //! The history of MoveFileStarted events
      //!
      History<EventEntry_MoveFileStarted>
        *eventHistory_MoveFileStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveFileStarted
      // ----------------------------------------------------------------------

      //! Handle event RemoveFileStarted
      //!
      virtual void logIn_ACTIVITY_HI_RemoveFileStarted(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event RemoveFileStarted
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_RemoveFileStarted;

      //! The history of RemoveFileStarted events
      //!
      History<EventEntry_RemoveFileStarted>
        *eventHistory_RemoveFileStarted;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeSucceeded
      // ----------------------------------------------------------------------

      //! Handle event FileSizeSucceeded
      //!
      virtual void logIn_ACTIVITY_HI_FileSizeSucceeded(
          const Fw::LogStringArg& fileName, /*!< The name of the file*/
          U64 size /*!< The size of the file in bytes*/
      );

      //! A history entry for event FileSizeSucceeded
      //!
      typedef struct {
        Fw::LogStringArg fileName;
        U64 size;
      } EventEntry_FileSizeSucceeded;

      //! The history of FileSizeSucceeded events
      //!
      History<EventEntry_FileSizeSucceeded>
        *eventHistory_FileSizeSucceeded;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeError
      // ----------------------------------------------------------------------

      //! Handle event FileSizeError
      //!
      virtual void logIn_WARNING_HI_FileSizeError(
          const Fw::LogStringArg& fileName, /*!< The name of the file*/
          U32 status /*!< The error status*/
      );

      //! A history entry for event FileSizeError
      //!
      typedef struct {
        Fw::LogStringArg fileName;
        U32 status;
      } EventEntry_FileSizeError;

      //! The history of FileSizeError events
      //!
      History<EventEntry_FileSizeError>
        *eventHistory_FileSizeError;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeStarted
      // ----------------------------------------------------------------------

      //! Handle event FileSizeStarted
      //!
      virtual void logIn_ACTIVITY_HI_FileSizeStarted(
          const Fw::LogStringArg& fileName /*!< The name of the file*/
      );

      //! A history entry for event FileSizeStarted
      //!
      typedef struct {
        Fw::LogStringArg fileName;
      } EventEntry_FileSizeStarted;

      //! The history of FileSizeStarted events
      //!
      History<EventEntry_FileSizeStarted>
        *eventHistory_FileSizeStarted;

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
      // Channel: CommandsExecuted
      // ----------------------------------------------------------------------

      //! Handle channel CommandsExecuted
      //!
      virtual void tlmInput_CommandsExecuted(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel CommandsExecuted
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_CommandsExecuted;

      //! The history of CommandsExecuted values
      //!
      History<TlmEntry_CommandsExecuted>
        *tlmHistory_CommandsExecuted;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Errors
      // ----------------------------------------------------------------------

      //! Handle channel Errors
      //!
      virtual void tlmInput_Errors(
          const Fw::Time& timeTag, /*!< The time*/
          const U32& val /*!< The channel value*/
      );

      //! A telemetry entry for channel Errors
      //!
      typedef struct {
        Fw::Time timeTag;
        U32 arg;
      } TlmEntry_Errors;

      //! The history of Errors values
      //!
      History<TlmEntry_Errors>
        *tlmHistory_Errors;

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
