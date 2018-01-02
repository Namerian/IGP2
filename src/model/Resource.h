#pragma once

#include "src/model/ResourceType.h"
#include "src/model/coordinates/AxialCoordinate.h"

namespace IGP2
{

class Resource
{
public:
    Resource(const Coordinates::AxialCoordinate& pPosition, const eResourceType pType, const int pAmount);
    virtual ~Resource();

    Coordinates::AxialCoordinate GetPosition() const;
    eResourceType GetType() const;
    int GetAmount() const;

    void ChangeAmount(int pDeltaAmount);

private:
    Coordinates::AxialCoordinate mPosition;
    eResourceType mType;
    int mAmount;
};

}
