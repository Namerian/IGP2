#pragma once

#include <map>
#include <vector>

#include "src/model/Resource.h"
#include "src/model/ResourceType.h"

namespace IGP2
{
namespace Model
{

    class Tile
    {
    public:
        Tile();
        ~Tile();

        bool ContainsResource();
        bool ContainsResource(eResourceType pResourceType);

        std::vector<Resource*> GetResources();
        Resource* GetResource(eResourceType pResourceType);

        void AddResource(Resource* pResource);

    private:
        std::map<eResourceType, Resource*> mResourceMap;
    };
}
}