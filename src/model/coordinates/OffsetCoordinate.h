#pragma once

namespace IGP2
{
namespace Coordinates
{
    class OffsetCoordinate
    {
    public:
        inline OffsetCoordinate(int pCol, int pRow)
        {
            mCol = pCol;
            mRow = pRow;
        }

        inline int GetCol() const
        {
            return mCol;
        }

        inline int GetRow() const
        {
            return mRow;
        }

    private:
        int mCol, mRow;
    };
}
}