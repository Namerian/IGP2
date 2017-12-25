#pragma once

namespace IGP2
{
/// Position of an hexagon edge.
/// U and V are the axial coordinates of a hexagon.
class EdgeCoordinate
{
public:
    EdgeCoordinate(int pU, int pV, eEdgeDirection pD)
    {
        mU = pU;
        mV = pV;
        mD = pD;
    }

    EdgeCoordinate(AxialCoordinate pCoord, eEdgeDirection pD)
    {
        mU = pCoord.GetU();
        mV = pCoord.GetV();
        mD = pD;
    }

    int GetU()
    {
        return mU;
    }

    int GetV()
    {
        return pV;
    }

    eEdgeDirection GetD()
    {
        return mD;
    }

private:
    int mU, mV;
    eEdgeDirection mD;
};
}
