#pragma once

namespace IGP2
{
class OffsetCoordinate
{
public:
    OffsetCoordinates(int pCol, int pRow)
    {
        mCol = pCol;
        mRow = pRow;
    }

    int GetCol()
    {
        return mCol;
    }

    int GetRow()
    {
        return mRow;
    }

private:
    int mCol, mRow;
}
}