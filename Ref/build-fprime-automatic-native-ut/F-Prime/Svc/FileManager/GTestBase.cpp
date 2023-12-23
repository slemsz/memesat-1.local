// ======================================================================
// \title  FileManager/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for FileManager component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  FileManagerGTestBase ::
    FileManagerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        FileManagerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  FileManagerGTestBase ::
    ~FileManagerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertCmdResponse_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->cmdResponseHistory->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of command response history\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->cmdResponseHistory->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertCmdResponse(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse response
    )
    const
  {
    ASSERT_LT(__index, this->cmdResponseHistory->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into command response history\n"
      << "  Expected: Less than size of command response history ("
      << this->cmdResponseHistory->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const CmdResponse& e = this->cmdResponseHistory->at(__index);
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Opcode at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
    ASSERT_EQ(cmdSeq, e.cmdSeq)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Command sequence number at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << cmdSeq << "\n"
      << "  Actual:   " << e.cmdSeq << "\n";
    ASSERT_EQ(response, e.response)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Command response at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << response << "\n"
      << "  Actual:   " << e.response << "\n";
  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertTlm_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->tlmSize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all telemetry histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CommandsExecuted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertTlm_CommandsExecuted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CommandsExecuted->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CommandsExecuted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CommandsExecuted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertTlm_CommandsExecuted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CommandsExecuted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CommandsExecuted\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CommandsExecuted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CommandsExecuted& e =
      this->tlmHistory_CommandsExecuted->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CommandsExecuted\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: Errors
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertTlm_Errors_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_Errors->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel Errors\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_Errors->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertTlm_Errors(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_Errors->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel Errors\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_Errors->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_Errors& e =
      this->tlmHistory_Errors->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel Errors\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all event histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DirectoryCreateError
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_DirectoryCreateError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DirectoryCreateError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DirectoryCreateError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DirectoryCreateError->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_DirectoryCreateError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_DirectoryCreateError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DirectoryCreateError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DirectoryCreateError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DirectoryCreateError& e =
      this->eventHistory_DirectoryCreateError->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event DirectoryCreateError\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event DirectoryCreateError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DirectoryRemoveError
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_DirectoryRemoveError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DirectoryRemoveError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DirectoryRemoveError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DirectoryRemoveError->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_DirectoryRemoveError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_DirectoryRemoveError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DirectoryRemoveError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DirectoryRemoveError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DirectoryRemoveError& e =
      this->eventHistory_DirectoryRemoveError->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event DirectoryRemoveError\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event DirectoryRemoveError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileMoveError
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_FileMoveError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileMoveError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileMoveError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileMoveError->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_FileMoveError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_FileMoveError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileMoveError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileMoveError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileMoveError& e =
      this->eventHistory_FileMoveError->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event FileMoveError\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event FileMoveError\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event FileMoveError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileRemoveError
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_FileRemoveError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileRemoveError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileRemoveError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileRemoveError->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_FileRemoveError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_FileRemoveError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileRemoveError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileRemoveError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileRemoveError& e =
      this->eventHistory_FileRemoveError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileRemoveError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event FileRemoveError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandFailed
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_ShellCommandFailed_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ShellCommandFailed->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ShellCommandFailed\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ShellCommandFailed->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_ShellCommandFailed(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const command,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_ShellCommandFailed->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ShellCommandFailed\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ShellCommandFailed->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ShellCommandFailed& e =
      this->eventHistory_ShellCommandFailed->at(__index);
    ASSERT_STREQ(command, e.command.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument command at index "
      << __index
      << " in history of event ShellCommandFailed\n"
      << "  Expected: " << command << "\n"
      << "  Actual:   " << e.command.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event ShellCommandFailed\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileFailed
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_AppendFileFailed_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AppendFileFailed->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AppendFileFailed\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AppendFileFailed->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_AppendFileFailed(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const source,
        const char *const target,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_AppendFileFailed->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AppendFileFailed\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AppendFileFailed->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AppendFileFailed& e =
      this->eventHistory_AppendFileFailed->at(__index);
    ASSERT_STREQ(source, e.source.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument source at index "
      << __index
      << " in history of event AppendFileFailed\n"
      << "  Expected: " << source << "\n"
      << "  Actual:   " << e.source.toChar() << "\n";
    ASSERT_STREQ(target, e.target.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument target at index "
      << __index
      << " in history of event AppendFileFailed\n"
      << "  Expected: " << target << "\n"
      << "  Actual:   " << e.target.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event AppendFileFailed\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_AppendFileSucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AppendFileSucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AppendFileSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AppendFileSucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_AppendFileSucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const source,
        const char *const target
    ) const
  {
    ASSERT_GT(this->eventHistory_AppendFileSucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AppendFileSucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AppendFileSucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AppendFileSucceeded& e =
      this->eventHistory_AppendFileSucceeded->at(__index);
    ASSERT_STREQ(source, e.source.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument source at index "
      << __index
      << " in history of event AppendFileSucceeded\n"
      << "  Expected: " << source << "\n"
      << "  Actual:   " << e.source.toChar() << "\n";
    ASSERT_STREQ(target, e.target.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument target at index "
      << __index
      << " in history of event AppendFileSucceeded\n"
      << "  Expected: " << target << "\n"
      << "  Actual:   " << e.target.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandSucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_ShellCommandSucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ShellCommandSucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ShellCommandSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ShellCommandSucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_ShellCommandSucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const command
    ) const
  {
    ASSERT_GT(this->eventHistory_ShellCommandSucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ShellCommandSucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ShellCommandSucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ShellCommandSucceeded& e =
      this->eventHistory_ShellCommandSucceeded->at(__index);
    ASSERT_STREQ(command, e.command.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument command at index "
      << __index
      << " in history of event ShellCommandSucceeded\n"
      << "  Expected: " << command << "\n"
      << "  Actual:   " << e.command.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CreateDirectorySucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_CreateDirectorySucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CreateDirectorySucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CreateDirectorySucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CreateDirectorySucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_CreateDirectorySucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName
    ) const
  {
    ASSERT_GT(this->eventHistory_CreateDirectorySucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CreateDirectorySucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CreateDirectorySucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CreateDirectorySucceeded& e =
      this->eventHistory_CreateDirectorySucceeded->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event CreateDirectorySucceeded\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: RemoveDirectorySucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_RemoveDirectorySucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_RemoveDirectorySucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RemoveDirectorySucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_RemoveDirectorySucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_RemoveDirectorySucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName
    ) const
  {
    ASSERT_GT(this->eventHistory_RemoveDirectorySucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event RemoveDirectorySucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_RemoveDirectorySucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_RemoveDirectorySucceeded& e =
      this->eventHistory_RemoveDirectorySucceeded->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event RemoveDirectorySucceeded\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: MoveFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_MoveFileSucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_MoveFileSucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event MoveFileSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_MoveFileSucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_MoveFileSucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_MoveFileSucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event MoveFileSucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_MoveFileSucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_MoveFileSucceeded& e =
      this->eventHistory_MoveFileSucceeded->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event MoveFileSucceeded\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event MoveFileSucceeded\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: RemoveFileSucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_RemoveFileSucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_RemoveFileSucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RemoveFileSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_RemoveFileSucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_RemoveFileSucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_RemoveFileSucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event RemoveFileSucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_RemoveFileSucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_RemoveFileSucceeded& e =
      this->eventHistory_RemoveFileSucceeded->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event RemoveFileSucceeded\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AppendFileStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_AppendFileStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AppendFileStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AppendFileStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AppendFileStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_AppendFileStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const source,
        const char *const target
    ) const
  {
    ASSERT_GT(this->eventHistory_AppendFileStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AppendFileStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AppendFileStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AppendFileStarted& e =
      this->eventHistory_AppendFileStarted->at(__index);
    ASSERT_STREQ(source, e.source.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument source at index "
      << __index
      << " in history of event AppendFileStarted\n"
      << "  Expected: " << source << "\n"
      << "  Actual:   " << e.source.toChar() << "\n";
    ASSERT_STREQ(target, e.target.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument target at index "
      << __index
      << " in history of event AppendFileStarted\n"
      << "  Expected: " << target << "\n"
      << "  Actual:   " << e.target.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ShellCommandStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_ShellCommandStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ShellCommandStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ShellCommandStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ShellCommandStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_ShellCommandStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const command
    ) const
  {
    ASSERT_GT(this->eventHistory_ShellCommandStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ShellCommandStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ShellCommandStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ShellCommandStarted& e =
      this->eventHistory_ShellCommandStarted->at(__index);
    ASSERT_STREQ(command, e.command.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument command at index "
      << __index
      << " in history of event ShellCommandStarted\n"
      << "  Expected: " << command << "\n"
      << "  Actual:   " << e.command.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CreateDirectoryStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_CreateDirectoryStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CreateDirectoryStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CreateDirectoryStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CreateDirectoryStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_CreateDirectoryStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName
    ) const
  {
    ASSERT_GT(this->eventHistory_CreateDirectoryStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CreateDirectoryStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CreateDirectoryStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CreateDirectoryStarted& e =
      this->eventHistory_CreateDirectoryStarted->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event CreateDirectoryStarted\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: RemoveDirectoryStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_RemoveDirectoryStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_RemoveDirectoryStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RemoveDirectoryStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_RemoveDirectoryStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_RemoveDirectoryStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const dirName
    ) const
  {
    ASSERT_GT(this->eventHistory_RemoveDirectoryStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event RemoveDirectoryStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_RemoveDirectoryStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_RemoveDirectoryStarted& e =
      this->eventHistory_RemoveDirectoryStarted->at(__index);
    ASSERT_STREQ(dirName, e.dirName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument dirName at index "
      << __index
      << " in history of event RemoveDirectoryStarted\n"
      << "  Expected: " << dirName << "\n"
      << "  Actual:   " << e.dirName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: MoveFileStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_MoveFileStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_MoveFileStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event MoveFileStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_MoveFileStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_MoveFileStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_MoveFileStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event MoveFileStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_MoveFileStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_MoveFileStarted& e =
      this->eventHistory_MoveFileStarted->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event MoveFileStarted\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event MoveFileStarted\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: RemoveFileStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_RemoveFileStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_RemoveFileStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RemoveFileStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_RemoveFileStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_RemoveFileStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_RemoveFileStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event RemoveFileStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_RemoveFileStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_RemoveFileStarted& e =
      this->eventHistory_RemoveFileStarted->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event RemoveFileStarted\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeSucceeded
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_FileSizeSucceeded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileSizeSucceeded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileSizeSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileSizeSucceeded->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_FileSizeSucceeded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U64 size
    ) const
  {
    ASSERT_GT(this->eventHistory_FileSizeSucceeded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileSizeSucceeded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileSizeSucceeded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileSizeSucceeded& e =
      this->eventHistory_FileSizeSucceeded->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileSizeSucceeded\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(size, e.size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument size at index "
      << __index
      << " in history of event FileSizeSucceeded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << e.size << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeError
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_FileSizeError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileSizeError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileSizeError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileSizeError->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_FileSizeError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_FileSizeError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileSizeError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileSizeError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileSizeError& e =
      this->eventHistory_FileSizeError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileSizeError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event FileSizeError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileSizeStarted
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertEvents_FileSizeStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileSizeStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileSizeStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileSizeStarted->size() << "\n";
  }

  void FileManagerGTestBase ::
    assertEvents_FileSizeStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_FileSizeStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileSizeStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileSizeStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileSizeStarted& e =
      this->eventHistory_FileSizeStarted->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileSizeStarted\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assertFromPortHistory_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistorySize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all from port histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistorySize << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void FileManagerGTestBase ::
    assert_from_pingOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_pingOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_pingOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_pingOut->size() << "\n";
  }

} // end namespace Svc
