// ======================================================================
// \title  ByteStreamDriverModel/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for ByteStreamDriverModel component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef ByteStreamDriverModel_GTEST_BASE_HPP
#define ByteStreamDriverModel_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_allocate_SIZE(size) \
  this->assert_from_allocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_allocate(index, _size) \
  { \
    ASSERT_GT(this->fromPortHistory_allocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_allocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_allocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_allocate& _e = \
      this->fromPortHistory_allocate->at(index); \
    ASSERT_EQ(_size, _e.size) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument size at index " \
    << index \
    << " in history of from_allocate\n" \
    << "  Expected: " << _size << "\n" \
    << "  Actual:   " << _e.size << "\n"; \
  }

#define ASSERT_from_deallocate_SIZE(size) \
  this->assert_from_deallocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_deallocate(index, _fwBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_deallocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_deallocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_deallocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_deallocate& _e = \
      this->fromPortHistory_deallocate->at(index); \
    ASSERT_EQ(_fwBuffer, _e.fwBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument fwBuffer at index " \
    << index \
    << " in history of from_deallocate\n" \
    << "  Expected: " << _fwBuffer << "\n" \
    << "  Actual:   " << _e.fwBuffer << "\n"; \
  }

#define ASSERT_from_ready_SIZE(size) \
  this->assert_from_ready_size(__FILE__, __LINE__, size)

#define ASSERT_from_recv_SIZE(size) \
  this->assert_from_recv_size(__FILE__, __LINE__, size)

#define ASSERT_from_recv(index, _recvBuffer, _recvStatus) \
  { \
    ASSERT_GT(this->fromPortHistory_recv->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_recv\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_recv->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_recv& _e = \
      this->fromPortHistory_recv->at(index); \
    ASSERT_EQ(_recvBuffer, _e.recvBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument recvBuffer at index " \
    << index \
    << " in history of from_recv\n" \
    << "  Expected: " << _recvBuffer << "\n" \
    << "  Actual:   " << _e.recvBuffer << "\n"; \
    ASSERT_EQ(_recvStatus, _e.recvStatus) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument recvStatus at index " \
    << index \
    << " in history of from_recv\n" \
    << "  Expected: " << _recvStatus << "\n" \
    << "  Actual:   " << _e.recvStatus << "\n"; \
  }

namespace Drv {

  //! \class ByteStreamDriverModelGTestBase
  //! \brief Auto-generated base class for ByteStreamDriverModel component Google Test harness
  //!
  class ByteStreamDriverModelGTestBase :
    public ByteStreamDriverModelTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object ByteStreamDriverModelGTestBase
      //!
      ByteStreamDriverModelGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object ByteStreamDriverModelGTestBase
      //!
      virtual ~ByteStreamDriverModelGTestBase(void);

    protected:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      void assertFromPortHistory_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: allocate
      // ----------------------------------------------------------------------

      void assert_from_allocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: deallocate
      // ----------------------------------------------------------------------

      void assert_from_deallocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: ready
      // ----------------------------------------------------------------------

      void assert_from_ready_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: recv
      // ----------------------------------------------------------------------

      void assert_from_recv_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Drv

#endif
