#include "Tile.h"

IGP2::Model::Tile::Tile()
{
}

IGP2::Model::Tile::~Tile()
{
}

bool IGP2::Model::Tile::ContainsResource()
{
    if(mResourceMap.size() > 0) {
        return true;
    } else {
        return false;
    }
}

bool IGP2::Model::Tile::ContainsResource(eResourceType pResourceType)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResourceType);

    if(it != mResourceMap.end()) {
        return true;
    } else {
        return false;
    }
}

std::vector<IGP2::Model::Resource*> IGP2::Model::Tile::GetResources()
{
    std::vector<Resource*> result;

    for(std::map<eResourceType, Resource*>::iterator it = mResourceMap.begin(); it != mResourceMap.end(); ++it) {
        result.push_back(it->second);
    }

    return result;
}

IGP2::Model::Resource* IGP2::Model::Tile::GetResource(eResourceType pResourceType)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResourceType);

    if(it != mResourceMap.end()) {
        return mResourceMap[pResourceType];
    } else {
        return nullptr;
    }
}

void IGP2::Model::Tile::AddResource(Resource* pResource)
{
    std::map<eResourceType, Resource*>::iterator it = mResourceMap.find(pResource->GetType());

    if(it == mResourceMap.end()) {
        mResourceMap.insert(std::pair<eResourceType, Resource*>(pResource->GetType(), pResource));
    }
}
