#pragma once

#include <SFML/System.hpp>

#include "EdgeDirection.h"
#include "HexDirection.h"
#include "VerticeDirection.h"

#include "AxialCoordinate.h"
#include "CubeCoordinate.h"
#include "EdgeCoordinate.h"
#include "OffsetCoordinate.h"
#include "VerticeCoordinate.h"

namespace IGP2
{
namespace Coordinates
{
    //***************************************

    const float HEX_WIDTH = 64.0f;
    const float HEX_SIZE = HEX_WIDTH * 0.5f;
    const float HEX_HEIGHT = 0.866025404f /* hardcoded sqrt(3)/2 */ * HEX_WIDTH;

    inline sf::Vector2f GetAxisV()
    {
        sf::Vector2f result(0, HEX_HEIGHT);
        return result;
    }

    inline sf::Vector2f GetAxisU()
    {
        sf::Vector2f result(0.75f * HEX_WIDTH, -0.5f * HEX_HEIGHT);
        return result;
    }

    //***************************************

    inline AxialCoordinate CubeToAxial(const CubeCoordinate& pCube)
    {
        AxialCoordinate result(pCube.GetX(), pCube.GetZ());
        return result;
    }

    inline CubeCoordinate AxialToCube(const AxialCoordinate& pAxial)
    {
        int x = pAxial.GetU();
        int z = pAxial.GetV();
        int y = -x - z;

        CubeCoordinate result(x, y, z);
        return result;
    }

    inline OffsetCoordinate CubeToOffset(const CubeCoordinate& pCube)
    {
        int col = pCube.GetX();
        int row = -pCube.GetZ() + (pCube.GetX() - (pCube.GetX() & 1)) / 2;

        OffsetCoordinate result(col, row);
        return result;
    }

    inline CubeCoordinate OffsetToCube(const OffsetCoordinate& pOffset)
    {
        int x = pOffset.GetCol();
        int z = -pOffset.GetRow() + (pOffset.GetCol() - (pOffset.GetCol() & 1)) / 2;
        int y = -x - z;

        CubeCoordinate result(x, y, z);
        return result;
    }

    inline AxialCoordinate OffsetToAxial(const OffsetCoordinate& pOffset)
    {
        return CubeToAxial(OffsetToCube(pOffset));
    }

    inline OffsetCoordinate AxialToOffset(const AxialCoordinate& pAxial)
    {
        return CubeToOffset(AxialToCube(pAxial));
    }

    inline sf::Vector2f AxialToPixel(const AxialCoordinate& pAxial)
    {
        sf::Vector2f result = (float)pAxial.GetU() * GetAxisU() + (float)pAxial.GetV() * GetAxisV();
        return result;
    }

    inline sf::Vector2f VertexToPixel(const VerticeCoordinate& pVertice)
    {
        sf::Vector2f result = (float)pVertice.GetU() * GetAxisU() + (float)pVertice.GetV() * GetAxisV();
        eVerticeDirection dir = pVertice.GetD();

        if(dir == eVerticeDirection::LEFT) {
            result.x -= HEX_SIZE;
        } else if(dir == eVerticeDirection::RIGHT) {
            result.x += HEX_SIZE;
        }

        return result;
    }
}
}