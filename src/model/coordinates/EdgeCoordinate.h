#pragma once

#include "EdgeDirection.h"

namespace IGP2
{
namespace Coordinates
{
    /// Position of an hexagon edge.

    /// U and V are the axial coordinates of a hexagon.
    class EdgeCoordinate
    {
    public:
        inline EdgeCoordinate(int pU, int pV, eEdgeDirection pD)
        {
            mU = pU;
            mV = pV;
            mD = pD;
        }

        inline EdgeCoordinate(const AxialCoordinate& pCoord, eEdgeDirection pD)
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

        inline eEdgeDirection GetD() const
        {
            return mD;
        }

        inline bool operator==(const EdgeCoordinate& other) const
        {
            return (mU == other.GetU() && mV == other.GetV() && mD == other.GetD());
        }

        inline bool operator!=(const EdgeCoordinate& other) const
        {
            return !(*this == other);
        }

    private:
        int mU, mV;
        eEdgeDirection mD;
    };

    struct EdgeCoordinateComp {
        bool operator()(const EdgeCoordinate& lhs, const EdgeCoordinate& rhs) const
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
