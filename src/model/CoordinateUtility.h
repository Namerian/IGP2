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
namespace Model
{
    namespace CoordinateUtility
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

        AxialCoordinate CubeToAxial(const CubeCoordinate& pCube);

        CubeCoordinate AxialToCube(const AxialCoordinate& pAxial);

        OffsetCoordinate CubeToOffset(const CubeCoordinate& pCube);

        CubeCoordinate OffsetToCube(const OffsetCoordinate& pOffset);

        AxialCoordinate OffsetToAxial(const OffsetCoordinate& pOffset);

        OffsetCoordinate AxialToOffset(const AxialCoordinate& pAxial);

        sf::Vector2f AxialToPixel(const AxialCoordinate& pAxial);

        sf::Vector2f VertexToPixel(const VerticeCoordinate& pVertice);
    }
}
}