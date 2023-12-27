// ======================================================================
// \title  LogSeverityEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for LogSeverity enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Fw/Log/LogSeverityEnumAc.hpp"

namespace Fw {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  LogSeverity& LogSeverity ::
    operator=(const LogSeverity& obj)
  {
    this->e = obj.e;
    return *this;
  }

  LogSeverity& LogSeverity ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const LogSeverity& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool LogSeverity ::
    isValid() const
  {
    return ((e >= FATAL) && (e <= DIAGNOSTIC));
  }

  Fw::SerializeStatus LogSeverity ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus LogSeverity ::
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

  void LogSeverity ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case FATAL:
        s = "FATAL";
        break;
      case WARNING_HI:
        s = "WARNING_HI";
        break;
      case WARNING_LO:
        s = "WARNING_LO";
        break;
      case COMMAND:
        s = "COMMAND";
        break;
      case ACTIVITY_HI:
        s = "ACTIVITY_HI";
        break;
      case ACTIVITY_LO:
        s = "ACTIVITY_LO";
        break;
      case DIAGNOSTIC:
        s = "DIAGNOSTIC";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void LogSeverity ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
