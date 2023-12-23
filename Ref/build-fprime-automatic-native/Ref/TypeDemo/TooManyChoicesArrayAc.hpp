// ======================================================================
// \title  TooManyChoicesArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for TooManyChoices array
// ======================================================================

#ifndef Ref_TooManyChoicesArrayAc_HPP
#define Ref_TooManyChoicesArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Ref/TypeDemo/ManyChoicesArrayAc.hpp"

namespace Ref {

  //! Array of array
  class TooManyChoices :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The element type
      typedef Ref::ManyChoices ElementType;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the array
        SIZE = 2,
        //! The size of the serial representation
        SERIALIZED_SIZE = SIZE * Ref::ManyChoices::SERIALIZED_SIZE,
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      TooManyChoices();

      //! Constructor (user-provided value)
      TooManyChoices(
          const ElementType (&a)[SIZE] //!< The array
      );

      //! Constructor (single element)
      TooManyChoices(
          const ElementType& e //!< The element
      );

      //! Constructor (multiple elements)
      TooManyChoices(
          const ElementType& e1, //!< Element 1
          const ElementType& e2 //!< Element 2
      );

      //! Copy Constructor
      TooManyChoices(
          const TooManyChoices& obj //!< The source object
      );

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Subscript operator
      ElementType& operator[](
          const U32 i //!< The subscript index
      );

      //! Const subscript operator
      const ElementType& operator[](
          const U32 i //!< The subscript index
      ) const;

      //! Copy assignment operator (object)
      TooManyChoices& operator=(
          const TooManyChoices& obj //!< The source object
      );

      //! Copy assignment operator (raw array)
      TooManyChoices& operator=(
          const ElementType (&a)[SIZE] //!< The source array
      );

      //! Copy assignment operator (single element)
      TooManyChoices& operator=(
          const ElementType& e //!< The element
      );

      //! Equality operator
      bool operator==(
          const TooManyChoices& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const TooManyChoices& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const TooManyChoices& obj //!< The object
      );

#endif

    public:

      // ----------------------------------------------------------------------
      // Member functions
      // ----------------------------------------------------------------------

      //! Serialization
      Fw::SerializeStatus serialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      ) const;

      //! Deserialization
      Fw::SerializeStatus deserialize(
          Fw::SerializeBufferBase& buffer //!< The serial buffer
      );

#if FW_ARRAY_TO_STRING || BUILD_UT

      //! Convert array to string
      void toString(
          Fw::StringBase& sb //!< The StringBase object to hold the result
      ) const;

#endif

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The array elements
      ElementType elements[SIZE];

  };

}

#endif