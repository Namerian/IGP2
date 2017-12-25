#pragma once

namespace IGP2
{
class VerticeCoordinate
{
public:
    VerticeCoordinate(int pU, int pV, eVerticeDirection pD)
    {
        mU = pU;
        mV = pV;
        mD = pD;
    }

    VerticeCoordinate(AxialCoordinate pCoord, eVerticeDirection pD)
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
        return mV;
    }

    eVerticeDirection GetD()
    {
        return mD;
    }

private:
    int mU, mV;
    eVerticeDirection mD;
}
}