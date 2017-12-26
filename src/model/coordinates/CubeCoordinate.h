#pragma once

namespace IGP2
{
/// Position of a hexagon in cube coordinates.
class CubeCoordinate
{
public:
    inline CubeCoordinate(int pX, int pY, int pZ)
    {
        mX = pX;
        mY = pY;
        mZ = pZ;
    }

    inline int GetX() const
    {
        return mX;
    }

    inline int GetY() const
    {
        return mY;
    }

    inline int GetZ() const
    {
        return mZ;
    }

private:
    int mX, mY, mZ;
};
}
