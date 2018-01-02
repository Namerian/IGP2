#pragma once

#include <map>
#include <set>
#include <vector>

#include "src/model/coordinates/Coordinates.h"
#include "src/model/graph/Graph.h"
#include "src/model/Resource.h"
#include "src/model/ResourceType.h"

namespace IGP2
{

class Model
{
public:
    Model();
    ~Model();

    std::vector<Coordinates::EdgeCoordinate> GetEdgePositions() const;

private:
    void CreateResource(const Coordinates::AxialCoordinate& pPosition, eResourceType pType, int pAmount);

private:
    std::set<Coordinates::AxialCoordinate, Coordinates::AxialCoordinateComp> mTileCoordinateSet;
    std::set<Coordinates::EdgeCoordinate, Coordinates::EdgeCoordinateComp> mEdgeCoordSet;
    std::set<Coordinates::VerticeCoordinate, Coordinates::VertexCoordinateComp> mVertexCoordSet;

    std::map<Coordinates::AxialCoordinate, Tile> mTileMap;
    std::map<Coordinates::EdgeCoordinate, Graph::Edge> mEdgeMap;

    std::vector<Resource> mResources;
};
}
