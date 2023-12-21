// ======================================================================
// \title  DeserialStatusEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for DeserialStatus enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Fw/Types/DeserialStatusEnumAc.hpp"

namespace Fw {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  DeserialStatus& DeserialStatus ::
    operator=(const DeserialStatus& obj)
  {
    this->e = obj.e;
    return *this;
  }

  DeserialStatus& DeserialStatus ::
    operator=(T e)
  {
    this->e = e;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const DeserialStatus& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool DeserialStatus ::
    isValid() const
  {
    return ((e >= OK) && (e <= OK))
      || ((e >= BUFFER_EMPTY) && (e <= TYPE_MISMATCH));
  }

  Fw::SerializeStatus DeserialStatus ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus DeserialStatus ::
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

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

  void DeserialStatus ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case OK:
        s = "OK";
        break;
      case BUFFER_EMPTY:
        s = "BUFFER_EMPTY";
        break;
      case FORMAT_ERROR:
        s = "FORMAT_ERROR";
        break;
      case SIZE_MISMATCH:
        s = "SIZE_MISMATCH";
        break;
      case TYPE_MISMATCH:
        s = "TYPE_MISMATCH";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void DeserialStatus ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
