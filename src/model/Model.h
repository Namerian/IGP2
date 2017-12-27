#pragma once

#include <map>
#include <set>
#include <vector>

#include "coordinates/Coordinates.h"
#include "graph/Graph.h"

namespace IGP2
{

class Model
{
public:
    Model();
    ~Model();

    std::vector<Coordinates::EdgeCoordinate> GetEdgePositions() const;

private:
    std::set<Coordinates::AxialCoordinate, Coordinates::AxialCoordinateComp> mTileCoordinateSet;
    std::set<Coordinates::EdgeCoordinate, Coordinates::EdgeCoordinateComp> mEdgeCoordSet;
    std::set<Coordinates::VerticeCoordinate, Coordinates::VertexCoordinateComp> mVertexCoordSet;

    std::map<Coordinates::AxialCoordinate, Tile> mTileMap;
    std::map<Coordinates::EdgeCoordinate, Graph::Edge> mEdgeMap;
};
}
