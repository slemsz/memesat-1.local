// ======================================================================
// \title  ActiveLogger/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for ActiveLogger component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef ActiveLogger_GTEST_BASE_HPP
#define ActiveLogger_GTEST_BASE_HPP

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
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_SEVERITY_FILTER_STATE_SIZE(size) \
  this->assertEvents_SEVERITY_FILTER_STATE_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_SEVERITY_FILTER_STATE(index, _severity, _enabled) \
  this->assertEvents_SEVERITY_FILTER_STATE(__FILE__, __LINE__, index, _severity, _enabled)

#define ASSERT_EVENTS_ID_FILTER_ENABLED_SIZE(size) \
  this->assertEvents_ID_FILTER_ENABLED_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ID_FILTER_ENABLED(index, _ID) \
  this->assertEvents_ID_FILTER_ENABLED(__FILE__, __LINE__, index, _ID)

#define ASSERT_EVENTS_ID_FILTER_LIST_FULL_SIZE(size) \
  this->assertEvents_ID_FILTER_LIST_FULL_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ID_FILTER_LIST_FULL(index, _ID) \
  this->assertEvents_ID_FILTER_LIST_FULL(__FILE__, __LINE__, index, _ID)

#define ASSERT_EVENTS_ID_FILTER_REMOVED_SIZE(size) \
  this->assertEvents_ID_FILTER_REMOVED_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ID_FILTER_REMOVED(index, _ID) \
  this->assertEvents_ID_FILTER_REMOVED(__FILE__, __LINE__, index, _ID)

#define ASSERT_EVENTS_ID_FILTER_NOT_FOUND_SIZE(size) \
  this->assertEvents_ID_FILTER_NOT_FOUND_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_ID_FILTER_NOT_FOUND(index, _ID) \
  this->assertEvents_ID_FILTER_NOT_FOUND(__FILE__, __LINE__, index, _ID)

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_FatalAnnounce_SIZE(size) \
  this->assert_from_FatalAnnounce_size(__FILE__, __LINE__, size)

#define ASSERT_from_FatalAnnounce(index, _Id) \
  { \
    ASSERT_GT(this->fromPortHistory_FatalAnnounce->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_FatalAnnounce\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_FatalAnnounce->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_FatalAnnounce& _e = \
      this->fromPortHistory_FatalAnnounce->at(index); \
    ASSERT_EQ(_Id, _e.Id) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument Id at index " \
    << index \
    << " in history of from_FatalAnnounce\n" \
    << "  Expected: " << _Id << "\n" \
    << "  Actual:   " << _e.Id << "\n"; \
  }

#define ASSERT_from_PktSend_SIZE(size) \
  this->assert_from_PktSend_size(__FILE__, __LINE__, size)

#define ASSERT_from_PktSend(index, _data, _context) \
  { \
    ASSERT_GT(this->fromPortHistory_PktSend->size(), static_cast<U32>(index)) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Index into history of from_PktSend\n" \
    << "  Expected: Less than size of history (" \
    << this->fromPortHistory_PktSend->size() << ")\n" \
    << "  Actual:   " << index << "\n"; \
    const FromPortEntry_PktSend& _e = \
      this->fromPortHistory_PktSend->at(index); \
    ASSERT_EQ(_data, _e.data) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument data at index " \
    << index \
    << " in history of from_PktSend\n" \
    << "  Expected: " << _data << "\n" \
    << "  Actual:   " << _e.data << "\n"; \
    ASSERT_EQ(_context, _e.context) \
    << "\n" \
    << __FILE__ << ":" << __LINE__ << "\n" \
    << "  Value:    Value of argument context at index " \
    << index \
    << " in history of from_PktSend\n" \
    << "  Expected: " << _context << "\n" \
    << "  Actual:   " << _e.context << "\n"; \
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

  //! \class ActiveLoggerGTestBase
  //! \brief Auto-generated base class for ActiveLogger component Google Test harness
  //!
  class ActiveLoggerGTestBase :
    public ActiveLoggerTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object ActiveLoggerGTestBase
      //!
      ActiveLoggerGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object ActiveLoggerGTestBase
      //!
      virtual ~ActiveLoggerGTestBase(void);

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
      // Events
      // ----------------------------------------------------------------------

      void assertEvents_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: SEVERITY_FILTER_STATE
      // ----------------------------------------------------------------------

      void assertEvents_SEVERITY_FILTER_STATE_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_SEVERITY_FILTER_STATE(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const Svc::ActiveLogger_FilterSeverity severity, /*!< The severity level*/
          const bool enabled 
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ID_FILTER_ENABLED
      // ----------------------------------------------------------------------

      void assertEvents_ID_FILTER_ENABLED_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ID_FILTER_ENABLED(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 ID /*!< The ID filtered*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ID_FILTER_LIST_FULL
      // ----------------------------------------------------------------------

      void assertEvents_ID_FILTER_LIST_FULL_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ID_FILTER_LIST_FULL(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 ID /*!< The ID filtered*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ID_FILTER_REMOVED
      // ----------------------------------------------------------------------

      void assertEvents_ID_FILTER_REMOVED_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ID_FILTER_REMOVED(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 ID /*!< The ID removed*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: ID_FILTER_NOT_FOUND
      // ----------------------------------------------------------------------

      void assertEvents_ID_FILTER_NOT_FOUND_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_ID_FILTER_NOT_FOUND(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 ID /*!< The ID removed*/
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
      // From port: FatalAnnounce
      // ----------------------------------------------------------------------

      void assert_from_FatalAnnounce_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // From port: PktSend
      // ----------------------------------------------------------------------

      void assert_from_PktSend_size(
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
