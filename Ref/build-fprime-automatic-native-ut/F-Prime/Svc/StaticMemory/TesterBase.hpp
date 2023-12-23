// ======================================================================
// \title  StaticMemory/test/ut/TesterBase.hpp
// \author Auto-generated
// \brief  hpp file for StaticMemory component test harness base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef StaticMemory_TESTER_BASE_HPP
#define StaticMemory_TESTER_BASE_HPP

#include <Svc/StaticMemory/StaticMemoryComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#include <Fw/Comp/PassiveComponentBase.hpp>
#include <cstdio>
#include <Fw/Port/InputSerializePort.hpp>

namespace Svc {

  //! \class StaticMemoryTesterBase
  //! \brief Auto-generated base class for StaticMemory component test harness
  //!
  class StaticMemoryTesterBase :
    public Fw::PassiveComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Initialization
      // ----------------------------------------------------------------------

      //! Initialize object StaticMemoryTesterBase
      //!
      virtual void init(
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

    public:

      // ----------------------------------------------------------------------
      // Connectors for 'to' ports
      // Connect these output ports to the input ports under test
      // ----------------------------------------------------------------------

      //! Connect bufferAllocate to to_bufferAllocate[portNum]
      //!
      void connect_to_bufferAllocate(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputBufferGetPort *const bufferAllocate /*!< The port*/
      );

      //! Connect bufferDeallocate to to_bufferDeallocate[portNum]
      //!
      void connect_to_bufferDeallocate(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::InputBufferSendPort *const bufferDeallocate /*!< The port*/
      );

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object StaticMemoryTesterBase
      //!
      StaticMemoryTesterBase(
          const char *const compName, /*!< The component name*/
          const U32 maxHistorySize /*!< The maximum size of each history*/
      );

      //! Destroy object StaticMemoryTesterBase
      //!
      virtual ~StaticMemoryTesterBase();

    protected:

      // ----------------------------------------------------------------------
      // Invocation functions for to ports
      // ----------------------------------------------------------------------

      //! Invoke the to port connected to bufferAllocate
      //!
      Fw::Buffer invoke_to_bufferAllocate(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 size 
      );

      //! Invoke the to port connected to bufferDeallocate
      //!
      void invoke_to_bufferDeallocate(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          Fw::Buffer &fwBuffer 
      );

    public:

      // ----------------------------------------------------------------------
      // Getters for port counts
      // ----------------------------------------------------------------------

      //! Get the number of to_bufferAllocate ports
      //!
      //! \return The number of to_bufferAllocate ports
      //!
      NATIVE_INT_TYPE getNum_to_bufferAllocate() const;

      //! Get the number of to_bufferDeallocate ports
      //!
      //! \return The number of to_bufferDeallocate ports
      //!
      NATIVE_INT_TYPE getNum_to_bufferDeallocate() const;

    protected:

      // ----------------------------------------------------------------------
      // Connection status for to ports
      // ----------------------------------------------------------------------

      //! Check whether port is connected
      //!
      //! Whether to_bufferAllocate[portNum] is connected
      //!
      bool isConnected_to_bufferAllocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Check whether port is connected
      //!
      //! Whether to_bufferDeallocate[portNum] is connected
      //!
      bool isConnected_to_bufferDeallocate(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

    private:

      // ----------------------------------------------------------------------
      // To ports
      // ----------------------------------------------------------------------

      //! To port connected to bufferAllocate
      //!
      Fw::OutputBufferGetPort m_to_bufferAllocate[4];

      //! To port connected to bufferDeallocate
      //!
      Fw::OutputBufferSendPort m_to_bufferDeallocate[4];

  };

} // end namespace Svc

#endif
