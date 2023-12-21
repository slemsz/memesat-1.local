// ======================================================================
// \title  ManyChoicesArrayAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ManyChoices array
// ======================================================================

#ifndef Ref_ManyChoicesArrayAc_HPP
#define Ref_ManyChoicesArrayAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Ref/TypeDemo/ChoiceEnumAc.hpp"

namespace Ref {

  //! Enumeration array
  class ManyChoices :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The element type
      typedef Ref::Choice ElementType;

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the array
        SIZE = 2,
        //! The size of the serial representation
        SERIALIZED_SIZE = SIZE * Ref::Choice::SERIALIZED_SIZE,
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      ManyChoices();

      //! Constructor (user-provided value)
      ManyChoices(
          const ElementType (&a)[SIZE] //!< The array
      );

      //! Constructor (single element)
      ManyChoices(
          const ElementType& e //!< The element
      );

      //! Constructor (multiple elements)
      ManyChoices(
          const ElementType& e1, //!< Element 1
          const ElementType& e2 //!< Element 2
      );

      //! Copy Constructor
      ManyChoices(
          const ManyChoices& obj //!< The source object
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
      ManyChoices& operator=(
          const ManyChoices& obj //!< The source object
      );

      //! Copy assignment operator (raw array)
      ManyChoices& operator=(
          const ElementType (&a)[SIZE] //!< The source array
      );

      //! Copy assignment operator (single element)
      ManyChoices& operator=(
          const ElementType& e //!< The element
      );

      //! Equality operator
      bool operator==(
          const ManyChoices& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const ManyChoices& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const ManyChoices& obj //!< The object
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
