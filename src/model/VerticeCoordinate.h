#pragma once

#include "VerticeDirection.h"

namespace IGP2
{
namespace Model
{
    class VerticeCoordinate
    {
    public:
        inline VerticeCoordinate(int pU, int pV, eVerticeDirection pD)
            : mU(pU)
            , mV(pV)
            , mD(pD)
        {
        }

        inline VerticeCoordinate(const AxialCoordinate& pAxial, eVerticeDirection pD)
            : mU(pAxial.GetU())
            , mV(pAxial.GetV())
            , mD(pD)
        {
        }

        inline int GetU() const
        {
            return mU;
        }

        inline int GetV() const
        {
            return mV;
        }

        inline eVerticeDirection GetD() const
        {
            return mD;
        }

        inline bool operator==(const VerticeCoordinate& other) const
        {
            return (mU == other.GetU() && mV == other.GetV());
        }

        inline bool operator!=(const VerticeCoordinate& other) const
        {
            return !(*this == other);
        }

        inline bool operator<(const VerticeCoordinate& other) const
        {
            return (mU < other.GetU() || (mU == other.GetU() && mV < other.GetV()) || (mU == other.GetU() && mV == other.GetV() && mD < other.GetD()));
        }

    private:
        int mU, mV;
        eVerticeDirection mD;
    };

    struct VertexCoordinateComp {
        bool operator()(const VerticeCoordinate& lhs, const VerticeCoordinate& rhs) const
        {
            if(lhs.GetU() < rhs.GetU()) {
                return true;
            } else if(lhs.GetU() == rhs.GetU() && (lhs.GetV() < rhs.GetV() || (int)lhs.GetD() < (int)rhs.GetD())) {
                return true;
            }

            return false;
        }
    };
}
}