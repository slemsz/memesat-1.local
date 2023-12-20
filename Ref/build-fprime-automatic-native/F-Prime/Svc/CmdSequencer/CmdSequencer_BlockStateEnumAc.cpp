// ======================================================================
// \title  CmdSequencer_BlockStateEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for CmdSequencer_BlockState enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "F-Prime/Svc/CmdSequencer/CmdSequencer_BlockStateEnumAc.hpp"

namespace Svc {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  CmdSequencer_BlockState& CmdSequencer_BlockState ::
    operator=(const CmdSequencer_BlockState& obj)
  {
    this->e = obj.e;
    return *this;
  }

  CmdSequencer_BlockState& CmdSequencer_BlockState ::
    operator=(T e1)
  {
    this->e = e1;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const CmdSequencer_BlockState& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool CmdSequencer_BlockState ::
    isValid() const
  {
    return ((e >= BLOCK) && (e <= NO_BLOCK));
  }

  Fw::SerializeStatus CmdSequencer_BlockState ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus CmdSequencer_BlockState ::
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

  void CmdSequencer_BlockState ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case BLOCK:
        s = "BLOCK";
        break;
      case NO_BLOCK:
        s = "NO_BLOCK";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%" PRIi32 ")", s.toChar(), e);
  }

#elif FW_ENABLE_TEXT_LOGGING

  void CmdSequencer_BlockState ::
    toString(Fw::StringBase& sb) const
  {
    sb.format("%" PRIi32 "", e);
  }

#endif

}
