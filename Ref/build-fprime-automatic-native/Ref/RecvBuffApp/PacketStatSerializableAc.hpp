// ======================================================================
// \title  PacketStatSerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PacketStat struct
// ======================================================================

#ifndef Ref_PacketStatSerializableAc_HPP
#define Ref_PacketStatSerializableAc_HPP

#include "FpConfig.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"
#include "Ref/RecvBuffApp/PacketRecvStatusEnumAc.hpp"

namespace Ref {

  //! Some Packet Statistics
  class PacketStat :
    public Fw::Serializable
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representation
        SERIALIZED_SIZE =
          sizeof(U32) +
          sizeof(U32) +
          Ref::PacketRecvStatus::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Constructors
      // ----------------------------------------------------------------------

      //! Constructor (default value)
      PacketStat();

      //! Member constructor
      PacketStat(
          U32 BuffRecv,
          U32 BuffErr,
          Ref::PacketRecvStatus::T PacketStatus
      );

      //! Copy constructor
      PacketStat(
          const PacketStat& obj //!< The source object
      );

    public:

      // ----------------------------------------------------------------------
      // Operators
      // ----------------------------------------------------------------------

      //! Copy assignment operator
      PacketStat& operator=(
          const PacketStat& obj //!< The source object
      );

      //! Equality operator
      bool operator==(
          const PacketStat& obj //!< The other object
      ) const;

      //! Inequality operator
      bool operator!=(
          const PacketStat& obj //!< The other object
      ) const;

#ifdef BUILD_UT

      //! Ostream operator
      friend std::ostream& operator<<(
          std::ostream& os, //!< The ostream
          const PacketStat& obj //!< The object
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

      //! Get member BuffRecv
      U32 getBuffRecv() const
      {
        return this->BuffRecv;
      }

      //! Get member BuffErr
      U32 getBuffErr() const
      {
        return this->BuffErr;
      }

      //! Get member PacketStatus
      Ref::PacketRecvStatus::T getPacketStatus() const
      {
        return this->PacketStatus.e;
      }

      // ----------------------------------------------------------------------
      // Setter functions
      // ----------------------------------------------------------------------

      //! Set all members
      void set(
          U32 BuffRecv,
          U32 BuffErr,
          Ref::PacketRecvStatus::T PacketStatus
      );

      //! Set member BuffRecv
      void setBuffRecv(U32 BuffRecv);

      //! Set member BuffErr
      void setBuffErr(U32 BuffErr);

      //! Set member PacketStatus
      void setPacketStatus(Ref::PacketRecvStatus::T PacketStatus);

    protected:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      U32 BuffRecv;
      U32 BuffErr;
      Ref::PacketRecvStatus PacketStatus;

  };

}

#endif
