// ======================================================================
// \title  CommandDispatcher/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for CommandDispatcher component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  CommandDispatcherGTestBase ::
    CommandDispatcherGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        CommandDispatcherTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  CommandDispatcherGTestBase ::
    ~CommandDispatcherGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
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

  void CommandDispatcherGTestBase ::
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

  void CommandDispatcherGTestBase ::
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
  // Channel: CommandsDispatched
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertTlm_CommandsDispatched_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CommandsDispatched->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CommandsDispatched\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CommandsDispatched->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertTlm_CommandsDispatched(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CommandsDispatched->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CommandsDispatched\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CommandsDispatched->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CommandsDispatched& e =
      this->tlmHistory_CommandsDispatched->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CommandsDispatched\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: CommandErrors
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertTlm_CommandErrors_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_CommandErrors->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel CommandErrors\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_CommandErrors->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertTlm_CommandErrors(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_CommandErrors->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel CommandErrors\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_CommandErrors->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_CommandErrors& e =
      this->tlmHistory_CommandErrors->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel CommandErrors\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
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
  // Event: OpCodeRegistered
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeRegistered_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_OpCodeRegistered->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event OpCodeRegistered\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_OpCodeRegistered->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeRegistered(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode,
        const I32 port,
        const I32 slot
    ) const
  {
    ASSERT_GT(this->eventHistory_OpCodeRegistered->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event OpCodeRegistered\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_OpCodeRegistered->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_OpCodeRegistered& e =
      this->eventHistory_OpCodeRegistered->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event OpCodeRegistered\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
    ASSERT_EQ(port, e.port)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument port at index "
      << __index
      << " in history of event OpCodeRegistered\n"
      << "  Expected: " << port << "\n"
      << "  Actual:   " << e.port << "\n";
    ASSERT_EQ(slot, e.slot)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument slot at index "
      << __index
      << " in history of event OpCodeRegistered\n"
      << "  Expected: " << slot << "\n"
      << "  Actual:   " << e.slot << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: OpCodeDispatched
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeDispatched_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_OpCodeDispatched->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event OpCodeDispatched\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_OpCodeDispatched->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeDispatched(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode,
        const I32 port
    ) const
  {
    ASSERT_GT(this->eventHistory_OpCodeDispatched->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event OpCodeDispatched\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_OpCodeDispatched->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_OpCodeDispatched& e =
      this->eventHistory_OpCodeDispatched->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event OpCodeDispatched\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
    ASSERT_EQ(port, e.port)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument port at index "
      << __index
      << " in history of event OpCodeDispatched\n"
      << "  Expected: " << port << "\n"
      << "  Actual:   " << e.port << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: OpCodeCompleted
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeCompleted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_OpCodeCompleted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event OpCodeCompleted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_OpCodeCompleted->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeCompleted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode
    ) const
  {
    ASSERT_GT(this->eventHistory_OpCodeCompleted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event OpCodeCompleted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_OpCodeCompleted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_OpCodeCompleted& e =
      this->eventHistory_OpCodeCompleted->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event OpCodeCompleted\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: OpCodeError
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_OpCodeError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event OpCodeError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_OpCodeError->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode,
        const Fw::CmdResponse error
    ) const
  {
    ASSERT_GT(this->eventHistory_OpCodeError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event OpCodeError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_OpCodeError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_OpCodeError& e =
      this->eventHistory_OpCodeError->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event OpCodeError\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
    ASSERT_EQ(error, e.error)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument error at index "
      << __index
      << " in history of event OpCodeError\n"
      << "  Expected: " << error << "\n"
      << "  Actual:   " << e.error << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: MalformedCommand
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_MalformedCommand_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_MalformedCommand->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event MalformedCommand\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_MalformedCommand->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_MalformedCommand(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const Fw::DeserialStatus Status
    ) const
  {
    ASSERT_GT(this->eventHistory_MalformedCommand->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event MalformedCommand\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_MalformedCommand->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_MalformedCommand& e =
      this->eventHistory_MalformedCommand->at(__index);
    ASSERT_EQ(Status, e.Status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Status at index "
      << __index
      << " in history of event MalformedCommand\n"
      << "  Expected: " << Status << "\n"
      << "  Actual:   " << e.Status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: InvalidCommand
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_InvalidCommand_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_InvalidCommand->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event InvalidCommand\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_InvalidCommand->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_InvalidCommand(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode
    ) const
  {
    ASSERT_GT(this->eventHistory_InvalidCommand->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event InvalidCommand\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_InvalidCommand->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_InvalidCommand& e =
      this->eventHistory_InvalidCommand->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event InvalidCommand\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: TooManyCommands
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_TooManyCommands_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_TooManyCommands->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event TooManyCommands\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_TooManyCommands->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_TooManyCommands(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode
    ) const
  {
    ASSERT_GT(this->eventHistory_TooManyCommands->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event TooManyCommands\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_TooManyCommands->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_TooManyCommands& e =
      this->eventHistory_TooManyCommands->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event TooManyCommands\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: NoOpReceived
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_NoOpReceived_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_NoOpReceived)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event NoOpReceived\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_NoOpReceived << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: NoOpStringReceived
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_NoOpStringReceived_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_NoOpStringReceived->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event NoOpStringReceived\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_NoOpStringReceived->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_NoOpStringReceived(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const message
    ) const
  {
    ASSERT_GT(this->eventHistory_NoOpStringReceived->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event NoOpStringReceived\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_NoOpStringReceived->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_NoOpStringReceived& e =
      this->eventHistory_NoOpStringReceived->at(__index);
    ASSERT_STREQ(message, e.message.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument message at index "
      << __index
      << " in history of event NoOpStringReceived\n"
      << "  Expected: " << message << "\n"
      << "  Actual:   " << e.message.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: TestCmd1Args
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_TestCmd1Args_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_TestCmd1Args->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event TestCmd1Args\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_TestCmd1Args->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_TestCmd1Args(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const I32 arg1,
        const F32 arg2,
        const U8 arg3
    ) const
  {
    ASSERT_GT(this->eventHistory_TestCmd1Args->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event TestCmd1Args\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_TestCmd1Args->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_TestCmd1Args& e =
      this->eventHistory_TestCmd1Args->at(__index);
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event TestCmd1Args\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event TestCmd1Args\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event TestCmd1Args\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: OpCodeReregistered
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeReregistered_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_OpCodeReregistered->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event OpCodeReregistered\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_OpCodeReregistered->size() << "\n";
  }

  void CommandDispatcherGTestBase ::
    assertEvents_OpCodeReregistered(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 Opcode,
        const I32 port
    ) const
  {
    ASSERT_GT(this->eventHistory_OpCodeReregistered->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event OpCodeReregistered\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_OpCodeReregistered->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_OpCodeReregistered& e =
      this->eventHistory_OpCodeReregistered->at(__index);
    ASSERT_EQ(Opcode, e.Opcode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument Opcode at index "
      << __index
      << " in history of event OpCodeReregistered\n"
      << "  Expected: " << Opcode << "\n"
      << "  Actual:   " << e.Opcode << "\n";
    ASSERT_EQ(port, e.port)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument port at index "
      << __index
      << " in history of event OpCodeReregistered\n"
      << "  Expected: " << port << "\n"
      << "  Actual:   " << e.port << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
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
  // From port: compCmdSend
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assert_from_compCmdSend_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_compCmdSend->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_compCmdSend\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_compCmdSend->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assert_from_pingOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_pingOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_pingOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_pingOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: seqCmdStatus
  // ----------------------------------------------------------------------

  void CommandDispatcherGTestBase ::
    assert_from_seqCmdStatus_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_seqCmdStatus->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_seqCmdStatus\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_seqCmdStatus->size() << "\n";
  }

} // end namespace Svc
