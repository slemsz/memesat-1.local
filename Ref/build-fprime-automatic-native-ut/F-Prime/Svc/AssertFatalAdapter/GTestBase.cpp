// ======================================================================
// \title  AssertFatalAdapter/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for AssertFatalAdapter component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  AssertFatalAdapterGTestBase ::
    AssertFatalAdapterGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        AssertFatalAdapterTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  AssertFatalAdapterGTestBase ::
    ~AssertFatalAdapterGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
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
  // Event: AF_ASSERT_0
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_0_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_0->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_0\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_0->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_0(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_0->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_0\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_0->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_0& e =
      this->eventHistory_AF_ASSERT_0->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_0\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_0\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_1
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_1_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_1->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_1\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_1->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_1(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_1->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_1\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_1->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_1& e =
      this->eventHistory_AF_ASSERT_1->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_1\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_1\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_1\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_2
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_2_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_2->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_2\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_2->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_2(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1,
        const U32 arg2
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_2->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_2\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_2->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_2& e =
      this->eventHistory_AF_ASSERT_2->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_2\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_2\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_2\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event AF_ASSERT_2\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_3
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_3_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_3->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_3\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_3->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_3(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1,
        const U32 arg2,
        const U32 arg3
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_3->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_3\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_3->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_3& e =
      this->eventHistory_AF_ASSERT_3->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_3\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_3\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_3\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event AF_ASSERT_3\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event AF_ASSERT_3\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_4
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_4_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_4->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_4\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_4->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_4(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1,
        const U32 arg2,
        const U32 arg3,
        const U32 arg4
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_4->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_4\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_4->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_4& e =
      this->eventHistory_AF_ASSERT_4->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
    ASSERT_EQ(arg4, e.arg4)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg4 at index "
      << __index
      << " in history of event AF_ASSERT_4\n"
      << "  Expected: " << arg4 << "\n"
      << "  Actual:   " << e.arg4 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_5
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_5_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_5->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_5\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_5->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_5(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1,
        const U32 arg2,
        const U32 arg3,
        const U32 arg4,
        const U32 arg5
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_5->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_5\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_5->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_5& e =
      this->eventHistory_AF_ASSERT_5->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
    ASSERT_EQ(arg4, e.arg4)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg4 at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << arg4 << "\n"
      << "  Actual:   " << e.arg4 << "\n";
    ASSERT_EQ(arg5, e.arg5)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg5 at index "
      << __index
      << " in history of event AF_ASSERT_5\n"
      << "  Expected: " << arg5 << "\n"
      << "  Actual:   " << e.arg5 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_ASSERT_6
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_6_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_ASSERT_6->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_ASSERT_6\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_ASSERT_6->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_ASSERT_6(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 arg1,
        const U32 arg2,
        const U32 arg3,
        const U32 arg4,
        const U32 arg5,
        const U32 arg6
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_ASSERT_6->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_ASSERT_6\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_ASSERT_6->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_ASSERT_6& e =
      this->eventHistory_AF_ASSERT_6->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
    ASSERT_EQ(arg4, e.arg4)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg4 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg4 << "\n"
      << "  Actual:   " << e.arg4 << "\n";
    ASSERT_EQ(arg5, e.arg5)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg5 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg5 << "\n"
      << "  Actual:   " << e.arg5 << "\n";
    ASSERT_EQ(arg6, e.arg6)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg6 at index "
      << __index
      << " in history of event AF_ASSERT_6\n"
      << "  Expected: " << arg6 << "\n"
      << "  Actual:   " << e.arg6 << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: AF_UNEXPECTED_ASSERT
  // ----------------------------------------------------------------------

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_UNEXPECTED_ASSERT_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_AF_UNEXPECTED_ASSERT->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event AF_UNEXPECTED_ASSERT\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_AF_UNEXPECTED_ASSERT->size() << "\n";
  }

  void AssertFatalAdapterGTestBase ::
    assertEvents_AF_UNEXPECTED_ASSERT(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const file,
        const U32 line,
        const U32 numArgs
    ) const
  {
    ASSERT_GT(this->eventHistory_AF_UNEXPECTED_ASSERT->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event AF_UNEXPECTED_ASSERT\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_AF_UNEXPECTED_ASSERT->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_AF_UNEXPECTED_ASSERT& e =
      this->eventHistory_AF_UNEXPECTED_ASSERT->at(__index);
    ASSERT_STREQ(file, e.file.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument file at index "
      << __index
      << " in history of event AF_UNEXPECTED_ASSERT\n"
      << "  Expected: " << file << "\n"
      << "  Actual:   " << e.file.toChar() << "\n";
    ASSERT_EQ(line, e.line)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument line at index "
      << __index
      << " in history of event AF_UNEXPECTED_ASSERT\n"
      << "  Expected: " << line << "\n"
      << "  Actual:   " << e.line << "\n";
    ASSERT_EQ(numArgs, e.numArgs)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument numArgs at index "
      << __index
      << " in history of event AF_UNEXPECTED_ASSERT\n"
      << "  Expected: " << numArgs << "\n"
      << "  Actual:   " << e.numArgs << "\n";
  }

} // end namespace Svc
