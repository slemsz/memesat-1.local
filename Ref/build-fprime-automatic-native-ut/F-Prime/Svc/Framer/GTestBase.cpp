// ======================================================================
// \title  Framer/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for Framer component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  FramerGTestBase ::
    FramerGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        FramerTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  FramerGTestBase ::
    ~FramerGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void FramerGTestBase ::
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
  // From port: bufferDeallocate
  // ----------------------------------------------------------------------

  void FramerGTestBase ::
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
  // From port: comStatusOut
  // ----------------------------------------------------------------------

  void FramerGTestBase ::
    assert_from_comStatusOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_comStatusOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_comStatusOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_comStatusOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: framedAllocate
  // ----------------------------------------------------------------------

  void FramerGTestBase ::
    assert_from_framedAllocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_framedAllocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_framedAllocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_framedAllocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: framedOut
  // ----------------------------------------------------------------------

  void FramerGTestBase ::
    assert_from_framedOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_framedOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_framedOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_framedOut->size() << "\n";
  }

} // end namespace Svc
