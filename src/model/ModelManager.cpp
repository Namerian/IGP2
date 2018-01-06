#include "ModelManager.h"

#include <algorithm>

IGP2::Model::ModelManager::ModelManager()
{
    int mapRadius = 10;

    // creating graph
    for(int u = -mapRadius; u <= mapRadius; u++) {
        int v1 = std::max(-mapRadius, u - mapRadius);
        int v2 = std::min(mapRadius, u + mapRadius);

        for(int v = v1; v <= v2; v++) {
            AxialCoordinate tileCoord(u, v);

            std::pair<std::set<AxialCoordinate>::iterator, bool> tileInsertResult =
                mTileCoordinateSet.insert(tileCoord);

            if(!tileInsertResult.second) {
                continue;
            }

            // TODO: create tile

            std::vector<EdgeCoordinate> edgesCoords = GraphUtility::GetTileEdges(tileCoord);

            for(unsigned int i = 0; i < edgesCoords.size(); i++) {
                EdgeCoordinate edgeCoord = edgesCoords[i];
                std::pair<std::set<EdgeCoordinate>::iterator, bool> edgeInsertResult = mEdgeCoordSet.insert(edgeCoord);

                if(!edgeInsertResult.second) {
                    continue;
                }

                // TODO: create edge
            }

            std::vector<VerticeCoordinate> vertexCoords = GraphUtility::GetTileVertices(tileCoord);

            for(unsigned int i = 0; i < vertexCoords.size(); i++) {
                VerticeCoordinate vertexCoord = vertexCoords[i];
                std::pair<std::set<VerticeCoordinate>::iterator, bool> vertexInsertResult =
                    mVertexCoordSet.insert(vertexCoord);

                if(!vertexInsertResult.second) {
                    continue;
                }

                // TODO: create vertex
            }
        }
    }

    //
    CreateResource(AxialCoordinate(0, 0), eResourceType::IRON, 15000);
    CreateResource(AxialCoordinate(5, 4), eResourceType::COAL, 15000);
}

IGP2::Model::ModelManager::~ModelManager()
{
}

std::vector<IGP2::Model::EdgeCoordinate> IGP2::Model::ModelManager::GetEdgePositions() const
{
    std::vector<EdgeCoordinate> result;
    std::copy(mEdgeCoordSet.begin(), mEdgeCoordSet.end(), std::back_inserter(result));
    return result;
}

void IGP2::Model::ModelManager::CreateResource(const AxialCoordinate& pPosition, eResourceType pType, int pAmount)
{
    mResources.push_back(Resource(pPosition, pType, pAmount));

    mTileMap[pPosition].AddResource(&mResources[mResources.size() - 1]);
}
