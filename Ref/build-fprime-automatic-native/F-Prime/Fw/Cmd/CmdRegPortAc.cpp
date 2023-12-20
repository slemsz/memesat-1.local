// ======================================================================
// \title  CmdRegPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for CmdReg port
// ======================================================================

#include "F-Prime/Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"

namespace Fw {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class CmdRegPortBuffer : public Fw::SerializeBufferBase {

      public:

        NATIVE_UINT_TYPE getBuffCapacity() const {
          return InputCmdRegPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputCmdRegPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputCmdRegPort ::
    InputCmdRegPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputCmdRegPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputCmdRegPort ::
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

  void InputCmdRegPort ::
    invoke(FwOpcodeType opCode)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, opCode);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputCmdRegPort ::
    invokeSerial(Fw::SerializeBufferBase& _buffer)
  {
    Fw::SerializeStatus _status;

#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    FwOpcodeType opCode;
    _status = _buffer.deserialize(opCode);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, opCode);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputCmdRegPort ::
    OutputCmdRegPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputCmdRegPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputCmdRegPort ::
    addCallPort(InputCmdRegPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputCmdRegPort ::
    invoke(FwOpcodeType opCode)
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(opCode);
    }
    else {
      Fw::SerializeStatus _status;
      CmdRegPortBuffer _buffer;

      _status = _buffer.serialize(opCode);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(opCode);
#endif
  }

}
