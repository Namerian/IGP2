#pragma once

#include <vector>

#include "src/model/coordinates/Coordinates.h"

#include "Edge.h"
#include "Tile.h"
#include "Vertice.h"

namespace IGP2
{
namespace Graph
{
    //*******************************************************
    //
    // Tile connexions
    //
    //*******************************************************

    inline Coordinates::AxialCoordinate GetTileNeighbour(const Coordinates::AxialCoordinate& pAxial, Coordinates::eHexDirection pDir)
    {
        int u = pAxial.GetU();
        int v = pAxial.GetV();

        switch(pDir) {
        case Coordinates::eHexDirection::NORTH:
            v++;
            break;
        case Coordinates::eHexDirection::NORTHEAST:
            u++;
            v++;
            break;
        case Coordinates::eHexDirection::SOUTHEAST:
            u++;
            break;
        case Coordinates::eHexDirection::SOUTH:
            v--;
            break;
        case Coordinates::eHexDirection::SOUTHWEST:
            u--;
            v--;
            break;
        case Coordinates::eHexDirection::NORTHWEST:
            u--;
            break;
        }

        Coordinates::AxialCoordinate result(u, v);
        return result;
    }

    inline std::vector<Coordinates::AxialCoordinate> GetTileNeighbours(const Coordinates::AxialCoordinate& pAxial)
    {
        std::vector<Coordinates::AxialCoordinate> result;

        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::NORTH));
        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::NORTHEAST));
        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::NORTHWEST));
        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTH));
        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHEAST));
        result.push_back(GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHWEST));

        return result;
    }

    inline Coordinates::EdgeCoordinate GetTileEdge(const Coordinates::AxialCoordinate& pAxial, Coordinates::eHexDirection pDir)
    {
        Coordinates::AxialCoordinate edgeCoord(pAxial);
        Coordinates::eEdgeDirection edgeDir = Coordinates::eEdgeDirection::NORTH;

        switch(pDir) {
        case Coordinates::eHexDirection::NORTH:
            break;
        case Coordinates::eHexDirection::NORTHEAST:
            edgeDir = Coordinates::eEdgeDirection::EAST;
            break;
        case Coordinates::eHexDirection::NORTHWEST:
            edgeDir = Coordinates::eEdgeDirection::WEST;
            break;
        case Coordinates::eHexDirection::SOUTH:
            edgeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTH);
            edgeDir = Coordinates::eEdgeDirection::NORTH;
            break;
        case Coordinates::eHexDirection::SOUTHEAST:
            edgeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHEAST);
            edgeDir = Coordinates::eEdgeDirection::WEST;
            break;
        case Coordinates::eHexDirection::SOUTHWEST:
            edgeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHWEST);
            edgeDir = Coordinates::eEdgeDirection::EAST;
            break;
        }

        Coordinates::EdgeCoordinate result(edgeCoord, edgeDir);
        return result;
    }

    inline std::vector<Coordinates::EdgeCoordinate> GetTileEdges(const Coordinates::AxialCoordinate& pAxial)
    {
        std::vector<Coordinates::EdgeCoordinate> result;

        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::NORTH));
        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::NORTHEAST));
        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::NORTHWEST));
        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::SOUTH));
        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::SOUTHEAST));
        result.push_back(GetTileEdge(pAxial, Coordinates::eHexDirection::SOUTHWEST));

        return result;
    }

    /// Returns the first vertice of a tile clockwise to the direction.
    inline Coordinates::VerticeCoordinate GetTileVertice(const Coordinates::AxialCoordinate& pAxial, Coordinates::eHexDirection pDir)
    {
        Coordinates::AxialCoordinate verticeCoord(pAxial);
        Coordinates::eVerticeDirection verticeDir = Coordinates::eVerticeDirection::LEFT;

        switch(pDir) {
        case Coordinates::eHexDirection::NORTH:
            verticeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::NORTHEAST);
            verticeDir = Coordinates::eVerticeDirection::LEFT;
            break;
        case Coordinates::eHexDirection::NORTHEAST:
            verticeCoord = pAxial;
            verticeDir = Coordinates::eVerticeDirection::RIGHT;
            break;
        case Coordinates::eHexDirection::NORTHWEST:
            verticeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::NORTHWEST);
            verticeDir = Coordinates::eVerticeDirection::RIGHT;
            break;
        case Coordinates::eHexDirection::SOUTH:
            verticeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHWEST);
            verticeDir = Coordinates::eVerticeDirection::RIGHT;
            break;
        case Coordinates::eHexDirection::SOUTHEAST:
            verticeCoord = GetTileNeighbour(pAxial, Coordinates::eHexDirection::SOUTHEAST);
            verticeDir = Coordinates::eVerticeDirection::LEFT;
            break;
        case Coordinates::eHexDirection::SOUTHWEST:
            verticeCoord = pAxial;
            verticeDir = Coordinates::eVerticeDirection::LEFT;
            break;
        }

        Coordinates::VerticeCoordinate result(verticeCoord, verticeDir);
        return result;
    }

    inline std::vector<Coordinates::VerticeCoordinate> GetTileVertices(const Coordinates::AxialCoordinate& pAxial)
    {
        std::vector<Coordinates::VerticeCoordinate> result;

        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::NORTH));
        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::NORTHEAST));
        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::NORTHWEST));
        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::SOUTH));
        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::SOUTHEAST));
        result.push_back(GetTileVertice(pAxial, Coordinates::eHexDirection::SOUTHWEST));

        return result;
    }

    //*******************************************************
    //
    // Edge connexions
    //
    //*******************************************************

    inline std::vector<Coordinates::AxialCoordinate> GetEdgeTiles(const Coordinates::EdgeCoordinate& pEdge)
    {
        std::vector<Coordinates::AxialCoordinate> result;

        switch(pEdge.GetD()) {
        case Coordinates::eEdgeDirection::EAST:
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1));
            break;
        case Coordinates::eEdgeDirection::NORTH:
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV() + 1));
            break;
        case Coordinates::eEdgeDirection::WEST:
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
            result.push_back(Coordinates::AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()));
            break;
        }

        return result;
    }

    inline std::vector<Coordinates::VerticeCoordinate> GetEdgeVertices(const Coordinates::EdgeCoordinate& pEdge)
    {
        std::vector<Coordinates::VerticeCoordinate> result;

        switch(pEdge.GetD()) {
        case Coordinates::eEdgeDirection::EAST:
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1), Coordinates::eVerticeDirection::LEFT));
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV()), Coordinates::eVerticeDirection::RIGHT));
            break;
        case Coordinates::eEdgeDirection::NORTH:
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()), Coordinates::eVerticeDirection::RIGHT));
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1), Coordinates::eVerticeDirection::LEFT));
            break;
        case Coordinates::eEdgeDirection::WEST:
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()), Coordinates::eVerticeDirection::RIGHT));
            result.push_back(Coordinates::VerticeCoordinate(Coordinates::AxialCoordinate(pEdge.GetU(), pEdge.GetV()), Coordinates::eVerticeDirection::LEFT));
            break;
        }

        return result;
    }

    //*******************************************************
    //
    // Vertice connexions
    //
    //*******************************************************

    inline std::vector<Coordinates::AxialCoordinate> GetVerticeTiles(const Coordinates::VerticeCoordinate& pVertice)
    {
        std::vector<Coordinates::AxialCoordinate> result;

        return result;
    }

    inline std::vector<Coordinates::EdgeCoordinate> GetVerticeEdges(const Coordinates::VerticeCoordinate& pVertice)
    {
        std::vector<Coordinates::EdgeCoordinate> result;

        return result;
    }

    //*******************************************************
    //
    // other helper functions
    //
    //*******************************************************

    inline std::vector<Coordinates::EdgeCoordinate> GetEdgeNeighbours(const Coordinates::EdgeCoordinate& pEdge)
    {
        std::vector<Coordinates::EdgeCoordinate> result;

        return result;
    }

    inline std::vector<Coordinates::VerticeCoordinate> GetVerticeNeighbours(const Coordinates::VerticeCoordinate& pVertice)
    {
        std::vector<Coordinates::VerticeCoordinate> result;

        return result;
    }
}
}