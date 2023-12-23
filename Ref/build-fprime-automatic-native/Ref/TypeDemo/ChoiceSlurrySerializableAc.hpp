// ======================================================================
// \title  ChoiceSlurrySerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ChoiceSlurry struct
// ======================================================================

#ifndef Ref_ChoiceSlurrySerializableAc_HPP
#define Ref_ChoiceSlurrySerializableAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Ref/TypeDemo/ChoiceEnumAc.hpp"
#include "Ref/TypeDemo/ChoicePairSerializableAc.hpp"
#include "Ref/TypeDemo/TooManyChoicesArrayAc.hpp"

namespace Ref {

  //! Structure of enums (with an multi-dimensional array and structure)
  class ChoiceSlurry :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representation
        SERIALIZED_SIZE =
          Ref::TooManyChoices::SERIALIZED_SIZE +
          Ref::Choice::SERIALIZED_SIZE +
          Ref::ChoicePair::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      ChoiceSlurry();

      //! Member constructor
      ChoiceSlurry(
          const Ref::TooManyChoices& tooManyChoices,
          Ref::Choice::T separateChoice,
          const Ref::ChoicePair& choicePair
      );

      //! Copy constructor
      ChoiceSlurry(
          const ChoiceSlurry& obj //!< The source object
      );

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator
      ChoiceSlurry& operator=(
          const ChoiceSlurry& obj //!< The source object
      );

      //! Equality operator
      bool operator==(
          const ChoiceSlurry& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const ChoiceSlurry& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const ChoiceSlurry& obj //!< The object
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

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

      //! Convert struct to string
      void toString(
          Fw::StringBase& sb //!< The StringBase object to hold the result
      ) const;

#endif

      // ----------------------------------------------------------------------
      // Getter functions
      // ----------------------------------------------------------------------

      //! Get member tooManyChoices
      Ref::TooManyChoices& gettooManyChoices()
      {
        return this->tooManyChoices;
      }

      //! Get member tooManyChoices (const)
      const Ref::TooManyChoices& gettooManyChoices() const
      {
        return this->tooManyChoices;
      }

      //! Get member separateChoice
      Ref::Choice::T getseparateChoice() const
      {
        return this->separateChoice.e;
      }

      //! Get member choicePair
      Ref::ChoicePair& getchoicePair()
      {
        return this->choicePair;
      }

      //! Get member choicePair (const)
      const Ref::ChoicePair& getchoicePair() const
      {
        return this->choicePair;
      }

      // ----------------------------------------------------------------------
      // Setter functions
      // ----------------------------------------------------------------------

      //! Set all members
      void set(
          const Ref::TooManyChoices& tooManyChoices,
          Ref::Choice::T separateChoice,
          const Ref::ChoicePair& choicePair
      );

      //! Set member tooManyChoices
      void settooManyChoices(const Ref::TooManyChoices& tooManyChoices);

      //! Set member separateChoice
      void setseparateChoice(Ref::Choice::T separateChoice);

      //! Set member choicePair
      void setchoicePair(const Ref::ChoicePair& choicePair);

    protected:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      Ref::TooManyChoices tooManyChoices;
      Ref::Choice separateChoice;
      Ref::ChoicePair choicePair;

  };

}

#endif