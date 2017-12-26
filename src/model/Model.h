#pragma once

#include <map>

#include "coordinates/Coordinates.h"
#include "map/Graph.h"

namespace IGP2
{

class Model
{
public:
    Model();
    ~Model();

private:
    std::map<AxialCoordinate, Tile> mTileMap;
};
}
