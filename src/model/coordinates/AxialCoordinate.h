#pragma once

namespace IGP2
{
/// Position of a hexagon in axial coordinates.
class AxialCoordinate
{
public:
    inline AxialCoordinate(int pU, int pV)
    {
        mU = pU;
        mV = pV;
    }

    inline int GetU() const
    {
        return mU;
    }

    inline int GetV() const
    {
        return mV;
    }

private:
    int mU, mV;
};
}
