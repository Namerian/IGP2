#include "src/model/CoordinateUtility.h"

IGP2::Model::AxialCoordinate IGP2::Model::CoordinateUtility::CubeToAxial(const CubeCoordinate& pCube)
{
    return AxialCoordinate(pCube.GetX(), pCube.GetZ());
}

IGP2::Model::CubeCoordinate IGP2::Model::CoordinateUtility::AxialToCube(const AxialCoordinate& pAxial)
{
    int x = pAxial.GetU();
    int z = pAxial.GetV();
    int y = -x - z;

    return CubeCoordinate(x, y, z);
}

IGP2::Model::OffsetCoordinate IGP2::Model::CoordinateUtility::CubeToOffset(const CubeCoordinate& pCube)
{
    int col = pCube.GetX();
    int row = -pCube.GetZ() + (pCube.GetX() - (pCube.GetX() & 1)) / 2;

    return OffsetCoordinate(col, row);
}

IGP2::Model::CubeCoordinate IGP2::Model::CoordinateUtility::OffsetToCube(const OffsetCoordinate& pOffset)
{
    int x = pOffset.GetCol();
    int z = -pOffset.GetRow() + (pOffset.GetCol() - (pOffset.GetCol() & 1)) / 2;
    int y = -x - z;

    return CubeCoordinate(x, y, z);
}

IGP2::Model::AxialCoordinate IGP2::Model::CoordinateUtility::OffsetToAxial(const OffsetCoordinate& pOffset)
{
    return CubeToAxial(OffsetToCube(pOffset));
}

IGP2::Model::OffsetCoordinate IGP2::Model::CoordinateUtility::AxialToOffset(const AxialCoordinate& pAxial)
{
    return CubeToOffset(AxialToCube(pAxial));
}

sf::Vector2f IGP2::Model::CoordinateUtility::AxialToPixel(const AxialCoordinate& pAxial)
{
    return sf::Vector2f((float)pAxial.GetU() * GetAxisU() + (float)pAxial.GetV() * GetAxisV());
}

sf::Vector2f IGP2::Model::CoordinateUtility::VertexToPixel(const VerticeCoordinate& pVertice)
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