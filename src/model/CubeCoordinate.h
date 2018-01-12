#pragma once

namespace IGP2
{
namespace Model
{
    /// Position of a hexagon in cube coordinates.
    class CubeCoordinate
    {
    public:
        inline CubeCoordinate(int pX, int pY, int pZ)
            : mX(pX)
            , mY(pY)
            , mZ(pZ)
        {
        }

        inline CubeCoordinate(const CubeCoordinate& pCube)
            : mX(pCube.GetX())
            , mY(pCube.GetY())
            , mZ(pCube.GetZ())
        {
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

        inline bool operator==(const CubeCoordinate& other) const
        {
            return (mX == other.GetX() && mY == other.GetY() && mZ == other.GetZ());
        }

        inline bool operator!=(const CubeCoordinate& other) const
        {
            return !(*this == other);
        }

        inline bool operator<(const CubeCoordinate& other) const
        {
            return (mX < other.GetX() || (mX == other.GetX() && mY < other.GetY()) || (mX == other.GetX() && mY == other.GetY() && mZ < other.GetZ()));
        }

    private:
        int mX, mY, mZ;
    };
}
}