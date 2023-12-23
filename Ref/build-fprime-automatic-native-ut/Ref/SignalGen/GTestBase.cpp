// ======================================================================
// \title  SignalGen/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for SignalGen component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  SignalGenGTestBase ::
    SignalGenGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        SignalGenTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  SignalGenGTestBase ::
    ~SignalGenGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
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

  void SignalGenGTestBase ::
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

  void SignalGenGTestBase ::
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
  // Channel: Type
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_Type_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_Type->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel Type\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_Type->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_Type(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Ref::SignalType& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_Type->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel Type\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_Type->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_Type& e =
      this->tlmHistory_Type->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel Type\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: Output
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_Output_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_Output->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel Output\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_Output->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_Output(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const F32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_Output->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel Output\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_Output->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_Output& e =
      this->tlmHistory_Output->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel Output\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: PairOutput
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_PairOutput_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PairOutput->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PairOutput\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PairOutput->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_PairOutput(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Ref::SignalPair& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PairOutput->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PairOutput\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PairOutput->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PairOutput& e =
      this->tlmHistory_PairOutput->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PairOutput\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: History
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_History_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_History->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel History\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_History->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_History(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Ref::SignalSet& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_History->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel History\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_History->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_History& e =
      this->tlmHistory_History->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel History\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: PairHistory
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_PairHistory_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PairHistory->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PairHistory\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PairHistory->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_PairHistory(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Ref::SignalPairSet& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PairHistory->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PairHistory\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PairHistory->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PairHistory& e =
      this->tlmHistory_PairHistory->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PairHistory\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: Info
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertTlm_Info_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_Info->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel Info\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_Info->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertTlm_Info(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Ref::SignalInfo& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_Info->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel Info\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_Info->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_Info& e =
      this->tlmHistory_Info->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel Info\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
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
  // Event: SignalGen_SettingsChanged
  // ----------------------------------------------------------------------

  void SignalGenGTestBase ::
    assertEvents_SignalGen_SettingsChanged_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SignalGen_SettingsChanged->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SignalGen_SettingsChanged\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SignalGen_SettingsChanged->size() << "\n";
  }

  void SignalGenGTestBase ::
    assertEvents_SignalGen_SettingsChanged(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Frequency,
        const F32 Amplitude,
        const F32 Phase,
        const Ref::SignalType SignalType
    ) const
  {
    ASSERT_GT(this->eventHistory_SignalGen_SettingsChanged->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SignalGen_SettingsChanged\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_SignalGen_SettingsChanged->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_SignalGen_SettingsChanged& e =
      this->eventHistory_SignalGen_SettingsChanged->at(__index);
    ASSERT_EQ(Frequency, e.Frequency)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Frequency at index "
      << __index
      << " in history of event SignalGen_SettingsChanged\n"
      << "  Expected: " << Frequency << "\n"
      << "  Actual:   " << e.Frequency << "\n";
    ASSERT_EQ(Amplitude, e.Amplitude)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Amplitude at index "
      << __index
      << " in history of event SignalGen_SettingsChanged\n"
      << "  Expected: " << Amplitude << "\n"
      << "  Actual:   " << e.Amplitude << "\n";
    ASSERT_EQ(Phase, e.Phase)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Phase at index "
      << __index
      << " in history of event SignalGen_SettingsChanged\n"
      << "  Expected: " << Phase << "\n"
      << "  Actual:   " << e.Phase << "\n";
    ASSERT_EQ(SignalType, e.SignalType)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument SignalType at index "
      << __index
      << " in history of event SignalGen_SettingsChanged\n"
      << "  Expected: " << SignalType << "\n"
      << "  Actual:   " << e.SignalType << "\n";
  }

} // end namespace Ref
