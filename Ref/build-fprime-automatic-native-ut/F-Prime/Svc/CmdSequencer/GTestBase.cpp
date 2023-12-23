// ======================================================================
// \title  CmdSequencer/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for CmdSequencer component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  CmdSequencerGTestBase ::
    CmdSequencerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        CmdSequencerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  CmdSequencerGTestBase ::
    ~CmdSequencerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
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

  void CmdSequencerGTestBase ::
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

  void CmdSequencerGTestBase ::
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
  // Channel: CS_LoadCommands
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertTlm_CS_LoadCommands_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CS_LoadCommands->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CS_LoadCommands\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CS_LoadCommands->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertTlm_CS_LoadCommands(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CS_LoadCommands->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CS_LoadCommands\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CS_LoadCommands->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CS_LoadCommands& e =
      this->tlmHistory_CS_LoadCommands->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CS_LoadCommands\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CS_CancelCommands
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertTlm_CS_CancelCommands_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CS_CancelCommands->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CS_CancelCommands\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CS_CancelCommands->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertTlm_CS_CancelCommands(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CS_CancelCommands->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CS_CancelCommands\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CS_CancelCommands->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CS_CancelCommands& e =
      this->tlmHistory_CS_CancelCommands->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CS_CancelCommands\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CS_Errors
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertTlm_CS_Errors_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CS_Errors->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CS_Errors\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CS_Errors->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertTlm_CS_Errors(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CS_Errors->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CS_Errors\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CS_Errors->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CS_Errors& e =
      this->tlmHistory_CS_Errors->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CS_Errors\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CS_CommandsExecuted
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertTlm_CS_CommandsExecuted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CS_CommandsExecuted->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CS_CommandsExecuted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CS_CommandsExecuted->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertTlm_CS_CommandsExecuted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CS_CommandsExecuted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CS_CommandsExecuted\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CS_CommandsExecuted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CS_CommandsExecuted& e =
      this->tlmHistory_CS_CommandsExecuted->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CS_CommandsExecuted\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CS_SequencesCompleted
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertTlm_CS_SequencesCompleted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CS_SequencesCompleted->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CS_SequencesCompleted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CS_SequencesCompleted->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertTlm_CS_SequencesCompleted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CS_SequencesCompleted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CS_SequencesCompleted\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CS_SequencesCompleted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CS_SequencesCompleted& e =
      this->tlmHistory_CS_SequencesCompleted->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CS_SequencesCompleted\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
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
  // Event: CS_SequenceLoaded
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceLoaded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_SequenceLoaded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_SequenceLoaded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_SequenceLoaded->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceLoaded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_SequenceLoaded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_SequenceLoaded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_SequenceLoaded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_SequenceLoaded& e =
      this->eventHistory_CS_SequenceLoaded->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_SequenceLoaded\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_SequenceCanceled
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceCanceled_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_SequenceCanceled->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_SequenceCanceled\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_SequenceCanceled->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceCanceled(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_SequenceCanceled->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_SequenceCanceled\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_SequenceCanceled->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_SequenceCanceled& e =
      this->eventHistory_CS_SequenceCanceled->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_SequenceCanceled\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_FileReadError
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileReadError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_FileReadError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_FileReadError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_FileReadError->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileReadError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_FileReadError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_FileReadError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_FileReadError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_FileReadError& e =
      this->eventHistory_CS_FileReadError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_FileReadError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_FileInvalid
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileInvalid_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_FileInvalid->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_FileInvalid\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_FileInvalid->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileInvalid(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const Svc::CmdSequencer_FileReadStage stage,
        const I32 error
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_FileInvalid->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_FileInvalid\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_FileInvalid->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_FileInvalid& e =
      this->eventHistory_CS_FileInvalid->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_FileInvalid\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(stage, e.stage)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument stage at index "
      << __index
      << " in history of event CS_FileInvalid\n"
      << "  Expected: " << stage << "\n"
      << "  Actual:   " << e.stage << "\n";
    ASSERT_EQ(error, e.error)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument error at index "
      << __index
      << " in history of event CS_FileInvalid\n"
      << "  Expected: " << error << "\n"
      << "  Actual:   " << e.error << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_RecordInvalid
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_RecordInvalid_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_RecordInvalid->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_RecordInvalid\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_RecordInvalid->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_RecordInvalid(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 recordNumber,
        const I32 error
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_RecordInvalid->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_RecordInvalid\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_RecordInvalid->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_RecordInvalid& e =
      this->eventHistory_CS_RecordInvalid->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_RecordInvalid\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(recordNumber, e.recordNumber)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument recordNumber at index "
      << __index
      << " in history of event CS_RecordInvalid\n"
      << "  Expected: " << recordNumber << "\n"
      << "  Actual:   " << e.recordNumber << "\n";
    ASSERT_EQ(error, e.error)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument error at index "
      << __index
      << " in history of event CS_RecordInvalid\n"
      << "  Expected: " << error << "\n"
      << "  Actual:   " << e.error << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_FileSizeError
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileSizeError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_FileSizeError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_FileSizeError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_FileSizeError->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileSizeError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 size
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_FileSizeError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_FileSizeError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_FileSizeError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_FileSizeError& e =
      this->eventHistory_CS_FileSizeError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_FileSizeError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(size, e.size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument size at index "
      << __index
      << " in history of event CS_FileSizeError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << e.size << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_FileNotFound
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileNotFound_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_FileNotFound->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_FileNotFound\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_FileNotFound->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileNotFound(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_FileNotFound->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_FileNotFound\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_FileNotFound->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_FileNotFound& e =
      this->eventHistory_CS_FileNotFound->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_FileNotFound\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_FileCrcFailure
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileCrcFailure_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_FileCrcFailure->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_FileCrcFailure\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_FileCrcFailure->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_FileCrcFailure(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 storedCRC,
        const U32 computedCRC
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_FileCrcFailure->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_FileCrcFailure\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_FileCrcFailure->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_FileCrcFailure& e =
      this->eventHistory_CS_FileCrcFailure->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_FileCrcFailure\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(storedCRC, e.storedCRC)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument storedCRC at index "
      << __index
      << " in history of event CS_FileCrcFailure\n"
      << "  Expected: " << storedCRC << "\n"
      << "  Actual:   " << e.storedCRC << "\n";
    ASSERT_EQ(computedCRC, e.computedCRC)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument computedCRC at index "
      << __index
      << " in history of event CS_FileCrcFailure\n"
      << "  Expected: " << computedCRC << "\n"
      << "  Actual:   " << e.computedCRC << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_CommandComplete
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_CommandComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_CommandComplete->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_CommandComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_CommandComplete->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_CommandComplete(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 recordNumber,
        const U32 opCode
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_CommandComplete->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_CommandComplete\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_CommandComplete->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_CommandComplete& e =
      this->eventHistory_CS_CommandComplete->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_CommandComplete\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(recordNumber, e.recordNumber)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument recordNumber at index "
      << __index
      << " in history of event CS_CommandComplete\n"
      << "  Expected: " << recordNumber << "\n"
      << "  Actual:   " << e.recordNumber << "\n";
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument opCode at index "
      << __index
      << " in history of event CS_CommandComplete\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_SequenceComplete
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_SequenceComplete->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_SequenceComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_SequenceComplete->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceComplete(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_SequenceComplete->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_SequenceComplete\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_SequenceComplete->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_SequenceComplete& e =
      this->eventHistory_CS_SequenceComplete->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_SequenceComplete\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_CommandError
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_CommandError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_CommandError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_CommandError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_CommandError->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_CommandError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 recordNumber,
        const U32 opCode,
        const U32 errorStatus
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_CommandError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_CommandError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_CommandError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_CommandError& e =
      this->eventHistory_CS_CommandError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_CommandError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(recordNumber, e.recordNumber)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument recordNumber at index "
      << __index
      << " in history of event CS_CommandError\n"
      << "  Expected: " << recordNumber << "\n"
      << "  Actual:   " << e.recordNumber << "\n";
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument opCode at index "
      << __index
      << " in history of event CS_CommandError\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
    ASSERT_EQ(errorStatus, e.errorStatus)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument errorStatus at index "
      << __index
      << " in history of event CS_CommandError\n"
      << "  Expected: " << errorStatus << "\n"
      << "  Actual:   " << e.errorStatus << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_InvalidMode
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_InvalidMode_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_CS_InvalidMode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_InvalidMode\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_CS_InvalidMode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_RecordMismatch
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_RecordMismatch_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_RecordMismatch->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_RecordMismatch\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_RecordMismatch->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_RecordMismatch(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 header_records,
        const U32 extra_bytes
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_RecordMismatch->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_RecordMismatch\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_RecordMismatch->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_RecordMismatch& e =
      this->eventHistory_CS_RecordMismatch->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_RecordMismatch\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(header_records, e.header_records)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument header_records at index "
      << __index
      << " in history of event CS_RecordMismatch\n"
      << "  Expected: " << header_records << "\n"
      << "  Actual:   " << e.header_records << "\n";
    ASSERT_EQ(extra_bytes, e.extra_bytes)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument extra_bytes at index "
      << __index
      << " in history of event CS_RecordMismatch\n"
      << "  Expected: " << extra_bytes << "\n"
      << "  Actual:   " << e.extra_bytes << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_TimeBaseMismatch
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_TimeBaseMismatch_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_TimeBaseMismatch->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_TimeBaseMismatch\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_TimeBaseMismatch->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_TimeBaseMismatch(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U16 time_base,
        const U16 seq_time_base
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_TimeBaseMismatch->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_TimeBaseMismatch\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_TimeBaseMismatch->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_TimeBaseMismatch& e =
      this->eventHistory_CS_TimeBaseMismatch->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_TimeBaseMismatch\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(time_base, e.time_base)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument time_base at index "
      << __index
      << " in history of event CS_TimeBaseMismatch\n"
      << "  Expected: " << time_base << "\n"
      << "  Actual:   " << e.time_base << "\n";
    ASSERT_EQ(seq_time_base, e.seq_time_base)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument seq_time_base at index "
      << __index
      << " in history of event CS_TimeBaseMismatch\n"
      << "  Expected: " << seq_time_base << "\n"
      << "  Actual:   " << e.seq_time_base << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_TimeContextMismatch
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_TimeContextMismatch_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_TimeContextMismatch->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_TimeContextMismatch\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_TimeContextMismatch->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_TimeContextMismatch(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U8 currTimeBase,
        const U8 seqTimeBase
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_TimeContextMismatch->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_TimeContextMismatch\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_TimeContextMismatch->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_TimeContextMismatch& e =
      this->eventHistory_CS_TimeContextMismatch->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event CS_TimeContextMismatch\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(currTimeBase, e.currTimeBase)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument currTimeBase at index "
      << __index
      << " in history of event CS_TimeContextMismatch\n"
      << "  Expected: " << currTimeBase << "\n"
      << "  Actual:   " << e.currTimeBase << "\n";
    ASSERT_EQ(seqTimeBase, e.seqTimeBase)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument seqTimeBase at index "
      << __index
      << " in history of event CS_TimeContextMismatch\n"
      << "  Expected: " << seqTimeBase << "\n"
      << "  Actual:   " << e.seqTimeBase << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_PortSequenceStarted
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_PortSequenceStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_PortSequenceStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_PortSequenceStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_PortSequenceStarted->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_PortSequenceStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_PortSequenceStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_PortSequenceStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_PortSequenceStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_PortSequenceStarted& e =
      this->eventHistory_CS_PortSequenceStarted->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_PortSequenceStarted\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_UnexpectedCompletion
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_UnexpectedCompletion_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_UnexpectedCompletion->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_UnexpectedCompletion\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_UnexpectedCompletion->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_UnexpectedCompletion(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 opcode
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_UnexpectedCompletion->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_UnexpectedCompletion\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_UnexpectedCompletion->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_UnexpectedCompletion& e =
      this->eventHistory_CS_UnexpectedCompletion->at(__index);
    ASSERT_EQ(opcode, e.opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument opcode at index "
      << __index
      << " in history of event CS_UnexpectedCompletion\n"
      << "  Expected: " << opcode << "\n"
      << "  Actual:   " << e.opcode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_ModeSwitched
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_ModeSwitched_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_ModeSwitched->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_ModeSwitched\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_ModeSwitched->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_ModeSwitched(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Svc::CmdSequencer_SeqMode mode
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_ModeSwitched->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_ModeSwitched\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_ModeSwitched->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_ModeSwitched& e =
      this->eventHistory_CS_ModeSwitched->at(__index);
    ASSERT_EQ(mode, e.mode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument mode at index "
      << __index
      << " in history of event CS_ModeSwitched\n"
      << "  Expected: " << mode << "\n"
      << "  Actual:   " << e.mode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_NoSequenceActive
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_NoSequenceActive_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_CS_NoSequenceActive)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_NoSequenceActive\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_CS_NoSequenceActive << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_SequenceValid
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceValid_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_SequenceValid->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_SequenceValid\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_SequenceValid->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceValid(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_SequenceValid->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_SequenceValid\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_SequenceValid->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_SequenceValid& e =
      this->eventHistory_CS_SequenceValid->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_SequenceValid\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_SequenceTimeout
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceTimeout_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_SequenceTimeout->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_SequenceTimeout\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_SequenceTimeout->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_SequenceTimeout(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename,
        const U32 command
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_SequenceTimeout->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_SequenceTimeout\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_SequenceTimeout->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_SequenceTimeout& e =
      this->eventHistory_CS_SequenceTimeout->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_SequenceTimeout\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
    ASSERT_EQ(command, e.command)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument command at index "
      << __index
      << " in history of event CS_SequenceTimeout\n"
      << "  Expected: " << command << "\n"
      << "  Actual:   " << e.command << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_CmdStepped
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_CmdStepped_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_CmdStepped->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_CmdStepped\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_CmdStepped->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_CmdStepped(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename,
        const U32 command
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_CmdStepped->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_CmdStepped\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_CmdStepped->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_CmdStepped& e =
      this->eventHistory_CS_CmdStepped->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_CmdStepped\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
    ASSERT_EQ(command, e.command)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument command at index "
      << __index
      << " in history of event CS_CmdStepped\n"
      << "  Expected: " << command << "\n"
      << "  Actual:   " << e.command << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_CmdStarted
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_CmdStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_CmdStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_CmdStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_CmdStarted->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_CmdStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_CmdStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_CmdStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_CmdStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_CmdStarted& e =
      this->eventHistory_CS_CmdStarted->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_CmdStarted\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_JoinWaiting
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_JoinWaiting_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_CS_JoinWaiting->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_JoinWaiting\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_CS_JoinWaiting->size() << "\n";
  }

  void CmdSequencerGTestBase ::
    assertEvents_CS_JoinWaiting(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const filename,
        const U32 recordNumber,
        const U32 opCode
    ) const
  {
    ASSERT_GT(this->eventHistory_CS_JoinWaiting->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event CS_JoinWaiting\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_CS_JoinWaiting->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_CS_JoinWaiting& e =
      this->eventHistory_CS_JoinWaiting->at(__index);
    ASSERT_STREQ(filename, e.filename.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filename at index "
      << __index
      << " in history of event CS_JoinWaiting\n"
      << "  Expected: " << filename << "\n"
      << "  Actual:   " << e.filename.toChar() << "\n";
    ASSERT_EQ(recordNumber, e.recordNumber)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument recordNumber at index "
      << __index
      << " in history of event CS_JoinWaiting\n"
      << "  Expected: " << recordNumber << "\n"
      << "  Actual:   " << e.recordNumber << "\n";
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument opCode at index "
      << __index
      << " in history of event CS_JoinWaiting\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: CS_JoinWaitingNotComplete
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assertEvents_CS_JoinWaitingNotComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_CS_JoinWaitingNotComplete)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event CS_JoinWaitingNotComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_CS_JoinWaitingNotComplete << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
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
  // From port: comCmdOut
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assert_from_comCmdOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_comCmdOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_comCmdOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_comCmdOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
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

  // ----------------------------------------------------------------------
  // From port: seqDone
  // ----------------------------------------------------------------------

  void CmdSequencerGTestBase ::
    assert_from_seqDone_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_seqDone->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_seqDone\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_seqDone->size() << "\n";
  }

} // end namespace Svc
