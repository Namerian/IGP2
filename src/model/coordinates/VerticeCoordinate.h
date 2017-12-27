#pragma once

#include "VerticeDirection.h"

namespace IGP2
{
namespace Coordinates
{
    class VerticeCoordinate
    {
    public:
        inline VerticeCoordinate(int pU, int pV, eVerticeDirection pD)
        {
            mU = pU;
            mV = pV;
            mD = pD;
        }

        inline VerticeCoordinate(const AxialCoordinate& pCoord, eVerticeDirection pD)
        {
            mU = pCoord.GetU();
            mV = pCoord.GetV();
            mD = pD;
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