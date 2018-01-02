#pragma once

namespace IGP2
{
namespace Coordinates
{
/// Position of a hexagon in axial coordinates.
class AxialCoordinate
{
public:
    inline AxialCoordinate() {};

    inline AxialCoordinate(int pU, int pV) {
        mU = pU;
        mV = pV;
    }

    inline AxialCoordinate(const AxialCoordinate& pAxial) {
        mU = pAxial.GetU();
        mV = pAxial.GetV();
    }

    inline int GetU() const {
        return mU;
    }

    inline int GetV() const {
        return mV;
    }

    inline bool operator==(const AxialCoordinate& other) const {
        return (mU == other.GetU() && mV == other.GetV());
    }

    inline bool operator!=(const AxialCoordinate& other) const {
        return !(*this == other);
    }

    inline bool operator<(const AxialCoordinate& other) const {
        return (mU < other.GetU() || (mU == other.GetU() && mV < other.GetV()));
    }

private:
    int mU, mV;
};

struct AxialCoordinateComp {
    bool operator()(const AxialCoordinate& lhs, const AxialCoordinate& rhs) const {
        return (lhs.GetU() < rhs.GetU()) || (lhs.GetU() == rhs.GetU() && lhs.GetV() < rhs.GetV());
    }
};
}
}
