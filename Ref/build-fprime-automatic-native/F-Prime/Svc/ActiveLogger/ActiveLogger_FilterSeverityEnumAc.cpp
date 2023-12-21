// ======================================================================
// \title  ActiveLogger_FilterSeverityEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveLogger_FilterSeverity enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/ActiveLogger/ActiveLogger_FilterSeverityEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  ActiveLogger_FilterSeverity& ActiveLogger_FilterSeverity ::
    operator=(const ActiveLogger_FilterSeverity& obj)
  {
    this->e = obj.e;
    return *this;
  }

  ActiveLogger_FilterSeverity& ActiveLogger_FilterSeverity ::
    operator=(T e)
  {
    this->e = e;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const ActiveLogger_FilterSeverity& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool ActiveLogger_FilterSeverity ::
    isValid() const
  {
    return ((e >= WARNING_HI) && (e <= DIAGNOSTIC));
  }

  Fw::SerializeStatus ActiveLogger_FilterSeverity ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus ActiveLogger_FilterSeverity ::
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

  void ActiveLogger_FilterSeverity ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
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

  void ActiveLogger_FilterSeverity ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
