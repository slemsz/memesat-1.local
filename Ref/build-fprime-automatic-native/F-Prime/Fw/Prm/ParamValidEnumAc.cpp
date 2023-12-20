// ======================================================================
// \title  ParamValidEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ParamValid enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Fw/Prm/ParamValidEnumAc.hpp"

namespace Fw {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  ParamValid& ParamValid ::
    operator=(const ParamValid& obj)
  {
    this->e = obj.e;
    return *this;
  }

  ParamValid& ParamValid ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const ParamValid& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool ParamValid ::
    isValid() const
  {
    return ((e >= UNINIT) && (e <= DEFAULT));
  }

  Fw::SerializeStatus ParamValid ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus ParamValid ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    SerialType es;
    Fw::SerializeStatus status = buffer.deserialize(es);
    if (status == Fw::FW_SERIALIZE_OK) {
      this->e = static_cast<T>(es);
      if (!this->isValid()) {
        status = Fw::FW_DESERIALIZE_FORMAT_ERROR;
      }
    }
    return status;
  }

#if FW_SERIALIZABLE_TO_STRING

  void ParamValid ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case UNINIT:
        s = "UNINIT";
        break;
      case VALID:
        s = "VALID";
        break;
      case INVALID:
        s = "INVALID";
        break;
      case DEFAULT:
        s = "DEFAULT";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void ParamValid ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
