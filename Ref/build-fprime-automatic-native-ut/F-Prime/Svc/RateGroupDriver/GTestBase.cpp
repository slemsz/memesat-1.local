// ======================================================================
// \title  RateGroupDriver/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for RateGroupDriver component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  RateGroupDriverGTestBase ::
    RateGroupDriverGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        RateGroupDriverTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  RateGroupDriverGTestBase ::
    ~RateGroupDriverGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void RateGroupDriverGTestBase ::
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
  // From port: CycleOut
  // ----------------------------------------------------------------------

  void RateGroupDriverGTestBase ::
    assert_from_CycleOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_CycleOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_CycleOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_CycleOut->size() << "\n";
  }

} // end namespace Svc
