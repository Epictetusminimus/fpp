// ======================================================================
// \title  SerializeTypeEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for SerializeType enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "SerializeTypeEnumAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  SerializeType& SerializeType ::
    operator=(const SerializeType& obj)
  {
    this->e = obj.e;
    return *this;
  }

  SerializeType& SerializeType ::
    operator=(T e)
  {
    this->e = e;
    return *this;
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const SerializeType& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  bool SerializeType ::
    isValid() const
  {
    return ((e >= X) && (e <= Y));
  }

  Fw::SerializeStatus SerializeType ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    const Fw::SerializeStatus status = buffer.serialize(
        static_cast<SerialType>(this->e)
    );
    return status;
  }

  Fw::SerializeStatus SerializeType ::
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

  void SerializeType ::
    toString(Fw::StringBase& sb) const
  {
    Fw::String s;
    switch (e) {
      case X:
        s = "X";
        break;
      case Y:
        s = "Y";
        break;
      default:
        s = "[invalid]";
        break;
    }
    sb.format("%s (%d)", s.toChar(), e);
  }

#endif

}