#pragma once

#include "src/model/AxialCoordinate.h"
#include "src/model/ResourceType.h"

namespace IGP2
{

namespace Model
{

    class Resource
    {
    public:
        Resource(const AxialCoordinate& pPosition, const eResourceType pType, const int pAmount);
        virtual ~Resource();

        AxialCoordinate GetPosition() const;
        eResourceType GetType() const;
        int GetAmount() const;

        void ChangeAmount(int pDeltaAmount);

    private:
        AxialCoordinate mPosition;
        eResourceType mType;
        int mAmount;
    };
}
}