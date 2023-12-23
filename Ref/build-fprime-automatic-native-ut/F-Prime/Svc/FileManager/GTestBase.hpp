// ======================================================================
// \title  FileManager/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for FileManager component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef FileManager_GTEST_BASE_HPP
#define FileManager_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for command history assertions
// ----------------------------------------------------------------------

#define ASSERT_CMD_RESPONSE_SIZE(size) \
  this->assertCmdResponse_size(__FILE__, __LINE__, size)

#define ASSERT_CMD_RESPONSE(index, opCode, cmdSeq, response) \
  this->assertCmdResponse(__FILE__, __LINE__, index, opCode, cmdSeq, response)

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CommandsExecuted_SIZE(size) \
  this->assertTlm_CommandsExecuted_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CommandsExecuted(index, value) \
  this->assertTlm_CommandsExecuted(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_Errors_SIZE(size) \
  this->assertTlm_Errors_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_Errors(index, value) \
  this->assertTlm_Errors(__FILE__, __LINE__, index, value)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_DirectoryCreateError_SIZE(size) \
  this->assertEvents_DirectoryCreateError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_DirectoryCreateError(index, _dirName, _status) \
  this->assertEvents_DirectoryCreateError(__FILE__, __LINE__, index, _dirName, _status)

#define ASSERT_EVENTS_DirectoryRemoveError_SIZE(size) \
  this->assertEvents_DirectoryRemoveError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_DirectoryRemoveError(index, _dirName, _status) \
  this->assertEvents_DirectoryRemoveError(__FILE__, __LINE__, index, _dirName, _status)

#define ASSERT_EVENTS_FileMoveError_SIZE(size) \
  this->assertEvents_FileMoveError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileMoveError(index, _sourceFileName, _destFileName, _status) \
  this->assertEvents_FileMoveError(__FILE__, __LINE__, index, _sourceFileName, _destFileName, _status)

#define ASSERT_EVENTS_FileRemoveError_SIZE(size) \
  this->assertEvents_FileRemoveError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileRemoveError(index, _fileName, _status) \
  this->assertEvents_FileRemoveError(__FILE__, __LINE__, index, _fileName, _status)

#define ASSERT_EVENTS_ShellCommandFailed_SIZE(size) \
  this->assertEvents_ShellCommandFailed_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ShellCommandFailed(index, _command, _status) \
  this->assertEvents_ShellCommandFailed(__FILE__, __LINE__, index, _command, _status)

#define ASSERT_EVENTS_AppendFileFailed_SIZE(size) \
  this->assertEvents_AppendFileFailed_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_AppendFileFailed(index, _source, _target, _status) \
  this->assertEvents_AppendFileFailed(__FILE__, __LINE__, index, _source, _target, _status)

#define ASSERT_EVENTS_AppendFileSucceeded_SIZE(size) \
  this->assertEvents_AppendFileSucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_AppendFileSucceeded(index, _source, _target) \
  this->assertEvents_AppendFileSucceeded(__FILE__, __LINE__, index, _source, _target)

#define ASSERT_EVENTS_ShellCommandSucceeded_SIZE(size) \
  this->assertEvents_ShellCommandSucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ShellCommandSucceeded(index, _command) \
  this->assertEvents_ShellCommandSucceeded(__FILE__, __LINE__, index, _command)

#define ASSERT_EVENTS_CreateDirectorySucceeded_SIZE(size) \
  this->assertEvents_CreateDirectorySucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_CreateDirectorySucceeded(index, _dirName) \
  this->assertEvents_CreateDirectorySucceeded(__FILE__, __LINE__, index, _dirName)

#define ASSERT_EVENTS_RemoveDirectorySucceeded_SIZE(size) \
  this->assertEvents_RemoveDirectorySucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_RemoveDirectorySucceeded(index, _dirName) \
  this->assertEvents_RemoveDirectorySucceeded(__FILE__, __LINE__, index, _dirName)

#define ASSERT_EVENTS_MoveFileSucceeded_SIZE(size) \
  this->assertEvents_MoveFileSucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_MoveFileSucceeded(index, _sourceFileName, _destFileName) \
  this->assertEvents_MoveFileSucceeded(__FILE__, __LINE__, index, _sourceFileName, _destFileName)

#define ASSERT_EVENTS_RemoveFileSucceeded_SIZE(size) \
  this->assertEvents_RemoveFileSucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_RemoveFileSucceeded(index, _fileName) \
  this->assertEvents_RemoveFileSucceeded(__FILE__, __LINE__, index, _fileName)

#define ASSERT_EVENTS_AppendFileStarted_SIZE(size) \
  this->assertEvents_AppendFileStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_AppendFileStarted(index, _source, _target) \
  this->assertEvents_AppendFileStarted(__FILE__, __LINE__, index, _source, _target)

#define ASSERT_EVENTS_ShellCommandStarted_SIZE(size) \
  this->assertEvents_ShellCommandStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ShellCommandStarted(index, _command) \
  this->assertEvents_ShellCommandStarted(__FILE__, __LINE__, index, _command)

#define ASSERT_EVENTS_CreateDirectoryStarted_SIZE(size) \
  this->assertEvents_CreateDirectoryStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_CreateDirectoryStarted(index, _dirName) \
  this->assertEvents_CreateDirectoryStarted(__FILE__, __LINE__, index, _dirName)

#define ASSERT_EVENTS_RemoveDirectoryStarted_SIZE(size) \
  this->assertEvents_RemoveDirectoryStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_RemoveDirectoryStarted(index, _dirName) \
  this->assertEvents_RemoveDirectoryStarted(__FILE__, __LINE__, index, _dirName)

#define ASSERT_EVENTS_MoveFileStarted_SIZE(size) \
  this->assertEvents_MoveFileStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_MoveFileStarted(index, _sourceFileName, _destFileName) \
  this->assertEvents_MoveFileStarted(__FILE__, __LINE__, index, _sourceFileName, _destFileName)

#define ASSERT_EVENTS_RemoveFileStarted_SIZE(size) \
  this->assertEvents_RemoveFileStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_RemoveFileStarted(index, _fileName) \
  this->assertEvents_RemoveFileStarted(__FILE__, __LINE__, index, _fileName)

#define ASSERT_EVENTS_FileSizeSucceeded_SIZE(size) \
  this->assertEvents_FileSizeSucceeded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileSizeSucceeded(index, _fileName, _size) \
  this->assertEvents_FileSizeSucceeded(__FILE__, __LINE__, index, _fileName, _size)

#define ASSERT_EVENTS_FileSizeError_SIZE(size) \
  this->assertEvents_FileSizeError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileSizeError(index, _fileName, _status) \
  this->assertEvents_FileSizeError(__FILE__, __LINE__, index, _fileName, _status)

#define ASSERT_EVENTS_FileSizeStarted_SIZE(size) \
  this->assertEvents_FileSizeStarted_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileSizeStarted(index, _fileName) \
  this->assertEvents_FileSizeStarted(__FILE__, __LINE__, index, _fileName)

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_pingOut_SIZE(size) \
  this->assert_from_pingOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_pingOut(index, _key) \
  { \
    ASSERT_GT(this->fromPortHistory_pingOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_pingOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_pingOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_pingOut& _e = \
      this->fromPortHistory_pingOut->at(index); \
    ASSERT_EQ(_key, _e.key) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument key at index " \
    << index \
    << " in history of from_pingOut\n" \
    << "  Expected: " << _key << "\n" \
    << "  Actual:   " << _e.key << "\n"; \
  }

namespace Svc {

  //! \class FileManagerGTestBase
  //! \brief Auto-generated base class for FileManager component Google Test harness
  //!
  class FileManagerGTestBase :
    public FileManagerTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object FileManagerGTestBase
      //!
      FileManagerGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FileManagerGTestBase
      //!
      virtual ~FileManagerGTestBase(void);

    protected:

      // ----------------------------------------------------------------------
      // Commands
      // ----------------------------------------------------------------------

      //! Assert size of command response history
      //!
      void assertCmdResponse_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      //! Assert command response in history at index
      //!
      void assertCmdResponse(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdResponse response /*!< The command response*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Telemetry
      // ----------------------------------------------------------------------

      //! Assert size of telemetry history
      //!
      void assertTlm_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CommandsExecuted
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CommandsExecuted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CommandsExecuted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Errors
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_Errors_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_Errors(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Events
      // ----------------------------------------------------------------------

      void assertEvents_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: DirectoryCreateError
      // ----------------------------------------------------------------------

      void assertEvents_DirectoryCreateError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_DirectoryCreateError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName, /*!< The name of the directory*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: DirectoryRemoveError
      // ----------------------------------------------------------------------

      void assertEvents_DirectoryRemoveError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_DirectoryRemoveError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName, /*!< The name of the directory*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileMoveError
      // ----------------------------------------------------------------------

      void assertEvents_FileMoveError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileMoveError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const sourceFileName, /*!< The name of the source file*/
          const char *const destFileName, /*!< The name of the destination file*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileRemoveError
      // ----------------------------------------------------------------------

      void assertEvents_FileRemoveError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileRemoveError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName, /*!< The name of the file*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandFailed
      // ----------------------------------------------------------------------

      void assertEvents_ShellCommandFailed_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ShellCommandFailed(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const command, /*!< The command string*/
          const U32 status /*!< The status code*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileFailed
      // ----------------------------------------------------------------------

      void assertEvents_AppendFileFailed_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_AppendFileFailed(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const source, /*!< The name of the file being read from*/
          const char *const target, /*!< The name of the file to append to*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileSucceeded
      // ----------------------------------------------------------------------

      void assertEvents_AppendFileSucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_AppendFileSucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const source, /*!< The name of the file being read from*/
          const char *const target /*!< The name of the file to append to*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandSucceeded
      // ----------------------------------------------------------------------

      void assertEvents_ShellCommandSucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ShellCommandSucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const command /*!< The command string*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: CreateDirectorySucceeded
      // ----------------------------------------------------------------------

      void assertEvents_CreateDirectorySucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_CreateDirectorySucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName /*!< The name of the directory*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveDirectorySucceeded
      // ----------------------------------------------------------------------

      void assertEvents_RemoveDirectorySucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_RemoveDirectorySucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName /*!< The name of the directory*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: MoveFileSucceeded
      // ----------------------------------------------------------------------

      void assertEvents_MoveFileSucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_MoveFileSucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const sourceFileName, /*!< The name of the source file*/
          const char *const destFileName /*!< The name of the destination file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveFileSucceeded
      // ----------------------------------------------------------------------

      void assertEvents_RemoveFileSucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_RemoveFileSucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: AppendFileStarted
      // ----------------------------------------------------------------------

      void assertEvents_AppendFileStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_AppendFileStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const source, /*!< The name of the file being read from*/
          const char *const target /*!< The name of the file to append to*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ShellCommandStarted
      // ----------------------------------------------------------------------

      void assertEvents_ShellCommandStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ShellCommandStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const command /*!< The command string*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: CreateDirectoryStarted
      // ----------------------------------------------------------------------

      void assertEvents_CreateDirectoryStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_CreateDirectoryStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName /*!< The name of the directory*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveDirectoryStarted
      // ----------------------------------------------------------------------

      void assertEvents_RemoveDirectoryStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_RemoveDirectoryStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const dirName /*!< The name of the directory*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: MoveFileStarted
      // ----------------------------------------------------------------------

      void assertEvents_MoveFileStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_MoveFileStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const sourceFileName, /*!< The name of the source file*/
          const char *const destFileName /*!< The name of the destination file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: RemoveFileStarted
      // ----------------------------------------------------------------------

      void assertEvents_RemoveFileStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_RemoveFileStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeSucceeded
      // ----------------------------------------------------------------------

      void assertEvents_FileSizeSucceeded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileSizeSucceeded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName, /*!< The name of the file*/
          const U64 size /*!< The size of the file in bytes*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeError
      // ----------------------------------------------------------------------

      void assertEvents_FileSizeError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileSizeError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName, /*!< The name of the file*/
          const U32 status /*!< The error status*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileSizeStarted
      // ----------------------------------------------------------------------

      void assertEvents_FileSizeStarted_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileSizeStarted(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      void assertFromPortHistory_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: pingOut
      // ----------------------------------------------------------------------

      void assert_from_pingOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Svc

#endif
