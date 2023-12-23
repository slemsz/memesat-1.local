// ======================================================================
// \title  ByteStreamDriverModel/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for ByteStreamDriverModel component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Drv {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  ByteStreamDriverModelGTestBase ::
    ByteStreamDriverModelGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        ByteStreamDriverModelTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  ByteStreamDriverModelGTestBase ::
    ~ByteStreamDriverModelGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelGTestBase ::
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
  // From port: allocate
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelGTestBase ::
    assert_from_allocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_allocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_allocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_allocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: deallocate
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelGTestBase ::
    assert_from_deallocate_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_deallocate->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_deallocate\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_deallocate->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: ready
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelGTestBase ::
    assert_from_ready_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistorySize_ready)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_ready\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistorySize_ready << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: recv
  // ----------------------------------------------------------------------

  void ByteStreamDriverModelGTestBase ::
    assert_from_recv_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_recv->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_recv\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_recv->size() << "\n";
  }

} // end namespace Drv
