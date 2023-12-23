// ======================================================================
// \title  Health/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for Health component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  HealthGTestBase ::
    HealthGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        HealthTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  HealthGTestBase ::
    ~HealthGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
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

  void HealthGTestBase ::
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

  void HealthGTestBase ::
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
  // Channel: PingLateWarnings
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertTlm_PingLateWarnings_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PingLateWarnings->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PingLateWarnings\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PingLateWarnings->size() << "\n";
  }

  void HealthGTestBase ::
    assertTlm_PingLateWarnings(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PingLateWarnings->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PingLateWarnings\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PingLateWarnings->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PingLateWarnings& e =
      this->tlmHistory_PingLateWarnings->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PingLateWarnings\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
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
  // Event: HLTH_PING_WARN
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_PING_WARN_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_PING_WARN->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_PING_WARN\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_PING_WARN->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_PING_WARN(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_PING_WARN->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_PING_WARN\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_PING_WARN->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_PING_WARN& e =
      this->eventHistory_HLTH_PING_WARN->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_PING_WARN\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_LATE
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_PING_LATE_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_PING_LATE->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_PING_LATE\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_PING_LATE->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_PING_LATE(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_PING_LATE->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_PING_LATE\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_PING_LATE->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_PING_LATE& e =
      this->eventHistory_HLTH_PING_LATE->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_PING_LATE\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_WRONG_KEY
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_PING_WRONG_KEY_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_PING_WRONG_KEY->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_PING_WRONG_KEY\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_PING_WRONG_KEY->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_PING_WRONG_KEY(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry,
        const U32 badKey
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_PING_WRONG_KEY->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_PING_WRONG_KEY\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_PING_WRONG_KEY->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_PING_WRONG_KEY& e =
      this->eventHistory_HLTH_PING_WRONG_KEY->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_PING_WRONG_KEY\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
    ASSERT_EQ(badKey, e.badKey)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument badKey at index "
      << __index
      << " in history of event HLTH_PING_WRONG_KEY\n"
      << "  Expected: " << badKey << "\n"
      << "  Actual:   " << e.badKey << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_ENABLE
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_ENABLE_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_CHECK_ENABLE->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_CHECK_ENABLE\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_CHECK_ENABLE->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_ENABLE(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Fw::Enabled enabled
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_CHECK_ENABLE->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_CHECK_ENABLE\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_CHECK_ENABLE->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_CHECK_ENABLE& e =
      this->eventHistory_HLTH_CHECK_ENABLE->at(__index);
    ASSERT_EQ(enabled, e.enabled)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument enabled at index "
      << __index
      << " in history of event HLTH_CHECK_ENABLE\n"
      << "  Expected: " << enabled << "\n"
      << "  Actual:   " << e.enabled << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_PING
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_PING_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_CHECK_PING->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_CHECK_PING\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_CHECK_PING->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_PING(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Fw::Enabled enabled,
        const char *const entry
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_CHECK_PING->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_CHECK_PING\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_CHECK_PING->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_CHECK_PING& e =
      this->eventHistory_HLTH_CHECK_PING->at(__index);
    ASSERT_EQ(enabled, e.enabled)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument enabled at index "
      << __index
      << " in history of event HLTH_CHECK_PING\n"
      << "  Expected: " << enabled << "\n"
      << "  Actual:   " << e.enabled << "\n";
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_CHECK_PING\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_CHECK_LOOKUP_ERROR
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_LOOKUP_ERROR_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_CHECK_LOOKUP_ERROR\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_CHECK_LOOKUP_ERROR(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_CHECK_LOOKUP_ERROR\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_CHECK_LOOKUP_ERROR& e =
      this->eventHistory_HLTH_CHECK_LOOKUP_ERROR->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_CHECK_LOOKUP_ERROR\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_UPDATED
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_PING_UPDATED_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_PING_UPDATED->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_PING_UPDATED\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_PING_UPDATED->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_PING_UPDATED(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry,
        const U32 warn,
        const U32 fatal
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_PING_UPDATED->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_PING_UPDATED\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_PING_UPDATED->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_PING_UPDATED& e =
      this->eventHistory_HLTH_PING_UPDATED->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_PING_UPDATED\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
    ASSERT_EQ(warn, e.warn)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument warn at index "
      << __index
      << " in history of event HLTH_PING_UPDATED\n"
      << "  Expected: " << warn << "\n"
      << "  Actual:   " << e.warn << "\n";
    ASSERT_EQ(fatal, e.fatal)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fatal at index "
      << __index
      << " in history of event HLTH_PING_UPDATED\n"
      << "  Expected: " << fatal << "\n"
      << "  Actual:   " << e.fatal << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: HLTH_PING_INVALID_VALUES
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assertEvents_HLTH_PING_INVALID_VALUES_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_HLTH_PING_INVALID_VALUES->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event HLTH_PING_INVALID_VALUES\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_HLTH_PING_INVALID_VALUES->size() << "\n";
  }

  void HealthGTestBase ::
    assertEvents_HLTH_PING_INVALID_VALUES(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const entry,
        const U32 warn,
        const U32 fatal
    ) const
  {
    ASSERT_GT(this->eventHistory_HLTH_PING_INVALID_VALUES->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event HLTH_PING_INVALID_VALUES\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_HLTH_PING_INVALID_VALUES->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_HLTH_PING_INVALID_VALUES& e =
      this->eventHistory_HLTH_PING_INVALID_VALUES->at(__index);
    ASSERT_STREQ(entry, e.entry.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument entry at index "
      << __index
      << " in history of event HLTH_PING_INVALID_VALUES\n"
      << "  Expected: " << entry << "\n"
      << "  Actual:   " << e.entry.toChar() << "\n";
    ASSERT_EQ(warn, e.warn)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument warn at index "
      << __index
      << " in history of event HLTH_PING_INVALID_VALUES\n"
      << "  Expected: " << warn << "\n"
      << "  Actual:   " << e.warn << "\n";
    ASSERT_EQ(fatal, e.fatal)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fatal at index "
      << __index
      << " in history of event HLTH_PING_INVALID_VALUES\n"
      << "  Expected: " << fatal << "\n"
      << "  Actual:   " << e.fatal << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
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
  // From port: PingSend
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assert_from_PingSend_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_PingSend->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_PingSend\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_PingSend->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: WdogStroke
  // ----------------------------------------------------------------------

  void HealthGTestBase ::
    assert_from_WdogStroke_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_WdogStroke->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_WdogStroke\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_WdogStroke->size() << "\n";
  }

} // end namespace Svc
