// ======================================================================
// \title  Deframer/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for Deframer component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef Deframer_GTEST_BASE_HPP
#define Deframer_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferAllocate_SIZE(size) \
  this->assert_from_bufferAllocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferAllocate(index, _size) \
  { \
    ASSERT_GT(this->fromPortHistory_bufferAllocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_bufferAllocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_bufferAllocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_bufferAllocate& _e = \
      this->fromPortHistory_bufferAllocate->at(index); \
    ASSERT_EQ(_size, _e.size) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument size at index " \
    << index \
    << " in history of from_bufferAllocate\n" \
    << "  Expected: " << _size << "\n" \
    << "  Actual:   " << _e.size << "\n"; \
  }

#define ASSERT_from_bufferDeallocate_SIZE(size) \
  this->assert_from_bufferDeallocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferDeallocate(index, _fwBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_bufferDeallocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_bufferDeallocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_bufferDeallocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_bufferDeallocate& _e = \
      this->fromPortHistory_bufferDeallocate->at(index); \
    ASSERT_EQ(_fwBuffer, _e.fwBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument fwBuffer at index " \
    << index \
    << " in history of from_bufferDeallocate\n" \
    << "  Expected: " << _fwBuffer << "\n" \
    << "  Actual:   " << _e.fwBuffer << "\n"; \
  }

#define ASSERT_from_bufferOut_SIZE(size) \
  this->assert_from_bufferOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferOut(index, _fwBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_bufferOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_bufferOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_bufferOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_bufferOut& _e = \
      this->fromPortHistory_bufferOut->at(index); \
    ASSERT_EQ(_fwBuffer, _e.fwBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument fwBuffer at index " \
    << index \
    << " in history of from_bufferOut\n" \
    << "  Expected: " << _fwBuffer << "\n" \
    << "  Actual:   " << _e.fwBuffer << "\n"; \
  }

#define ASSERT_from_comOut_SIZE(size) \
  this->assert_from_comOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_comOut(index, _data, _context) \
  { \
    ASSERT_GT(this->fromPortHistory_comOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_comOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_comOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_comOut& _e = \
      this->fromPortHistory_comOut->at(index); \
    ASSERT_EQ(_data, _e.data) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument data at index " \
    << index \
    << " in history of from_comOut\n" \
    << "  Expected: " << _data << "\n" \
    << "  Actual:   " << _e.data << "\n"; \
    ASSERT_EQ(_context, _e.context) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument context at index " \
    << index \
    << " in history of from_comOut\n" \
    << "  Expected: " << _context << "\n" \
    << "  Actual:   " << _e.context << "\n"; \
  }

#define ASSERT_from_framedDeallocate_SIZE(size) \
  this->assert_from_framedDeallocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_framedDeallocate(index, _fwBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_framedDeallocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_framedDeallocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_framedDeallocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_framedDeallocate& _e = \
      this->fromPortHistory_framedDeallocate->at(index); \
    ASSERT_EQ(_fwBuffer, _e.fwBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument fwBuffer at index " \
    << index \
    << " in history of from_framedDeallocate\n" \
    << "  Expected: " << _fwBuffer << "\n" \
    << "  Actual:   " << _e.fwBuffer << "\n"; \
  }

#define ASSERT_from_framedPoll_SIZE(size) \
  this->assert_from_framedPoll_size(__FILE__, __LINE__, size)

#define ASSERT_from_framedPoll(index, _pollBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_framedPoll->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_framedPoll\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_framedPoll->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_framedPoll& _e = \
      this->fromPortHistory_framedPoll->at(index); \
    ASSERT_EQ(_pollBuffer, _e.pollBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument pollBuffer at index " \
    << index \
    << " in history of from_framedPoll\n" \
    << "  Expected: " << _pollBuffer << "\n" \
    << "  Actual:   " << _e.pollBuffer << "\n"; \
  }

namespace Svc {

  //! \class DeframerGTestBase
  //! \brief Auto-generated base class for Deframer component Google Test harness
  //!
  class DeframerGTestBase :
    public DeframerTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object DeframerGTestBase
      //!
      DeframerGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object DeframerGTestBase
      //!
      virtual ~DeframerGTestBase(void);

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
      // From port: bufferAllocate
      // ----------------------------------------------------------------------

      void assert_from_bufferAllocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: bufferDeallocate
      // ----------------------------------------------------------------------

      void assert_from_bufferDeallocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: bufferOut
      // ----------------------------------------------------------------------

      void assert_from_bufferOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: comOut
      // ----------------------------------------------------------------------

      void assert_from_comOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: framedDeallocate
      // ----------------------------------------------------------------------

      void assert_from_framedDeallocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: framedPoll
      // ----------------------------------------------------------------------

      void assert_from_framedPoll_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Svc

#endif
