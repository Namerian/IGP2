#pragma once

#include "src/model/enums/EdgeDirection.h"

namespace IGP2
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

private:
    int mU, mV;
    eEdgeDirection mD;
};
}
