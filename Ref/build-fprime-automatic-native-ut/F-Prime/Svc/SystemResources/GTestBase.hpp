// ======================================================================
// \title  SystemResources/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for SystemResources component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef SystemResources_GTEST_BASE_HPP
#define SystemResources_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for command history assertions
// ----------------------------------------------------------------------

#define ASSERT_CMD_RESPONSE_SIZE(size) \
  this->assertCmdResponse_size(__FILE__, __LINE__, size)

#define ASSERT_CMD_RESPONSE(index, opCode, cmdSeq, response) \
  this->assertCmdResponse(__FILE__, __LINE__, index, opCode, cmdSeq, response)

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_MEMORY_TOTAL_SIZE(size) \
  this->assertTlm_MEMORY_TOTAL_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_MEMORY_TOTAL(index, value) \
  this->assertTlm_MEMORY_TOTAL(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_MEMORY_USED_SIZE(size) \
  this->assertTlm_MEMORY_USED_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_MEMORY_USED(index, value) \
  this->assertTlm_MEMORY_USED(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_NON_VOLATILE_TOTAL_SIZE(size) \
  this->assertTlm_NON_VOLATILE_TOTAL_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_NON_VOLATILE_TOTAL(index, value) \
  this->assertTlm_NON_VOLATILE_TOTAL(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_NON_VOLATILE_FREE_SIZE(size) \
  this->assertTlm_NON_VOLATILE_FREE_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_NON_VOLATILE_FREE(index, value) \
  this->assertTlm_NON_VOLATILE_FREE(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_SIZE(size) \
  this->assertTlm_CPU_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU(index, value) \
  this->assertTlm_CPU(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_00_SIZE(size) \
  this->assertTlm_CPU_00_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_00(index, value) \
  this->assertTlm_CPU_00(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_01_SIZE(size) \
  this->assertTlm_CPU_01_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_01(index, value) \
  this->assertTlm_CPU_01(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_02_SIZE(size) \
  this->assertTlm_CPU_02_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_02(index, value) \
  this->assertTlm_CPU_02(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_03_SIZE(size) \
  this->assertTlm_CPU_03_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_03(index, value) \
  this->assertTlm_CPU_03(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_04_SIZE(size) \
  this->assertTlm_CPU_04_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_04(index, value) \
  this->assertTlm_CPU_04(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_05_SIZE(size) \
  this->assertTlm_CPU_05_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_05(index, value) \
  this->assertTlm_CPU_05(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_06_SIZE(size) \
  this->assertTlm_CPU_06_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_06(index, value) \
  this->assertTlm_CPU_06(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_07_SIZE(size) \
  this->assertTlm_CPU_07_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_07(index, value) \
  this->assertTlm_CPU_07(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_08_SIZE(size) \
  this->assertTlm_CPU_08_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_08(index, value) \
  this->assertTlm_CPU_08(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_09_SIZE(size) \
  this->assertTlm_CPU_09_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_09(index, value) \
  this->assertTlm_CPU_09(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_10_SIZE(size) \
  this->assertTlm_CPU_10_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_10(index, value) \
  this->assertTlm_CPU_10(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_11_SIZE(size) \
  this->assertTlm_CPU_11_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_11(index, value) \
  this->assertTlm_CPU_11(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_12_SIZE(size) \
  this->assertTlm_CPU_12_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_12(index, value) \
  this->assertTlm_CPU_12(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_13_SIZE(size) \
  this->assertTlm_CPU_13_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_13(index, value) \
  this->assertTlm_CPU_13(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_14_SIZE(size) \
  this->assertTlm_CPU_14_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_14(index, value) \
  this->assertTlm_CPU_14(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_CPU_15_SIZE(size) \
  this->assertTlm_CPU_15_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_CPU_15(index, value) \
  this->assertTlm_CPU_15(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_FRAMEWORK_VERSION_SIZE(size) \
  this->assertTlm_FRAMEWORK_VERSION_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_FRAMEWORK_VERSION(index, value) \
  this->assertTlm_FRAMEWORK_VERSION(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_PROJECT_VERSION_SIZE(size) \
  this->assertTlm_PROJECT_VERSION_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_PROJECT_VERSION(index, value) \
  this->assertTlm_PROJECT_VERSION(__FILE__, __LINE__, index, value)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FRAMEWORK_VERSION_SIZE(size) \
  this->assertEvents_FRAMEWORK_VERSION_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FRAMEWORK_VERSION(index, _version) \
  this->assertEvents_FRAMEWORK_VERSION(__FILE__, __LINE__, index, _version)

#define ASSERT_EVENTS_PROJECT_VERSION_SIZE(size) \
  this->assertEvents_PROJECT_VERSION_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PROJECT_VERSION(index, _version) \
  this->assertEvents_PROJECT_VERSION(__FILE__, __LINE__, index, _version)

namespace Svc {

  //! \class SystemResourcesGTestBase
  //! \brief Auto-generated base class for SystemResources component Google Test harness
  //!
  class SystemResourcesGTestBase :
    public SystemResourcesTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object SystemResourcesGTestBase
      //!
      SystemResourcesGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object SystemResourcesGTestBase
      //!
      virtual ~SystemResourcesGTestBase(void);

    protected:

      // ----------------------------------------------------------------------
      // Commands
      // ----------------------------------------------------------------------

      //! Assert size of command response history
      //!
      void assertCmdResponse_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      //! Assert command response in history at index
      //!
      void assertCmdResponse(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          const Fw::CmdResponse response /*!< The command response*/
      ) const;

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
      // Channel: MEMORY_TOTAL
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_MEMORY_TOTAL_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_MEMORY_TOTAL(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U64& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: MEMORY_USED
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_MEMORY_USED_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_MEMORY_USED(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U64& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: NON_VOLATILE_TOTAL
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_NON_VOLATILE_TOTAL_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_NON_VOLATILE_TOTAL(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U64& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: NON_VOLATILE_FREE
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_NON_VOLATILE_FREE_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_NON_VOLATILE_FREE(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U64& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_00
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_00_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_00(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_01
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_01_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_01(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_02
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_02_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_02(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_03
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_03_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_03(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_04
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_04_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_04(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_05
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_05_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_05(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_06
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_06_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_06(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_07
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_07_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_07(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_08
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_08_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_08(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_09
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_09_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_09(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_10
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_10_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_10(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_11
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_11_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_11(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_12
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_12_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_12(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_13
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_13_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_13(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_14
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_14_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_14(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: CPU_15
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_CPU_15_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_CPU_15(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const F32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: FRAMEWORK_VERSION
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_FRAMEWORK_VERSION_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_FRAMEWORK_VERSION(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PROJECT_VERSION
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_PROJECT_VERSION_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_PROJECT_VERSION(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const val /*!< The channel value*/
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
      // Event: FRAMEWORK_VERSION
      // ----------------------------------------------------------------------

      void assertEvents_FRAMEWORK_VERSION_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FRAMEWORK_VERSION(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const version /*!< version string*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PROJECT_VERSION
      // ----------------------------------------------------------------------

      void assertEvents_PROJECT_VERSION_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PROJECT_VERSION(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const version /*!< version string*/
      ) const;

  };

} // end namespace Svc

#endif
