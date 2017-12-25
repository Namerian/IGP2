#pragma once

namespace IGP2
{
/// Position of a hexagon in cube coordinates.
class CubeCoordinate
{
public:
    CubeCoordinate(int pX, int pY, int pZ)
    {
        mX = pX;
        mY = pY;
        mZ = pZ;
    }

    int GetX()
    {
        return mX;
    }

    int GetY()
    {
        return mY;
    }

    int GetZ()
    {
        return mZ;
    }

private:
    int mX, mY, mZ;
};
}
