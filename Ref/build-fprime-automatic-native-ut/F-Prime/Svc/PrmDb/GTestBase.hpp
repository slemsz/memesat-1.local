// ======================================================================
// \title  PrmDb/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for PrmDb component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef PrmDb_GTEST_BASE_HPP
#define PrmDb_GTEST_BASE_HPP

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

#define ASSERT_EVENTS_PrmIdNotFound_SIZE(size) \
  this->assertEvents_PrmIdNotFound_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmIdNotFound(index, _Id) \
  this->assertEvents_PrmIdNotFound(__FILE__, __LINE__, index, _Id)

#define ASSERT_EVENTS_PrmIdUpdated_SIZE(size) \
  this->assertEvents_PrmIdUpdated_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmIdUpdated(index, _Id) \
  this->assertEvents_PrmIdUpdated(__FILE__, __LINE__, index, _Id)

#define ASSERT_EVENTS_PrmDbFull_SIZE(size) \
  this->assertEvents_PrmDbFull_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmDbFull(index, _Id) \
  this->assertEvents_PrmDbFull(__FILE__, __LINE__, index, _Id)

#define ASSERT_EVENTS_PrmIdAdded_SIZE(size) \
  this->assertEvents_PrmIdAdded_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmIdAdded(index, _Id) \
  this->assertEvents_PrmIdAdded(__FILE__, __LINE__, index, _Id)

#define ASSERT_EVENTS_PrmFileWriteError_SIZE(size) \
  this->assertEvents_PrmFileWriteError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmFileWriteError(index, _stage, _record, _error) \
  this->assertEvents_PrmFileWriteError(__FILE__, __LINE__, index, _stage, _record, _error)

#define ASSERT_EVENTS_PrmFileSaveComplete_SIZE(size) \
  this->assertEvents_PrmFileSaveComplete_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmFileSaveComplete(index, _records) \
  this->assertEvents_PrmFileSaveComplete(__FILE__, __LINE__, index, _records)

#define ASSERT_EVENTS_PrmFileReadError_SIZE(size) \
  this->assertEvents_PrmFileReadError_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmFileReadError(index, _stage, _record, _error) \
  this->assertEvents_PrmFileReadError(__FILE__, __LINE__, index, _stage, _record, _error)

#define ASSERT_EVENTS_PrmFileLoadComplete_SIZE(size) \
  this->assertEvents_PrmFileLoadComplete_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_PrmFileLoadComplete(index, _records) \
  this->assertEvents_PrmFileLoadComplete(__FILE__, __LINE__, index, _records)

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

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

  //! \class PrmDbGTestBase
  //! \brief Auto-generated base class for PrmDb component Google Test harness
  //!
  class PrmDbGTestBase :
    public PrmDbTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object PrmDbGTestBase
      //!
      PrmDbGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object PrmDbGTestBase
      //!
      virtual ~PrmDbGTestBase(void);

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
      // Event: PrmIdNotFound
      // ----------------------------------------------------------------------

      void assertEvents_PrmIdNotFound_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmIdNotFound(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 Id /*!< The parameter ID*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmIdUpdated
      // ----------------------------------------------------------------------

      void assertEvents_PrmIdUpdated_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmIdUpdated(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 Id /*!< The parameter ID*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmDbFull
      // ----------------------------------------------------------------------

      void assertEvents_PrmDbFull_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmDbFull(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 Id /*!< The parameter ID*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmIdAdded
      // ----------------------------------------------------------------------

      void assertEvents_PrmIdAdded_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmIdAdded(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 Id /*!< The parameter ID*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmFileWriteError
      // ----------------------------------------------------------------------

      void assertEvents_PrmFileWriteError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmFileWriteError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const Svc::PrmDb_PrmWriteError stage, /*!< The write stage*/
          const I32 record, /*!< The record that had the failure*/
          const I32 error /*!< The error code*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmFileSaveComplete
      // ----------------------------------------------------------------------

      void assertEvents_PrmFileSaveComplete_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmFileSaveComplete(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 records /*!< The number of records saved*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmFileReadError
      // ----------------------------------------------------------------------

      void assertEvents_PrmFileReadError_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmFileReadError(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const Svc::PrmDb_PrmReadError stage, /*!< The read stage*/
          const I32 record, /*!< The record that had the failure*/
          const I32 error /*!< The error code*/
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Event: PrmFileLoadComplete
      // ----------------------------------------------------------------------

      void assertEvents_PrmFileLoadComplete_size(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 size /*!< The asserted size*/
      ) const;

      void assertEvents_PrmFileLoadComplete(
          const char *const __callSiteFileName, /*!< The name of the file containing the call site*/
          const U32 __callSiteLineNumber, /*!< The line number of the call site*/
          const U32 __index, /*!< The index*/
          const U32 records /*!< The number of records loaded*/
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
