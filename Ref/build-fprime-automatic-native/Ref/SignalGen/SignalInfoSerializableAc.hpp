// ======================================================================
// \title  SignalInfoSerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for SignalInfo struct
// ======================================================================

#ifndef Ref_SignalInfoSerializableAc_HPP
#define Ref_SignalInfoSerializableAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Ref/SignalGen/SignalPairSetArrayAc.hpp"
#include "Ref/SignalGen/SignalSetArrayAc.hpp"
#include "Ref/SignalGen/SignalTypeEnumAc.hpp"

namespace Ref {

  class SignalInfo :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representation
        SERIALIZED_SIZE =
          Ref::SignalType::SERIALIZED_SIZE +
          Ref::SignalSet::SERIALIZED_SIZE +
          Ref::SignalPairSet::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      SignalInfo();

      //! Member constructor
      SignalInfo(
          Ref::SignalType::T type,
          const Ref::SignalSet& history,
          const Ref::SignalPairSet& pairHistory
      );

      //! Copy constructor
      SignalInfo(
          const SignalInfo& obj //!< The source object
      );

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator
      SignalInfo& operator=(
          const SignalInfo& obj //!< The source object
      );

      //! Equality operator
      bool operator==(
          const SignalInfo& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const SignalInfo& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const SignalInfo& obj //!< The object
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

#if FW_SERIALIZABLE_TO_STRING

      //! Convert struct to string
      void toString(
          Fw::StringBase& sb //!< The StringBase object to hold the result
      ) const;

#endif

      // ----------------------------------------------------------------------
      // Getter functions
      // ----------------------------------------------------------------------

      //! Get member type
      Ref::SignalType::T gettype() const
      {
        return this->type.e;
      }

      //! Get member history
      Ref::SignalSet& gethistory()
      {
        return this->history;
      }

      //! Get member history (const)
      const Ref::SignalSet& gethistory() const
      {
        return this->history;
      }

      //! Get member pairHistory
      Ref::SignalPairSet& getpairHistory()
      {
        return this->pairHistory;
      }

      //! Get member pairHistory (const)
      const Ref::SignalPairSet& getpairHistory() const
      {
        return this->pairHistory;
      }

      // ----------------------------------------------------------------------
      // Setter functions
      // ----------------------------------------------------------------------

      //! Set all members
      void set(
          Ref::SignalType::T type,
          const Ref::SignalSet& history,
          const Ref::SignalPairSet& pairHistory
      );

      //! Set member type
      void settype(Ref::SignalType::T type);

      //! Set member history
      void sethistory(const Ref::SignalSet& history);

      //! Set member pairHistory
      void setpairHistory(const Ref::SignalPairSet& pairHistory);

    protected:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      Ref::SignalType type;
      Ref::SignalSet history;
      Ref::SignalPairSet pairHistory;

  };

}

#endif
