// ======================================================================
// \title  StaticMemory/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for StaticMemory component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef StaticMemory_GTEST_BASE_HPP
#define StaticMemory_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

namespace Svc {

  //! \class StaticMemoryGTestBase
  //! \brief Auto-generated base class for StaticMemory component Google Test harness
  //!
  class StaticMemoryGTestBase :
    public StaticMemoryTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object StaticMemoryGTestBase
      //!
      StaticMemoryGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object StaticMemoryGTestBase
      //!
      virtual ~StaticMemoryGTestBase(void);

  };

} // end namespace Svc

#endif
