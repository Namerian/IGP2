#include "Resource.h"

IGP2::Model::Resource::Resource(const AxialCoordinate& pPosition, const eResourceType pType, const int pAmount)
    : mPosition(pPosition)
{
    // mPosition(pPosition);
    mType = pType;
    mAmount = pAmount;
}

IGP2::Model::Resource::~Resource()
{
}

IGP2::Model::AxialCoordinate IGP2::Model::Resource::GetPosition() const
{
    return mPosition;
}
IGP2::Model::eResourceType IGP2::Model::Resource::GetType() const
{
    return mType;
}
int IGP2::Model::Resource::GetAmount() const
{
    return mAmount;
}

void IGP2::Model::Resource::ChangeAmount(int pDeltaAmount)
{
    mAmount += pDeltaAmount;
    if(mAmount < 0) {
        mAmount = 0;
    }
}
