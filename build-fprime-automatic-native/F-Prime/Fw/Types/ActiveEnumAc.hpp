// ======================================================================
// \title  ActiveEnumAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Active enum
// ======================================================================

#ifndef Fw_ActiveEnumAc_HPP
#define Fw_ActiveEnumAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace Fw {

  //! Active and inactive states
  class Active :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The serial representation type
      typedef I32 SerialType;

      //! The raw enum type
      enum T {
        //! Inactive state
        INACTIVE = 0,
        //! Active state
        ACTIVE = 1,
      };

      //! For backwards compatibility
      typedef T t;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representation
        SERIALIZED_SIZE = sizeof(SerialType),
        //! The number of enumerated constants
        NUM_CONSTANTS = 2,
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value of INACTIVE)
      Active()
      {
        this->e = INACTIVE;
      }

      //! Constructor (user-provided value)
      Active(
          const T e1 //!< The raw enum value
      )
      {
        this->e = e1;
      }

      //! Copy constructor
      Active(
          const Active& obj //!< The source object
      )
      {
        this->e = obj.e;
      }

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator (object)
      Active& operator=(
          const Active& obj //!< The source object
      );

      //! Copy assignment operator (raw enum)
      Active& operator=(
          T e1 //!< The enum value
      );

      //! Conversion operator
      operator T() const
      {
        return this->e;
      }

      //! Equality operator
      bool operator==(T e1) const
      {
        return this->e == e1;
      }

      //! Inequality operator
      bool operator!=(T e1) const
      {
        return !(*this == e1);
      }

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const Active& obj //!< The object
      );

#endif

    public:

      // ----------------------------------------------------------------------
      // Member functions
      // ----------------------------------------------------------------------

      //! Check raw enum value for validity
      bool isValid() const;

      //! Serialize raw enum value to SerialType
      Fw::SerializeStatus serialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      ) const;

      //! Deserialize raw enum value from SerialType
      Fw::SerializeStatus deserialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      );

#if FW_SERIALIZABLE_TO_STRING || FW_ENABLE_TEXT_LOGGING

      //! Convert enum to string
      void toString(
          Fw::StringBase& sb //!< The StringBase object to hold the result
      ) const;

#endif

    public:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The raw enum value
      T e;

  };

}

#endif
