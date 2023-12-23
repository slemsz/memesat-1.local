// ======================================================================
// \title  FileDownlink/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for FileDownlink component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  FileDownlinkGTestBase ::
    FileDownlinkGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        FileDownlinkTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  FileDownlinkGTestBase ::
    ~FileDownlinkGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Commands
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
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

  void FileDownlinkGTestBase ::
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

  void FileDownlinkGTestBase ::
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
  // Channel: FilesSent
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertTlm_FilesSent_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_FilesSent->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel FilesSent\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_FilesSent->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertTlm_FilesSent(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_FilesSent->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel FilesSent\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_FilesSent->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_FilesSent& e =
      this->tlmHistory_FilesSent->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel FilesSent\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: PacketsSent
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertTlm_PacketsSent_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PacketsSent->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PacketsSent\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PacketsSent->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertTlm_PacketsSent(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PacketsSent->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PacketsSent\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PacketsSent->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PacketsSent& e =
      this->tlmHistory_PacketsSent->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PacketsSent\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: Warnings
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertTlm_Warnings_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_Warnings->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel Warnings\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_Warnings->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertTlm_Warnings(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_Warnings->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel Warnings\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_Warnings->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_Warnings& e =
      this->tlmHistory_Warnings->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel Warnings\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
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
  // Event: FileOpenError
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_FileOpenError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileOpenError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileOpenError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileOpenError->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_FileOpenError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_FileOpenError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileOpenError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileOpenError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileOpenError& e =
      this->eventHistory_FileOpenError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileOpenError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileReadError
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_FileReadError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileReadError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileReadError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileReadError->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_FileReadError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const I32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_FileReadError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileReadError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileReadError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileReadError& e =
      this->eventHistory_FileReadError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileReadError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event FileReadError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileSent
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_FileSent_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileSent->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileSent\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileSent->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_FileSent(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_FileSent->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileSent\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileSent->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileSent& e =
      this->eventHistory_FileSent->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event FileSent\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event FileSent\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkCanceled
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkCanceled_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DownlinkCanceled->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DownlinkCanceled\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DownlinkCanceled->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkCanceled(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_DownlinkCanceled->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DownlinkCanceled\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DownlinkCanceled->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DownlinkCanceled& e =
      this->eventHistory_DownlinkCanceled->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event DownlinkCanceled\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event DownlinkCanceled\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkTimeout
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkTimeout_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DownlinkTimeout->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DownlinkTimeout\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DownlinkTimeout->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkTimeout(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_DownlinkTimeout->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DownlinkTimeout\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DownlinkTimeout->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DownlinkTimeout& e =
      this->eventHistory_DownlinkTimeout->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event DownlinkTimeout\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event DownlinkTimeout\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkPartialWarning
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkPartialWarning_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DownlinkPartialWarning->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DownlinkPartialWarning\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DownlinkPartialWarning->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkPartialWarning(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 startOffset,
        const U32 length,
        const U32 filesize,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_DownlinkPartialWarning->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DownlinkPartialWarning\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DownlinkPartialWarning->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DownlinkPartialWarning& e =
      this->eventHistory_DownlinkPartialWarning->at(__index);
    ASSERT_EQ(startOffset, e.startOffset)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument startOffset at index "
      << __index
      << " in history of event DownlinkPartialWarning\n"
      << "  Expected: " << startOffset << "\n"
      << "  Actual:   " << e.startOffset << "\n";
    ASSERT_EQ(length, e.length)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument length at index "
      << __index
      << " in history of event DownlinkPartialWarning\n"
      << "  Expected: " << length << "\n"
      << "  Actual:   " << e.length << "\n";
    ASSERT_EQ(filesize, e.filesize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filesize at index "
      << __index
      << " in history of event DownlinkPartialWarning\n"
      << "  Expected: " << filesize << "\n"
      << "  Actual:   " << e.filesize << "\n";
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event DownlinkPartialWarning\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event DownlinkPartialWarning\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DownlinkPartialFail
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkPartialFail_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DownlinkPartialFail->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DownlinkPartialFail\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DownlinkPartialFail->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_DownlinkPartialFail(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const char *const destFileName,
        const U32 startOffset,
        const U32 filesize
    ) const
  {
    ASSERT_GT(this->eventHistory_DownlinkPartialFail->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DownlinkPartialFail\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DownlinkPartialFail->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DownlinkPartialFail& e =
      this->eventHistory_DownlinkPartialFail->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event DownlinkPartialFail\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event DownlinkPartialFail\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
    ASSERT_EQ(startOffset, e.startOffset)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument startOffset at index "
      << __index
      << " in history of event DownlinkPartialFail\n"
      << "  Expected: " << startOffset << "\n"
      << "  Actual:   " << e.startOffset << "\n";
    ASSERT_EQ(filesize, e.filesize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument filesize at index "
      << __index
      << " in history of event DownlinkPartialFail\n"
      << "  Expected: " << filesize << "\n"
      << "  Actual:   " << e.filesize << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: SendDataFail
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_SendDataFail_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SendDataFail->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SendDataFail\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SendDataFail->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_SendDataFail(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const sourceFileName,
        const U32 byteOffset
    ) const
  {
    ASSERT_GT(this->eventHistory_SendDataFail->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SendDataFail\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_SendDataFail->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_SendDataFail& e =
      this->eventHistory_SendDataFail->at(__index);
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event SendDataFail\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_EQ(byteOffset, e.byteOffset)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument byteOffset at index "
      << __index
      << " in history of event SendDataFail\n"
      << "  Expected: " << byteOffset << "\n"
      << "  Actual:   " << e.byteOffset << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: SendStarted
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assertEvents_SendStarted_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SendStarted->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SendStarted\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SendStarted->size() << "\n";
  }

  void FileDownlinkGTestBase ::
    assertEvents_SendStarted(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 fileSize,
        const char *const sourceFileName,
        const char *const destFileName
    ) const
  {
    ASSERT_GT(this->eventHistory_SendStarted->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SendStarted\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_SendStarted->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_SendStarted& e =
      this->eventHistory_SendStarted->at(__index);
    ASSERT_EQ(fileSize, e.fileSize)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileSize at index "
      << __index
      << " in history of event SendStarted\n"
      << "  Expected: " << fileSize << "\n"
      << "  Actual:   " << e.fileSize << "\n";
    ASSERT_STREQ(sourceFileName, e.sourceFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument sourceFileName at index "
      << __index
      << " in history of event SendStarted\n"
      << "  Expected: " << sourceFileName << "\n"
      << "  Actual:   " << e.sourceFileName.toChar() << "\n";
    ASSERT_STREQ(destFileName, e.destFileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument destFileName at index "
      << __index
      << " in history of event SendStarted\n"
      << "  Expected: " << destFileName << "\n"
      << "  Actual:   " << e.destFileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
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
  // From port: FileComplete
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assert_from_FileComplete_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_FileComplete->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_FileComplete\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_FileComplete->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: bufferSendOut
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
    assert_from_bufferSendOut_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->fromPortHistory_bufferSendOut->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for from_bufferSendOut\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->fromPortHistory_bufferSendOut->size() << "\n";
  }

  // ----------------------------------------------------------------------
  // From port: pingOut
  // ----------------------------------------------------------------------

  void FileDownlinkGTestBase ::
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

} // end namespace Svc
