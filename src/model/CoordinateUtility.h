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
            return sf::Vector2f(0, HEX_HEIGHT);
        }

        inline sf::Vector2f GetAxisU()
        {
            return sf::Vector2f(0.75f * HEX_WIDTH, -0.5f * HEX_HEIGHT);
        }

        //***************************************

        inline AxialCoordinate CubeToAxial(const CubeCoordinate& pCube);

        inline CubeCoordinate AxialToCube(const AxialCoordinate& pAxial);

        inline OffsetCoordinate CubeToOffset(const CubeCoordinate& pCube);

        inline CubeCoordinate OffsetToCube(const OffsetCoordinate& pOffset);

        inline AxialCoordinate OffsetToAxial(const OffsetCoordinate& pOffset);

        inline OffsetCoordinate AxialToOffset(const AxialCoordinate& pAxial);

        inline sf::Vector2f AxialToPixel(const AxialCoordinate& pAxial);

        inline sf::Vector2f VertexToPixel(const VerticeCoordinate& pVertice);
    }
}
}

#include "src/model/CoordinateUtility.inl"
