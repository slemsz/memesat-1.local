// ======================================================================
// \title  ActiveRateGroup/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for ActiveRateGroup component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  ActiveRateGroupGTestBase ::
    ActiveRateGroupGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        ActiveRateGroupTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  ActiveRateGroupGTestBase ::
    ~ActiveRateGroupGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
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
  // Channel: RgMaxTime
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assertTlm_RgMaxTime_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_RgMaxTime->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel RgMaxTime\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_RgMaxTime->size() << "\n";
  }

  void ActiveRateGroupGTestBase ::
    assertTlm_RgMaxTime(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_RgMaxTime->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel RgMaxTime\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_RgMaxTime->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_RgMaxTime& e =
      this->tlmHistory_RgMaxTime->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel RgMaxTime\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: RgCycleSlips
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assertTlm_RgCycleSlips_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_RgCycleSlips->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel RgCycleSlips\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_RgCycleSlips->size() << "\n";
  }

  void ActiveRateGroupGTestBase ::
    assertTlm_RgCycleSlips(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_RgCycleSlips->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel RgCycleSlips\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_RgCycleSlips->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_RgCycleSlips& e =
      this->tlmHistory_RgCycleSlips->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel RgCycleSlips\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
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
  // Event: RateGroupStarted
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assertEvents_RateGroupStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_RateGroupStarted)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RateGroupStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_RateGroupStarted << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: RateGroupCycleSlip
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assertEvents_RateGroupCycleSlip_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_RateGroupCycleSlip->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event RateGroupCycleSlip\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_RateGroupCycleSlip->size() << "\n";
  }

  void ActiveRateGroupGTestBase ::
    assertEvents_RateGroupCycleSlip(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 cycle
    ) const
  {
    ASSERT_GT(this->eventHistory_RateGroupCycleSlip->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event RateGroupCycleSlip\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_RateGroupCycleSlip->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_RateGroupCycleSlip& e =
      this->eventHistory_RateGroupCycleSlip->at(__index);
    ASSERT_EQ(cycle, e.cycle)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument cycle at index "
      << __index
      << " in history of event RateGroupCycleSlip\n"
      << "  Expected: " << cycle << "\n"
      << "  Actual:   " << e.cycle << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
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
  // From port: PingOut
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assert_from_PingOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_PingOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_PingOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_PingOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: RateGroupMemberOut
  // ----------------------------------------------------------------------

  void ActiveRateGroupGTestBase ::
    assert_from_RateGroupMemberOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_RateGroupMemberOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_RateGroupMemberOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_RateGroupMemberOut->size() << "\n";
  }

} // end namespace Svc
