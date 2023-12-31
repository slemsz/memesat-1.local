//! ======================================================================
//! \title SendBuffer.hpp
//! \brief Header file for SendBuffer rule
//! \author lestarch, bocchino
//! ======================================================================

#ifndef SVC_SEND_BUFFER_HPP
#define SVC_SEND_BUFFER_HPP

#include <FpConfig.hpp>
#include "Fw/Types/StringType.hpp"
#include "STest/STest/Pick/Pick.hpp"
#include "STest/STest/Rule/Rule.hpp"
#include "DeframerTester.hpp"

namespace Svc {

    //! Pack generated frames into a buffer
    //! Send the buffer
    class SendBuffer : public STest::Rule<DeframerTester> {

      public:

        // ----------------------------------------------------------------------
        // Construction
        // ----------------------------------------------------------------------

        //! Constructor
        SendBuffer();

      public:

        // ----------------------------------------------------------------------
        // Public functions
        // ----------------------------------------------------------------------

        //! Precondition
        bool precondition(
            const DeframerTester& state //!< The test state
        );

        //! Action
        void action(
            Svc::DeframerTester &state //!< The test state
        );

      private:

        // ----------------------------------------------------------------------
        // Private helper functions
        // ----------------------------------------------------------------------

        //! Fill the incoming buffer with frame data
        void fillIncomingBuffer(
            Svc::DeframerTester &state //!< The test state
        );

        //! Record a received frame
        void recordReceivedFrame(
            Svc::DeframerTester& state, //!< The test state
            Svc::DeframerTester::UplinkFrame& frame //!< The frame
        );

      private:

        // ----------------------------------------------------------------------
        // Private member variables
        // ----------------------------------------------------------------------

        //! The expected number of com buffers emitted
        U32 expectedComCount;

        //! The expected number of file packet buffers emitted
        U32 expectedBuffCount;

    };

};

#endif
