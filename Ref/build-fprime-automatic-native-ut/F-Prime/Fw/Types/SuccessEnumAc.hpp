// ======================================================================
// \title  SuccessEnumAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Success enum
// ======================================================================

#ifndef Fw_SuccessEnumAc_HPP
#define Fw_SuccessEnumAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace Fw {

  //! Success/Failure
  class Success :
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
        //! Representing failure
        FAILURE = 0,
        //! Representing success
        SUCCESS = 1,
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

      //! Constructor (default value of FAILURE)
      Success()
      {
        this->e = FAILURE;
      }

      //! Constructor (user-provided value)
      Success(
          const T e //!< The raw enum value
      )
      {
        this->e = e;
      }

      //! Copy constructor
      Success(
          const Success& obj //!< The source object
      )
      {
        this->e = obj.e;
      }

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator (object)
      Success& operator=(
          const Success& obj //!< The source object
      );

      //! Copy assignment operator (raw enum)
      Success& operator=(
          T e //!< The enum value
      );

      //! Conversion operator
      operator T() const
      {
        return this->e;
      }

      //! Equality operator
      bool operator==(T e) const
      {
        return this->e == e;
      }

      //! Inequality operator
      bool operator!=(T e) const
      {
        return !(*this == e);
      }

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const Success& obj //!< The object
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

#if FW_SERIALIZABLE_TO_STRING || FW_ENABLE_TEXT_LOGGING || BUILD_UT

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
