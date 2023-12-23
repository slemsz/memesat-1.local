// ======================================================================
// \title  FileUplink/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for FileUplink component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef FileUplink_GTEST_BASE_HPP
#define FileUplink_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_FilesReceived_SIZE(size) \
  this->assertTlm_FilesReceived_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_FilesReceived(index, value) \
  this->assertTlm_FilesReceived(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_PacketsReceived_SIZE(size) \
  this->assertTlm_PacketsReceived_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_PacketsReceived(index, value) \
  this->assertTlm_PacketsReceived(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_Warnings_SIZE(size) \
  this->assertTlm_Warnings_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_Warnings(index, value) \
  this->assertTlm_Warnings(__FILE__, __LINE__, index, value)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_BadChecksum_SIZE(size) \
  this->assertEvents_BadChecksum_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_BadChecksum(index, _fileName, _computed, _read) \
  this->assertEvents_BadChecksum(__FILE__, __LINE__, index, _fileName, _computed, _read)

#define ASSERT_EVENTS_FileOpenError_SIZE(size) \
  this->assertEvents_FileOpenError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileOpenError(index, _fileName) \
  this->assertEvents_FileOpenError(__FILE__, __LINE__, index, _fileName)

#define ASSERT_EVENTS_FileReceived_SIZE(size) \
  this->assertEvents_FileReceived_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileReceived(index, _fileName) \
  this->assertEvents_FileReceived(__FILE__, __LINE__, index, _fileName)

#define ASSERT_EVENTS_FileWriteError_SIZE(size) \
  this->assertEvents_FileWriteError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_FileWriteError(index, _fileName) \
  this->assertEvents_FileWriteError(__FILE__, __LINE__, index, _fileName)

#define ASSERT_EVENTS_InvalidReceiveMode_SIZE(size) \
  this->assertEvents_InvalidReceiveMode_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_InvalidReceiveMode(index, _packetType, _mode) \
  this->assertEvents_InvalidReceiveMode(__FILE__, __LINE__, index, _packetType, _mode)

#define ASSERT_EVENTS_PacketOutOfBounds_SIZE(size) \
  this->assertEvents_PacketOutOfBounds_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PacketOutOfBounds(index, _packetIndex, _fileName) \
  this->assertEvents_PacketOutOfBounds(__FILE__, __LINE__, index, _packetIndex, _fileName)

#define ASSERT_EVENTS_PacketOutOfOrder_SIZE(size) \
  this->assertEvents_PacketOutOfOrder_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PacketOutOfOrder(index, _packetIndex, _lastPacketIndex) \
  this->assertEvents_PacketOutOfOrder(__FILE__, __LINE__, index, _packetIndex, _lastPacketIndex)

#define ASSERT_EVENTS_UplinkCanceled_SIZE(size) \
  this->assertEvents_UplinkCanceled_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_DecodeError_SIZE(size) \
  this->assertEvents_DecodeError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_DecodeError(index, _status) \
  this->assertEvents_DecodeError(__FILE__, __LINE__, index, _status)

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferSendOut_SIZE(size) \
  this->assert_from_bufferSendOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_bufferSendOut(index, _fwBuffer) \
  { \
    ASSERT_GT(this->fromPortHistory_bufferSendOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_bufferSendOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_bufferSendOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_bufferSendOut& _e = \
      this->fromPortHistory_bufferSendOut->at(index); \
    ASSERT_EQ(_fwBuffer, _e.fwBuffer) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument fwBuffer at index " \
    << index \
    << " in history of from_bufferSendOut\n" \
    << "  Expected: " << _fwBuffer << "\n" \
    << "  Actual:   " << _e.fwBuffer << "\n"; \
  }

#define ASSERT_from_pingOut_SIZE(size) \
  this->assert_from_pingOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_pingOut(index, _key) \
  { \
    ASSERT_GT(this->fromPortHistory_pingOut->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_pingOut\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_pingOut->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_pingOut& _e = \
      this->fromPortHistory_pingOut->at(index); \
    ASSERT_EQ(_key, _e.key) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument key at index " \
    << index \
    << " in history of from_pingOut\n" \
    << "  Expected: " << _key << "\n" \
    << "  Actual:   " << _e.key << "\n"; \
  }

namespace Svc {

  //! \class FileUplinkGTestBase
  //! \brief Auto-generated base class for FileUplink component Google Test harness
  //!
  class FileUplinkGTestBase :
    public FileUplinkTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object FileUplinkGTestBase
      //!
      FileUplinkGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object FileUplinkGTestBase
      //!
      virtual ~FileUplinkGTestBase(void);

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
      // Channel: FilesReceived
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_FilesReceived_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_FilesReceived(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: PacketsReceived
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_PacketsReceived_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_PacketsReceived(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32& val /*!< The channel value*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Channel: Warnings
      // ----------------------------------------------------------------------

      //! Assert telemetry value in history at index
      //!
      void assertTlm_Warnings_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertTlm_Warnings(
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
      // Event: BadChecksum
      // ----------------------------------------------------------------------

      void assertEvents_BadChecksum_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_BadChecksum(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName, /*!< The file name*/
          const U32 computed, /*!< The computed value*/
          const U32 read /*!< The value read*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileOpenError
      // ----------------------------------------------------------------------

      void assertEvents_FileOpenError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileOpenError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileReceived
      // ----------------------------------------------------------------------

      void assertEvents_FileReceived_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileReceived(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: FileWriteError
      // ----------------------------------------------------------------------

      void assertEvents_FileWriteError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_FileWriteError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: InvalidReceiveMode
      // ----------------------------------------------------------------------

      void assertEvents_InvalidReceiveMode_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_InvalidReceiveMode(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 packetType, /*!< The type of the packet received*/
          const U32 mode /*!< The receive mode*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PacketOutOfBounds
      // ----------------------------------------------------------------------

      void assertEvents_PacketOutOfBounds_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PacketOutOfBounds(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 packetIndex, /*!< The sequence index of the packet*/
          const char *const fileName /*!< The name of the file*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PacketOutOfOrder
      // ----------------------------------------------------------------------

      void assertEvents_PacketOutOfOrder_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PacketOutOfOrder(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 packetIndex, /*!< The sequence index of the out-of-order packet*/
          const U32 lastPacketIndex /*!< The sequence index of the last packet received before the out-of-order packet*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: UplinkCanceled
      // ----------------------------------------------------------------------

      void assertEvents_UplinkCanceled_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: DecodeError
      // ----------------------------------------------------------------------

      void assertEvents_DecodeError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_DecodeError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const I32 status /*!< The sequence index of the out-of-order packet*/
      ) const;

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
      // From port: bufferSendOut
      // ----------------------------------------------------------------------

      void assert_from_bufferSendOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: pingOut
      // ----------------------------------------------------------------------

      void assert_from_pingOut_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

  };

} // end namespace Svc

#endif
