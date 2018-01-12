#pragma once

#include <vector>

#include "src/model/CoordinateUtility.h"
#include "src/model/Edge.h"
#include "src/model/Tile.h"
#include "src/model/Vertice.h"

namespace IGP2
{
namespace Model
{
    namespace GraphUtility
    {
        //*******************************************************
        //
        // Tile connexions
        //
        //*******************************************************

        inline AxialCoordinate GetTileNeighbour(const AxialCoordinate& pAxial, eHexDirection pDir);

        inline std::vector<AxialCoordinate> GetTileNeighbours(const AxialCoordinate& pAxial);

        inline EdgeCoordinate GetTileEdge(const AxialCoordinate& pAxial, eHexDirection pDir);

        inline std::vector<EdgeCoordinate> GetTileEdges(const AxialCoordinate& pAxial);

        /// Returns the first vertice of a tile clockwise to the direction.
        inline VerticeCoordinate GetTileVertice(const AxialCoordinate& pAxial, eHexDirection pDir);

        inline std::vector<VerticeCoordinate> GetTileVertices(const AxialCoordinate& pAxial);

        //*******************************************************
        //
        // Edge connexions
        //
        //*******************************************************

        inline std::vector<AxialCoordinate> GetEdgeTiles(const EdgeCoordinate& pEdge);

        inline std::vector<VerticeCoordinate> GetEdgeVertices(const EdgeCoordinate& pEdge);

        //*******************************************************
        //
        // Vertice connexions
        //
        //*******************************************************

        inline std::vector<AxialCoordinate> GetVerticeTiles(const VerticeCoordinate& pVertice);

        inline std::vector<EdgeCoordinate> GetVerticeEdges(const VerticeCoordinate& pVertice);

        //*******************************************************
        //
        // other helper functions
        //
        //*******************************************************

        inline std::vector<EdgeCoordinate> GetEdgeNeighbours(const EdgeCoordinate& pEdge);

        inline std::vector<VerticeCoordinate> GetVerticeNeighbours(const VerticeCoordinate& pVertice);
    }
}
}

#include "src/model/GraphUtility.inl"
