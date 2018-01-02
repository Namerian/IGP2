#include "Resource.h"

namespace IGP2
{
Resource::Resource(const Coordinates::AxialCoordinate& pPosition, const eResourceType pType,const int pAmount):
    mPosition(pPosition)
{
    //mPosition(pPosition);
    mType=pType;
    mAmount=pAmount;
}

Resource::~Resource()
{
}

Coordinates::AxialCoordinate Resource::GetPosition() const
{
    return mPosition;
}
eResourceType Resource::GetType() const
{
    return mType;
}
int Resource::GetAmount() const
{
    return mAmount;
}

void Resource::ChangeAmount(int pDeltaAmount)
{
    mAmount+=pDeltaAmount;
    if(mAmount<0) {
        mAmount=0;
    }
}

}
