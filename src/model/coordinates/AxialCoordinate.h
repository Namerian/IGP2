#pragma once

namespace IGP2
{
/// Position of a hexagon in axial coordinates.
class AxialCoordinate
{
public:
    AxialCoordinate(int pU, int pV)
    {
        mU = pU;
        mV = pV;
    }

    int GetU()
    {
        return mU;
    }

    int GetV()
    {
        return mV;
    }

private:
    int mU, mV;
};
}
