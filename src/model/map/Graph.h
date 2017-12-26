#include "src/model/coordinates/Coordinates.h"

#include "Edge.h"
#include "Tile.h"
#include "Vertice.h"

namespace IGP2
{
namespace Graph
{
    inline AxialCoordinate GetTileNeighbour(const AxialCoordinate& pAxial, eHexDirection pDir)
    {
        int u = pAxial.GetU();
        int v = pAxial.GetV();

        switch(pDir) {
        case eHexDirection::NORTH:
            v++;
            break;
        case eHexDirection::NORTHEAST:
            u++;
            v++;
            break;
        case eHexDirection::SOUTHEAST:
            u++;
            break;
        case eHexDirection::SOUTH:
            v--;
            break;
        case eHexDirection::SOUTHWEST:
            u--;
            v--;
            break;
        case eHexDirection::NORTHWEST:
            u--;
            break;
        }

        AxialCoordinate result(u, v);
        return result;
    }
}
}