// ======================================================================
// \title  Framer/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for Framer component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef Framer_GTEST_BASE_HPP
#define Framer_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

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

#define ASSERT_from_comStatusOut_SIZE(size) \
  this->assert_from_comStatusOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_comStatusOut(index, _condition) \
  { \
    ASSERT_GT(this->fromPortHistory_comStatusOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_comStatusOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_comStatusOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_comStatusOut& _e = \
      this->fromPortHistory_comStatusOut->at(index); \
    ASSERT_EQ(_condition, _e.condition) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument condition at index " \
    << index \
    << " in history of from_comStatusOut\n" \
    << "  Expected: " << _condition << "\n" \
    << "  Actual:   " << _e.condition << "\n"; \
  }

#define ASSERT_from_framedAllocate_SIZE(size) \
  this->assert_from_framedAllocate_size(__FILE__, __LINE__, size)

#define ASSERT_from_framedAllocate(index, _size) \
  { \
    ASSERT_GT(this->fromPortHistory_framedAllocate->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_framedAllocate\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_framedAllocate->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_framedAllocate& _e = \
      this->fromPortHistory_framedAllocate->at(index); \
    ASSERT_EQ(_size, _e.size) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument size at index " \
    << index \
    << " in history of from_framedAllocate\n" \
    << "  Expected: " << _size << "\n" \
    << "  Actual:   " << _e.size << "\n"; \
  }

#define ASSERT_from_framedOut_SIZE(size) \
  this->assert_from_framedOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_framedOut(index, _sendBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_framedOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_framedOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_framedOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_framedOut& _e = \
      this->fromPortHistory_framedOut->at(index); \
    ASSERT_EQ(_sendBuffer, _e.sendBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument sendBuffer at index " \
    << index \
    << " in history of from_framedOut\n" \
    << "  Expected: " << _sendBuffer << "\n" \
    << "  Actual:   " << _e.sendBuffer << "\n"; \
  }

namespace Svc {

  //! \class FramerGTestBase
  //! \brief Auto-generated base class for Framer component Google Test harness
  //!
  class FramerGTestBase :
    public FramerTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object FramerGTestBase
      //!
      FramerGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FramerGTestBase
      //!
      virtual ~FramerGTestBase(void);

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
      // From port: bufferDeallocate
      // ----------------------------------------------------------------------

      void assert_from_bufferDeallocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: comStatusOut
      // ----------------------------------------------------------------------

      void assert_from_comStatusOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: framedAllocate
      // ----------------------------------------------------------------------

      void assert_from_framedAllocate_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: framedOut
      // ----------------------------------------------------------------------

      void assert_from_framedOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Svc

#endif
