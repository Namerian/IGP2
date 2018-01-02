#include "Tile.h"

namespace IGP2
{
Tile::Tile()
{
}

Tile::~Tile()
{
}

bool Tile::ContainsResource()
{
    if(mResourceMap.size() > 0) {
        return true;
    } else {
        return false;
    }
}

bool Tile::ContainsResource(eResourceType pResourceType)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResourceType);

    if(it!=mResourceMap.end()) {
        return true;
    } else {
        return false;
    }
}

std::vector<Resource*> Tile::GetResources()
{
    std::vector<Resource*> result;

    for( std::map<eResourceType, Resource*>::iterator it = mResourceMap.begin(); it != mResourceMap.end(); ++it ) {
        result.push_back( it->second );
    }

    return result;
}

Resource* Tile::GetResource(eResourceType pResourceType)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResourceType);

    if(it != mResourceMap.end()) {
        return mResourceMap[pResourceType];
    } else {
        return nullptr;
    }
}

void Tile::AddResource(Resource* pResource)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResource->GetType());

    if(it == mResourceMap.end()) {
        mResourceMap.insert(std::pair<eResourceType,Resource*>(pResource->GetType(), pResource));
    }
}
}
