// ======================================================================
// \title  SystemResources/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for SystemResources component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  SystemResourcesGTestBase ::
    SystemResourcesGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        SystemResourcesTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  SystemResourcesGTestBase ::
    ~SystemResourcesGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertCmdResponse_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->cmdResponseHistory->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of command response history\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->cmdResponseHistory->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertCmdResponse(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdResponse response
    )
    const
  {
    ASSERT_LT(__index, this->cmdResponseHistory->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into command response history\n"
      << "  Expected: Less than size of command response history ("
      << this->cmdResponseHistory->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const CmdResponse& e = this->cmdResponseHistory->at(__index);
    ASSERT_EQ(opCode, e.opCode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Opcode at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << opCode << "\n"
      << "  Actual:   " << e.opCode << "\n";
    ASSERT_EQ(cmdSeq, e.cmdSeq)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Command sequence number at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << cmdSeq << "\n"
      << "  Actual:   " << e.cmdSeq << "\n";
    ASSERT_EQ(response, e.response)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Command response at index "
      << __index
      << " in command response history\n"
      << "  Expected: " << response << "\n"
      << "  Actual:   " << e.response << "\n";
  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
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
  // Channel: MEMORY_TOTAL
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_MEMORY_TOTAL_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_MEMORY_TOTAL->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel MEMORY_TOTAL\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_MEMORY_TOTAL->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_MEMORY_TOTAL(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U64& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_MEMORY_TOTAL->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel MEMORY_TOTAL\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_MEMORY_TOTAL->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_MEMORY_TOTAL& e =
      this->tlmHistory_MEMORY_TOTAL->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel MEMORY_TOTAL\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: MEMORY_USED
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_MEMORY_USED_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_MEMORY_USED->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel MEMORY_USED\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_MEMORY_USED->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_MEMORY_USED(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U64& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_MEMORY_USED->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel MEMORY_USED\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_MEMORY_USED->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_MEMORY_USED& e =
      this->tlmHistory_MEMORY_USED->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel MEMORY_USED\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: NON_VOLATILE_TOTAL
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_NON_VOLATILE_TOTAL_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_NON_VOLATILE_TOTAL->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel NON_VOLATILE_TOTAL\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_NON_VOLATILE_TOTAL->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_NON_VOLATILE_TOTAL(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U64& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_NON_VOLATILE_TOTAL->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel NON_VOLATILE_TOTAL\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_NON_VOLATILE_TOTAL->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_NON_VOLATILE_TOTAL& e =
      this->tlmHistory_NON_VOLATILE_TOTAL->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel NON_VOLATILE_TOTAL\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: NON_VOLATILE_FREE
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_NON_VOLATILE_FREE_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_NON_VOLATILE_FREE->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel NON_VOLATILE_FREE\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_NON_VOLATILE_FREE->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_NON_VOLATILE_FREE(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U64& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_NON_VOLATILE_FREE->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel NON_VOLATILE_FREE\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_NON_VOLATILE_FREE->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_NON_VOLATILE_FREE& e =
      this->tlmHistory_NON_VOLATILE_FREE->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel NON_VOLATILE_FREE\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU& e =
      this->tlmHistory_CPU->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_00
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_00_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_00->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_00\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_00->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_00(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_00->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_00\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_00->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_00& e =
      this->tlmHistory_CPU_00->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_00\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_01
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_01_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_01->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_01\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_01->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_01(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_01->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_01\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_01->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_01& e =
      this->tlmHistory_CPU_01->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_01\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_02
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_02_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_02->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_02\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_02->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_02(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_02->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_02\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_02->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_02& e =
      this->tlmHistory_CPU_02->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_02\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_03
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_03_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_03->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_03\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_03->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_03(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_03->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_03\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_03->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_03& e =
      this->tlmHistory_CPU_03->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_03\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_04
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_04_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_04->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_04\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_04->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_04(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_04->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_04\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_04->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_04& e =
      this->tlmHistory_CPU_04->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_04\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_05
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_05_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_05->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_05\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_05->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_05(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_05->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_05\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_05->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_05& e =
      this->tlmHistory_CPU_05->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_05\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_06
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_06_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_06->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_06\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_06->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_06(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_06->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_06\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_06->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_06& e =
      this->tlmHistory_CPU_06->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_06\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_07
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_07_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_07->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_07\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_07->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_07(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_07->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_07\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_07->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_07& e =
      this->tlmHistory_CPU_07->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_07\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_08
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_08_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_08->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_08\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_08->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_08(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_08->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_08\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_08->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_08& e =
      this->tlmHistory_CPU_08->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_08\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_09
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_09_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_09->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_09\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_09->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_09(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_09->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_09\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_09->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_09& e =
      this->tlmHistory_CPU_09->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_09\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_10
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_10_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_10->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_10\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_10->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_10(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_10->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_10\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_10->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_10& e =
      this->tlmHistory_CPU_10->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_10\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_11
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_11_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_11->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_11\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_11->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_11(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_11->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_11\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_11->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_11& e =
      this->tlmHistory_CPU_11->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_11\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_12
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_12_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_12->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_12\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_12->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_12(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_12->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_12\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_12->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_12& e =
      this->tlmHistory_CPU_12->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_12\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_13
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_13_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_13->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_13\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_13->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_13(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_13->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_13\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_13->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_13& e =
      this->tlmHistory_CPU_13->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_13\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_14
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_14_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_14->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_14\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_14->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_14(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_14->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_14\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_14->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_14& e =
      this->tlmHistory_CPU_14->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_14\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CPU_15
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_CPU_15_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CPU_15->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CPU_15\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CPU_15->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_CPU_15(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CPU_15->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CPU_15\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CPU_15->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CPU_15& e =
      this->tlmHistory_CPU_15->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CPU_15\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: FRAMEWORK_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_FRAMEWORK_VERSION_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_FRAMEWORK_VERSION->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel FRAMEWORK_VERSION\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_FRAMEWORK_VERSION->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_FRAMEWORK_VERSION(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_FRAMEWORK_VERSION->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel FRAMEWORK_VERSION\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_FRAMEWORK_VERSION->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_FRAMEWORK_VERSION& e =
      this->tlmHistory_FRAMEWORK_VERSION->at(__index);
    ASSERT_STREQ(val, e.arg.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel FRAMEWORK_VERSION\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: PROJECT_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertTlm_PROJECT_VERSION_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PROJECT_VERSION->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PROJECT_VERSION\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PROJECT_VERSION->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertTlm_PROJECT_VERSION(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PROJECT_VERSION->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PROJECT_VERSION\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PROJECT_VERSION->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PROJECT_VERSION& e =
      this->tlmHistory_PROJECT_VERSION->at(__index);
    ASSERT_STREQ(val, e.arg.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PROJECT_VERSION\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
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
  // Event: FRAMEWORK_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertEvents_FRAMEWORK_VERSION_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FRAMEWORK_VERSION->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FRAMEWORK_VERSION\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FRAMEWORK_VERSION->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertEvents_FRAMEWORK_VERSION(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const version
    ) const
  {
    ASSERT_GT(this->eventHistory_FRAMEWORK_VERSION->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FRAMEWORK_VERSION\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FRAMEWORK_VERSION->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FRAMEWORK_VERSION& e =
      this->eventHistory_FRAMEWORK_VERSION->at(__index);
    ASSERT_STREQ(version, e.version.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument version at index "
      << __index
      << " in history of event FRAMEWORK_VERSION\n"
      << "  Expected: " << version << "\n"
      << "  Actual:   " << e.version.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PROJECT_VERSION
  // ----------------------------------------------------------------------

  void SystemResourcesGTestBase ::
    assertEvents_PROJECT_VERSION_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PROJECT_VERSION->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PROJECT_VERSION\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PROJECT_VERSION->size() << "\n";
  }

  void SystemResourcesGTestBase ::
    assertEvents_PROJECT_VERSION(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const version
    ) const
  {
    ASSERT_GT(this->eventHistory_PROJECT_VERSION->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PROJECT_VERSION\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PROJECT_VERSION->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PROJECT_VERSION& e =
      this->eventHistory_PROJECT_VERSION->at(__index);
    ASSERT_STREQ(version, e.version.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument version at index "
      << __index
      << " in history of event PROJECT_VERSION\n"
      << "  Expected: " << version << "\n"
      << "  Actual:   " << e.version.toChar() << "\n";
  }

} // end namespace Svc
