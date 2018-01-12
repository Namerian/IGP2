#pragma once

namespace IGP2
{
namespace Model
{
    class OffsetCoordinate
    {
    public:
        inline OffsetCoordinate(int pCol, int pRow)
            : mCol(pCol)
            , mRow(pRow)
        {
        }

        inline OffsetCoordinate(const OffsetCoordinate& pOffset)
            : mCol(pOffset.GetCol())
            , mRow(pOffset.GetRow())
        {
        }

        inline int GetCol() const
        {
            return mCol;
        }

        inline int GetRow() const
        {
            return mRow;
        }

        inline bool operator==(const OffsetCoordinate& other) const
        {
            return (mCol == other.GetCol() && mRow == other.GetRow());
        }

        inline bool operator!=(const OffsetCoordinate& other) const
        {
            return !(*this == other);
        }

        inline bool operator<(const OffsetCoordinate& other) const
        {
            return (mCol < other.GetCol() || (mCol == other.GetCol() && mRow < other.GetRow()));
        }

    private:
        int mCol, mRow;
    };
}
}