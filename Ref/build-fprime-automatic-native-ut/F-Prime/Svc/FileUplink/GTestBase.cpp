// ======================================================================
// \title  FileUplink/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for FileUplink component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include "GTestBase.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  FileUplinkGTestBase ::
    FileUplinkGTestBase(
        const char *const compName,
        const U32 maxHistorySize
    ) :
        FileUplinkTesterBase (
            compName,
            maxHistorySize
        )
  {

  }

  FileUplinkGTestBase ::
    ~FileUplinkGTestBase()
  {

  }

  // ----------------------------------------------------------------------
  // Telemetry
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
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
  // Channel: FilesReceived
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertTlm_FilesReceived_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_FilesReceived->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel FilesReceived\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_FilesReceived->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertTlm_FilesReceived(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_FilesReceived->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel FilesReceived\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_FilesReceived->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_FilesReceived& e =
      this->tlmHistory_FilesReceived->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel FilesReceived\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: PacketsReceived
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertTlm_PacketsReceived_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(this->tlmHistory_PacketsReceived->size(), size)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for telemetry channel PacketsReceived\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->tlmHistory_PacketsReceived->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertTlm_PacketsReceived(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32& val
    )
    const
  {
    ASSERT_LT(__index, this->tlmHistory_PacketsReceived->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of telemetry channel PacketsReceived\n"
      << "  Expected: Less than size of history ("
      << this->tlmHistory_PacketsReceived->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const TlmEntry_PacketsReceived& e =
      this->tlmHistory_PacketsReceived->at(__index);
    ASSERT_EQ(val, e.arg)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value at index "
      << __index
      << " on telemetry channel PacketsReceived\n"
      << "  Expected: " << val << "\n"
      << "  Actual:   " << e.arg << "\n";
  }

  // ----------------------------------------------------------------------
  // Channel: Warnings
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
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

  void FileUplinkGTestBase ::
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

  void FileUplinkGTestBase ::
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
  // Event: BadChecksum
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_BadChecksum_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_BadChecksum->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event BadChecksum\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_BadChecksum->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_BadChecksum(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName,
        const U32 computed,
        const U32 read
    ) const
  {
    ASSERT_GT(this->eventHistory_BadChecksum->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event BadChecksum\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_BadChecksum->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_BadChecksum& e =
      this->eventHistory_BadChecksum->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event BadChecksum\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
    ASSERT_EQ(computed, e.computed)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument computed at index "
      << __index
      << " in history of event BadChecksum\n"
      << "  Expected: " << computed << "\n"
      << "  Actual:   " << e.computed << "\n";
    ASSERT_EQ(read, e.read)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument read at index "
      << __index
      << " in history of event BadChecksum\n"
      << "  Expected: " << read << "\n"
      << "  Actual:   " << e.read << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileOpenError
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
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

  void FileUplinkGTestBase ::
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
  // Event: FileReceived
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_FileReceived_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileReceived->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileReceived\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileReceived->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_FileReceived(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_FileReceived->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileReceived\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileReceived->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileReceived& e =
      this->eventHistory_FileReceived->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileReceived\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: FileWriteError
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_FileWriteError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_FileWriteError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event FileWriteError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_FileWriteError->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_FileWriteError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_FileWriteError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event FileWriteError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_FileWriteError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_FileWriteError& e =
      this->eventHistory_FileWriteError->at(__index);
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event FileWriteError\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: InvalidReceiveMode
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_InvalidReceiveMode_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_InvalidReceiveMode->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event InvalidReceiveMode\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_InvalidReceiveMode->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_InvalidReceiveMode(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 packetType,
        const U32 mode
    ) const
  {
    ASSERT_GT(this->eventHistory_InvalidReceiveMode->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event InvalidReceiveMode\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_InvalidReceiveMode->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_InvalidReceiveMode& e =
      this->eventHistory_InvalidReceiveMode->at(__index);
    ASSERT_EQ(packetType, e.packetType)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument packetType at index "
      << __index
      << " in history of event InvalidReceiveMode\n"
      << "  Expected: " << packetType << "\n"
      << "  Actual:   " << e.packetType << "\n";
    ASSERT_EQ(mode, e.mode)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument mode at index "
      << __index
      << " in history of event InvalidReceiveMode\n"
      << "  Expected: " << mode << "\n"
      << "  Actual:   " << e.mode << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PacketOutOfBounds
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_PacketOutOfBounds_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PacketOutOfBounds->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PacketOutOfBounds\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PacketOutOfBounds->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_PacketOutOfBounds(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 packetIndex,
        const char *const fileName
    ) const
  {
    ASSERT_GT(this->eventHistory_PacketOutOfBounds->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PacketOutOfBounds\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PacketOutOfBounds->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PacketOutOfBounds& e =
      this->eventHistory_PacketOutOfBounds->at(__index);
    ASSERT_EQ(packetIndex, e.packetIndex)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument packetIndex at index "
      << __index
      << " in history of event PacketOutOfBounds\n"
      << "  Expected: " << packetIndex << "\n"
      << "  Actual:   " << e.packetIndex << "\n";
    ASSERT_STREQ(fileName, e.fileName.toChar())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument fileName at index "
      << __index
      << " in history of event PacketOutOfBounds\n"
      << "  Expected: " << fileName << "\n"
      << "  Actual:   " << e.fileName.toChar() << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: PacketOutOfOrder
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_PacketOutOfOrder_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_PacketOutOfOrder->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event PacketOutOfOrder\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_PacketOutOfOrder->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_PacketOutOfOrder(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const U32 packetIndex,
        const U32 lastPacketIndex
    ) const
  {
    ASSERT_GT(this->eventHistory_PacketOutOfOrder->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event PacketOutOfOrder\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_PacketOutOfOrder->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_PacketOutOfOrder& e =
      this->eventHistory_PacketOutOfOrder->at(__index);
    ASSERT_EQ(packetIndex, e.packetIndex)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument packetIndex at index "
      << __index
      << " in history of event PacketOutOfOrder\n"
      << "  Expected: " << packetIndex << "\n"
      << "  Actual:   " << e.packetIndex << "\n";
    ASSERT_EQ(lastPacketIndex, e.lastPacketIndex)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument lastPacketIndex at index "
      << __index
      << " in history of event PacketOutOfOrder\n"
      << "  Expected: " << lastPacketIndex << "\n"
      << "  Actual:   " << e.lastPacketIndex << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: UplinkCanceled
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_UplinkCanceled_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize_UplinkCanceled)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event UplinkCanceled\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize_UplinkCanceled << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: DecodeError
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
    assertEvents_DecodeError_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_DecodeError->size())
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event DecodeError\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_DecodeError->size() << "\n";
  }

  void FileUplinkGTestBase ::
    assertEvents_DecodeError(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const I32 status
    ) const
  {
    ASSERT_GT(this->eventHistory_DecodeError->size(), __index)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event DecodeError\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_DecodeError->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_DecodeError& e =
      this->eventHistory_DecodeError->at(__index);
    ASSERT_EQ(status, e.status)
      << "\n"
      << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument status at index "
      << __index
      << " in history of event DecodeError\n"
      << "  Expected: " << status << "\n"
      << "  Actual:   " << e.status << "\n";
  }

  // ----------------------------------------------------------------------
  // From ports
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
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
  // From port: bufferSendOut
  // ----------------------------------------------------------------------

  void FileUplinkGTestBase ::
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

  void FileUplinkGTestBase ::
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
