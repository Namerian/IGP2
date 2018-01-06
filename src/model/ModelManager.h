#pragma once

#include <map>
#include <set>
#include <vector>

#include "src/model/CoordinateUtility.h"
#include "src/model/GraphUtility.h"
#include "src/model/Resource.h"
#include "src/model/ResourceType.h"

namespace IGP2
{

namespace Model
{

    class ModelManager
    {
    public:
        ModelManager();
        ~ModelManager();

        std::vector<EdgeCoordinate> GetEdgePositions() const;

    private:
        void CreateResource(const AxialCoordinate& pPosition, eResourceType pType, int pAmount);

    private:
        std::set<AxialCoordinate, AxialCoordinateComp> mTileCoordinateSet;
        std::set<EdgeCoordinate, EdgeCoordinateComp> mEdgeCoordSet;
        std::set<VerticeCoordinate, VertexCoordinateComp> mVertexCoordSet;

        std::map<AxialCoordinate, Tile> mTileMap;
        std::map<EdgeCoordinate, Edge> mEdgeMap;

        std::vector<Resource> mResources;
    };
}
}