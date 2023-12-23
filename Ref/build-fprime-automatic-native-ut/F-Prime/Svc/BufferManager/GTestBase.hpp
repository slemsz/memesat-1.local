// ======================================================================
// \title  BufferManager/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for BufferManager component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef BufferManager_GTEST_BASE_HPP
#define BufferManager_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_TotalBuffs_SIZE(size) \
  this->assertTlm_TotalBuffs_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_TotalBuffs(index, value) \
  this->assertTlm_TotalBuffs(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CurrBuffs_SIZE(size) \
  this->assertTlm_CurrBuffs_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CurrBuffs(index, value) \
  this->assertTlm_CurrBuffs(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_HiBuffs_SIZE(size) \
  this->assertTlm_HiBuffs_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_HiBuffs(index, value) \
  this->assertTlm_HiBuffs(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_NoBuffs_SIZE(size) \
  this->assertTlm_NoBuffs_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_NoBuffs(index, value) \
  this->assertTlm_NoBuffs(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_EmptyBuffs_SIZE(size) \
  this->assertTlm_EmptyBuffs_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_EmptyBuffs(index, value) \
  this->assertTlm_EmptyBuffs(__FILE__, __LINE__, index, value)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_NoBuffsAvailable_SIZE(size) \
  this->assertEvents_NoBuffsAvailable_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_NoBuffsAvailable(index, _size) \
  this->assertEvents_NoBuffsAvailable(__FILE__, __LINE__, index, _size)

#define ASSERT_EVENTS_ZeroSizeBuffer_SIZE(size) \
  this->assertEvents_ZeroSizeBuffer_size(__FILE__, __LINE__, size)

namespace Svc {

  //! \class BufferManagerGTestBase
  //! \brief Auto-generated base class for BufferManager component Google Test harness
  //!
  class BufferManagerGTestBase :
    public BufferManagerTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object BufferManagerGTestBase
      //!
      BufferManagerGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object BufferManagerGTestBase
      //!
      virtual ~BufferManagerGTestBase(void);

    protected:

      // ----------------------------------------------------------------------
      // Telemetry
      // ----------------------------------------------------------------------

      //! Assert size of telemetry history
      //!
      void assertTlm_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: TotalBuffs
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_TotalBuffs_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_TotalBuffs(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CurrBuffs
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CurrBuffs_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CurrBuffs(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: HiBuffs
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_HiBuffs_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_HiBuffs(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: NoBuffs
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_NoBuffs_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_NoBuffs(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: EmptyBuffs
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_EmptyBuffs_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_EmptyBuffs(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Events
      // ----------------------------------------------------------------------

      void assertEvents_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: NoBuffsAvailable
      // ----------------------------------------------------------------------

      void assertEvents_NoBuffsAvailable_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_NoBuffsAvailable(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 size /*!< The requested size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ZeroSizeBuffer
      // ----------------------------------------------------------------------

      void assertEvents_ZeroSizeBuffer_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Svc

#endif
