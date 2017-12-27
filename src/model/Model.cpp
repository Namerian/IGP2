#include "Model.h"

#include <algorithm>

namespace IGP2
{
Model::Model()
{
    int mapRadius = 10;

    for(int u = -mapRadius; u <= mapRadius; u++) {
        int v1 = std::max(-mapRadius, u - mapRadius);
        int v2 = std::max(mapRadius, u + mapRadius);

        for(int v = v1; v <= v2; v++) {
            Coordinates::AxialCoordinate tileCoord(u, v);

            std::pair<std::set<Coordinates::AxialCoordinate>::iterator, bool> tileInsertResult = mTileCoordinateSet.insert(tileCoord);

            if(!tileInsertResult.second) {
                continue;
            }

            // TODO: create tile

            std::vector<Coordinates::EdgeCoordinate> edgesCoords = Graph::GetTileEdges(tileCoord);

            for(unsigned int i = 0; i < edgesCoords.size(); i++) {
                Coordinates::EdgeCoordinate edgeCoord = edgesCoords[i];
                std::pair<std::set<Coordinates::EdgeCoordinate>::iterator, bool> edgeInsertResult = mEdgeCoordSet.insert(edgeCoord);

                if(!edgeInsertResult.second) {
                    continue;
                }

                // TODO: create edge
            }

            std::vector<Coordinates::VerticeCoordinate> vertexCoords = Graph::GetTileVertices(tileCoord);

            for(unsigned int i = 0; i < vertexCoords.size(); i++) {
                Coordinates::VerticeCoordinate vertexCoord = vertexCoords[i];
                std::pair<std::set<Coordinates::VerticeCoordinate>::iterator, bool> vertexInsertResult = mVertexCoordSet.insert(vertexCoord);

                if(!vertexInsertResult.second) {
                    continue;
                }

                // TODO: create vertex
            }
        }
    }
}

Model::~Model()
{
}

std::vector<Coordinates::EdgeCoordinate> Model::GetEdgePositions() const
{
    std::vector<Coordinates::EdgeCoordinate> result;
    std::copy(mEdgeCoordSet.begin(), mEdgeCoordSet.end(), std::back_inserter(result));
    return result;
}
}
