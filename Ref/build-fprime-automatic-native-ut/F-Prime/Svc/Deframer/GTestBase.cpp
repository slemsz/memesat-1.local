// ======================================================================
// \title  Deframer/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for Deframer component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  DeframerGTestBase ::
    DeframerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        DeframerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  DeframerGTestBase ::
    ~DeframerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
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
  // From port: bufferAllocate
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_bufferAllocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_bufferAllocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_bufferAllocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_bufferAllocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: bufferDeallocate
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_bufferDeallocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_bufferDeallocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_bufferDeallocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_bufferDeallocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: bufferOut
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_bufferOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_bufferOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_bufferOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_bufferOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: comOut
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_comOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_comOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_comOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_comOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: framedDeallocate
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_framedDeallocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_framedDeallocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_framedDeallocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_framedDeallocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: framedPoll
  // ----------------------------------------------------------------------

  void DeframerGTestBase ::
    assert_from_framedPoll_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_framedPoll->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_framedPoll\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_framedPoll->size() << "\n";
  }

} // end namespace Svc
