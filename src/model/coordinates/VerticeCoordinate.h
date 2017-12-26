#pragma once

#include "src/model/enums/VerticeDirection.h"

namespace IGP2
{
class VerticeCoordinate
{
public:
    inline VerticeCoordinate(int pU, int pV, eVerticeDirection pD)
    {
        mU = pU;
        mV = pV;
        mD = pD;
    }

    inline VerticeCoordinate(const AxialCoordinate& pCoord, eVerticeDirection pD)
    {
        mU = pCoord.GetU();
        mV = pCoord.GetV();
        mD = pD;
    }

    inline int GetU() const
    {
        return mU;
    }

    inline int GetV() const
    {
        return mV;
    }

    inline eVerticeDirection GetD() const
    {
        return mD;
    }

private:
    int mU, mV;
    eVerticeDirection mD;
};
}