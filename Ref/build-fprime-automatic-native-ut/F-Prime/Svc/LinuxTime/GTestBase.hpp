// ======================================================================
// \title  Time/test/ut/GTestBase.hpp
// \author Auto-generated
// \brief  hpp file for Time component Google Test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef Time_GTEST_BASE_HPP
#define Time_GTEST_BASE_HPP

#include "TesterBase.hpp"
#include "gtest/gtest.h"

namespace Svc {

  //! \class TimeGTestBase
  //! \brief Auto-generated base class for Time component Google Test harness
  //!
  class TimeGTestBase :
    public TimeTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object TimeGTestBase
      //!
      TimeGTestBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object TimeGTestBase
      //!
      virtual ~TimeGTestBase(void);

  };

} // end namespace Svc

#endif
