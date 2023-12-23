// ======================================================================
// \title  ActiveLogger/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for ActiveLogger component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  ActiveLoggerGTestBase ::
    ActiveLoggerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        ActiveLoggerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  ActiveLoggerGTestBase ::
    ~ActiveLoggerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
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

  void ActiveLoggerGTestBase ::
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

  void ActiveLoggerGTestBase ::
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
  // Event: SEVERITY_FILTER_STATE
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assertEvents_SEVERITY_FILTER_STATE_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SEVERITY_FILTER_STATE->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SEVERITY_FILTER_STATE\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SEVERITY_FILTER_STATE->size() << "\n";
  }

  void ActiveLoggerGTestBase ::
    assertEvents_SEVERITY_FILTER_STATE(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Svc::ActiveLogger_FilterSeverity severity,
        const bool enabled
    ) const
  {
    ASSERT_GT(this->eventHistory_SEVERITY_FILTER_STATE->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SEVERITY_FILTER_STATE\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_SEVERITY_FILTER_STATE->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_SEVERITY_FILTER_STATE& e =
      this->eventHistory_SEVERITY_FILTER_STATE->at(__index);
    ASSERT_EQ(severity, e.severity)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument severity at index "
      << __index
      << " in history of event SEVERITY_FILTER_STATE\n"
      << "  Expected: " << severity << "\n"
      << "  Actual:   " << e.severity << "\n";
    ASSERT_EQ(enabled, e.enabled)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument enabled at index "
      << __index
      << " in history of event SEVERITY_FILTER_STATE\n"
      << "  Expected: " << enabled << "\n"
      << "  Actual:   " << e.enabled << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_ENABLED
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_ENABLED_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ID_FILTER_ENABLED->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ID_FILTER_ENABLED\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ID_FILTER_ENABLED->size() << "\n";
  }

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_ENABLED(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 ID
    ) const
  {
    ASSERT_GT(this->eventHistory_ID_FILTER_ENABLED->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ID_FILTER_ENABLED\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ID_FILTER_ENABLED->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ID_FILTER_ENABLED& e =
      this->eventHistory_ID_FILTER_ENABLED->at(__index);
    ASSERT_EQ(ID, e.ID)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument ID at index "
      << __index
      << " in history of event ID_FILTER_ENABLED\n"
      << "  Expected: " << ID << "\n"
      << "  Actual:   " << e.ID << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_LIST_FULL
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_LIST_FULL_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ID_FILTER_LIST_FULL->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ID_FILTER_LIST_FULL\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ID_FILTER_LIST_FULL->size() << "\n";
  }

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_LIST_FULL(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 ID
    ) const
  {
    ASSERT_GT(this->eventHistory_ID_FILTER_LIST_FULL->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ID_FILTER_LIST_FULL\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ID_FILTER_LIST_FULL->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ID_FILTER_LIST_FULL& e =
      this->eventHistory_ID_FILTER_LIST_FULL->at(__index);
    ASSERT_EQ(ID, e.ID)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument ID at index "
      << __index
      << " in history of event ID_FILTER_LIST_FULL\n"
      << "  Expected: " << ID << "\n"
      << "  Actual:   " << e.ID << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_REMOVED
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_REMOVED_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ID_FILTER_REMOVED->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ID_FILTER_REMOVED\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ID_FILTER_REMOVED->size() << "\n";
  }

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_REMOVED(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 ID
    ) const
  {
    ASSERT_GT(this->eventHistory_ID_FILTER_REMOVED->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ID_FILTER_REMOVED\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ID_FILTER_REMOVED->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ID_FILTER_REMOVED& e =
      this->eventHistory_ID_FILTER_REMOVED->at(__index);
    ASSERT_EQ(ID, e.ID)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument ID at index "
      << __index
      << " in history of event ID_FILTER_REMOVED\n"
      << "  Expected: " << ID << "\n"
      << "  Actual:   " << e.ID << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ID_FILTER_NOT_FOUND
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_NOT_FOUND_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_ID_FILTER_NOT_FOUND->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ID_FILTER_NOT_FOUND\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_ID_FILTER_NOT_FOUND->size() << "\n";
  }

  void ActiveLoggerGTestBase ::
    assertEvents_ID_FILTER_NOT_FOUND(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 ID
    ) const
  {
    ASSERT_GT(this->eventHistory_ID_FILTER_NOT_FOUND->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event ID_FILTER_NOT_FOUND\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_ID_FILTER_NOT_FOUND->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_ID_FILTER_NOT_FOUND& e =
      this->eventHistory_ID_FILTER_NOT_FOUND->at(__index);
    ASSERT_EQ(ID, e.ID)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument ID at index "
      << __index
      << " in history of event ID_FILTER_NOT_FOUND\n"
      << "  Expected: " << ID << "\n"
      << "  Actual:   " << e.ID << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
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
  // From port: FatalAnnounce
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assert_from_FatalAnnounce_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_FatalAnnounce->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_FatalAnnounce\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_FatalAnnounce->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: PktSend
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
    assert_from_PktSend_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_PktSend->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_PktSend\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_PktSend->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void ActiveLoggerGTestBase ::
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
