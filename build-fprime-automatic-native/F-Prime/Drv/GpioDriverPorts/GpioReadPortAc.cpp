// ======================================================================
// \title  GpioReadPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for GpioRead port
// ======================================================================

#include "F-Prime/Drv/GpioDriverPorts/GpioReadPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"

namespace Drv {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class GpioReadPortBuffer : public Fw::SerializeBufferBase {

      public:

        NATIVE_UINT_TYPE getBuffCapacity() const {
          return InputGpioReadPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputGpioReadPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputGpioReadPort ::
    InputGpioReadPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputGpioReadPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputGpioReadPort ::
    addCallComp(
        Fw::PassiveComponentBase* callComp,
        CompFuncPtr funcPtr
    )
  {
    FW_ASSERT(callComp != nullptr);
    FW_ASSERT(funcPtr != nullptr);

    this->m_comp = callComp;
    this->m_func = funcPtr;
    this->m_connObj = callComp;
  }

  void InputGpioReadPort ::
    invoke(Fw::Logic& state)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, state);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputGpioReadPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    Fw::Logic state;
    _status = _buffer.deserialize(state);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, state);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputGpioReadPort ::
    OutputGpioReadPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputGpioReadPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputGpioReadPort ::
    addCallPort(InputGpioReadPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputGpioReadPort ::
    invoke(Fw::Logic& state)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(state);
    }
    else {
      Fw::SerializeStatus _status;
      GpioReadPortBuffer _buffer;

      _status = _buffer.serialize(state);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(state);
#endif
  }

}