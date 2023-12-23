// ======================================================================
// \title  BufferManager/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for BufferManager component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  BufferManagerGTestBase ::
    BufferManagerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        BufferManagerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  BufferManagerGTestBase ::
    ~BufferManagerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
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
  // Channel: TotalBuffs
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertTlm_TotalBuffs_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_TotalBuffs->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel TotalBuffs\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_TotalBuffs->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertTlm_TotalBuffs(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_TotalBuffs->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel TotalBuffs\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_TotalBuffs->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_TotalBuffs& e =
      this->tlmHistory_TotalBuffs->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel TotalBuffs\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CurrBuffs
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertTlm_CurrBuffs_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CurrBuffs->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CurrBuffs\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CurrBuffs->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertTlm_CurrBuffs(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CurrBuffs->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CurrBuffs\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CurrBuffs->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CurrBuffs& e =
      this->tlmHistory_CurrBuffs->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CurrBuffs\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: HiBuffs
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertTlm_HiBuffs_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_HiBuffs->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel HiBuffs\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_HiBuffs->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertTlm_HiBuffs(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_HiBuffs->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel HiBuffs\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_HiBuffs->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_HiBuffs& e =
      this->tlmHistory_HiBuffs->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel HiBuffs\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: NoBuffs
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertTlm_NoBuffs_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_NoBuffs->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel NoBuffs\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_NoBuffs->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertTlm_NoBuffs(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_NoBuffs->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel NoBuffs\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_NoBuffs->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_NoBuffs& e =
      this->tlmHistory_NoBuffs->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel NoBuffs\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: EmptyBuffs
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertTlm_EmptyBuffs_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_EmptyBuffs->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel EmptyBuffs\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_EmptyBuffs->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertTlm_EmptyBuffs(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_EmptyBuffs->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel EmptyBuffs\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_EmptyBuffs->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_EmptyBuffs& e =
      this->tlmHistory_EmptyBuffs->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel EmptyBuffs\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
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
  // Event: NoBuffsAvailable
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertEvents_NoBuffsAvailable_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_NoBuffsAvailable->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event NoBuffsAvailable\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_NoBuffsAvailable->size() << "\n";
  }

  void BufferManagerGTestBase ::
    assertEvents_NoBuffsAvailable(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 size
    ) const
  {
    ASSERT_GT(this->eventHistory_NoBuffsAvailable->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event NoBuffsAvailable\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_NoBuffsAvailable->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_NoBuffsAvailable& e =
      this->eventHistory_NoBuffsAvailable->at(__index);
    ASSERT_EQ(size, e.size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument size at index "
      << __index
      << " in history of event NoBuffsAvailable\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << e.size << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: ZeroSizeBuffer
  // ----------------------------------------------------------------------

  void BufferManagerGTestBase ::
    assertEvents_ZeroSizeBuffer_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_ZeroSizeBuffer)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event ZeroSizeBuffer\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_ZeroSizeBuffer << "\n";
  }

} // end namespace Svc
