// ======================================================================
// \title  CmdPortAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Cmd port
// ======================================================================

#include "F-Prime/Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"

namespace Fw {

  namespace {

    // ----------------------------------------------------------------------
    // Port buffer class
    // ----------------------------------------------------------------------

    class CmdPortBuffer : public Fw::SerializeBufferBase {

      public:

        NATIVE_UINT_TYPE getBuffCapacity() const {
          return InputCmdPort::SERIALIZED_SIZE;
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:

        U8 m_buff[InputCmdPort::SERIALIZED_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Input Port Member functions
  // ----------------------------------------------------------------------

  InputCmdPort ::
    InputCmdPort() :
      Fw::InputPortBase(),
      m_func(nullptr)
  {

  }

  void InputCmdPort ::
    init()
  {
    Fw::InputPortBase::init();
  }

  void InputCmdPort ::
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

  void InputCmdPort ::
    invoke(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer& args
    )
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

    FW_ASSERT(this->m_comp != nullptr);
    FW_ASSERT(this->m_func != nullptr);

    return this->m_func(this->m_comp, this->m_portNum, opCode, cmdSeq, args);
  }

#if FW_PORT_SERIALIZATION == 1

  Fw::SerializeStatus InputCmdPort ::
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

    U32 cmdSeq;
    _status = _buffer.deserialize(cmdSeq);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    Fw::CmdArgBuffer args;
    _status = _buffer.deserialize(args);
    if (_status != Fw::FW_SERIALIZE_OK) {
      return _status;
    }

    this->m_func(this->m_comp, this->m_portNum, opCode, cmdSeq, args);

    return Fw::FW_SERIALIZE_OK;
  }

#endif

  // ----------------------------------------------------------------------
  // Output Port Member functions
  // ----------------------------------------------------------------------

  OutputCmdPort ::
    OutputCmdPort() :
      Fw::OutputPortBase(),
      m_port(nullptr)
  {

  }

  void OutputCmdPort ::
    init()
  {
    Fw::OutputPortBase::init();
  }

  void OutputCmdPort ::
    addCallPort(InputCmdPort* callPort)
  {
    FW_ASSERT(callPort != nullptr);

    this->m_port = callPort;
    this->m_connObj = callPort;

#if FW_PORT_SERIALIZATION == 1
    this->m_serPort = nullptr;
#endif
  }

  void OutputCmdPort ::
    invoke(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer& args
    )
  {
#if FW_PORT_TRACING == 1
    this->trace();
#endif

#if FW_PORT_SERIALIZATION
    FW_ASSERT((this->m_port != nullptr) || (this->m_serPort != nullptr));

    if (this->m_port != nullptr) {
      this->m_port->invoke(opCode, cmdSeq, args);
    }
    else {
      Fw::SerializeStatus _status;
      CmdPortBuffer _buffer;

      _status = _buffer.serialize(opCode);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = _buffer.serialize(cmdSeq);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = _buffer.serialize(args);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));

      _status = this->m_serPort->invokeSerial(_buffer);
      FW_ASSERT(_status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(_status));
    }
#else
    FW_ASSERT(this->m_port != nullptr);
    this->m_port->invoke(opCode, cmdSeq, args);
#endif
  }

}
