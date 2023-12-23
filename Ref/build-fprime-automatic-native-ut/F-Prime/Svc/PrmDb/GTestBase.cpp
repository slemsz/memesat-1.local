// ======================================================================
// \title  PrmDb/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for PrmDb component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  PrmDbGTestBase ::
    PrmDbGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        PrmDbTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  PrmDbGTestBase ::
    ~PrmDbGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
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

  void PrmDbGTestBase ::
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
  // Events
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
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
  // Event: PrmIdNotFound
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmIdNotFound_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmIdNotFound->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmIdNotFound\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmIdNotFound->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmIdNotFound(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Id
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmIdNotFound->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmIdNotFound\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmIdNotFound->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmIdNotFound& e =
      this->eventHistory_PrmIdNotFound->at(__index);
    ASSERT_EQ(Id, e.Id)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Id at index "
      << __index
      << " in history of event PrmIdNotFound\n"
      << "  Expected: " << Id << "\n"
      << "  Actual:   " << e.Id << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmIdUpdated
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmIdUpdated_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmIdUpdated->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmIdUpdated\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmIdUpdated->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmIdUpdated(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Id
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmIdUpdated->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmIdUpdated\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmIdUpdated->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmIdUpdated& e =
      this->eventHistory_PrmIdUpdated->at(__index);
    ASSERT_EQ(Id, e.Id)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Id at index "
      << __index
      << " in history of event PrmIdUpdated\n"
      << "  Expected: " << Id << "\n"
      << "  Actual:   " << e.Id << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmDbFull
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmDbFull_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmDbFull->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmDbFull\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmDbFull->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmDbFull(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Id
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmDbFull->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmDbFull\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmDbFull->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmDbFull& e =
      this->eventHistory_PrmDbFull->at(__index);
    ASSERT_EQ(Id, e.Id)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Id at index "
      << __index
      << " in history of event PrmDbFull\n"
      << "  Expected: " << Id << "\n"
      << "  Actual:   " << e.Id << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmIdAdded
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmIdAdded_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmIdAdded->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmIdAdded\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmIdAdded->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmIdAdded(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Id
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmIdAdded->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmIdAdded\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmIdAdded->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmIdAdded& e =
      this->eventHistory_PrmIdAdded->at(__index);
    ASSERT_EQ(Id, e.Id)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Id at index "
      << __index
      << " in history of event PrmIdAdded\n"
      << "  Expected: " << Id << "\n"
      << "  Actual:   " << e.Id << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmFileWriteError
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmFileWriteError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmFileWriteError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmFileWriteError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmFileWriteError->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmFileWriteError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Svc::PrmDb_PrmWriteError stage,
        const I32 record,
        const I32 error
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmFileWriteError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmFileWriteError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmFileWriteError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmFileWriteError& e =
      this->eventHistory_PrmFileWriteError->at(__index);
    ASSERT_EQ(stage, e.stage)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument stage at index "
      << __index
      << " in history of event PrmFileWriteError\n"
      << "  Expected: " << stage << "\n"
      << "  Actual:   " << e.stage << "\n";
    ASSERT_EQ(record, e.record)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument record at index "
      << __index
      << " in history of event PrmFileWriteError\n"
      << "  Expected: " << record << "\n"
      << "  Actual:   " << e.record << "\n";
    ASSERT_EQ(error, e.error)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument error at index "
      << __index
      << " in history of event PrmFileWriteError\n"
      << "  Expected: " << error << "\n"
      << "  Actual:   " << e.error << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmFileSaveComplete
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmFileSaveComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmFileSaveComplete->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmFileSaveComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmFileSaveComplete->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmFileSaveComplete(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 records
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmFileSaveComplete->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmFileSaveComplete\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmFileSaveComplete->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmFileSaveComplete& e =
      this->eventHistory_PrmFileSaveComplete->at(__index);
    ASSERT_EQ(records, e.records)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument records at index "
      << __index
      << " in history of event PrmFileSaveComplete\n"
      << "  Expected: " << records << "\n"
      << "  Actual:   " << e.records << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmFileReadError
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmFileReadError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmFileReadError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmFileReadError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmFileReadError->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmFileReadError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Svc::PrmDb_PrmReadError stage,
        const I32 record,
        const I32 error
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmFileReadError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmFileReadError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmFileReadError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmFileReadError& e =
      this->eventHistory_PrmFileReadError->at(__index);
    ASSERT_EQ(stage, e.stage)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument stage at index "
      << __index
      << " in history of event PrmFileReadError\n"
      << "  Expected: " << stage << "\n"
      << "  Actual:   " << e.stage << "\n";
    ASSERT_EQ(record, e.record)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument record at index "
      << __index
      << " in history of event PrmFileReadError\n"
      << "  Expected: " << record << "\n"
      << "  Actual:   " << e.record << "\n";
    ASSERT_EQ(error, e.error)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument error at index "
      << __index
      << " in history of event PrmFileReadError\n"
      << "  Expected: " << error << "\n"
      << "  Actual:   " << e.error << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PrmFileLoadComplete
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
    assertEvents_PrmFileLoadComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PrmFileLoadComplete->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PrmFileLoadComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PrmFileLoadComplete->size() << "\n";
  }

  void PrmDbGTestBase ::
    assertEvents_PrmFileLoadComplete(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 records
    ) const
  {
    ASSERT_GT(this->eventHistory_PrmFileLoadComplete->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PrmFileLoadComplete\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PrmFileLoadComplete->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PrmFileLoadComplete& e =
      this->eventHistory_PrmFileLoadComplete->at(__index);
    ASSERT_EQ(records, e.records)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument records at index "
      << __index
      << " in history of event PrmFileLoadComplete\n"
      << "  Expected: " << records << "\n"
      << "  Actual:   " << e.records << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void PrmDbGTestBase ::
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

  void PrmDbGTestBase ::
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
