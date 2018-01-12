inline IGP2::Model::AxialCoordinate IGP2::Model::GraphUtility::GetTileNeighbour(const AxialCoordinate& pAxial, eHexDirection pDir)
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

    return AxialCoordinate(u, v);
}

inline std::vector<IGP2::Model::AxialCoordinate> IGP2::Model::GraphUtility::GetTileNeighbours(const AxialCoordinate& pAxial)
{
    std::vector<AxialCoordinate> result;

    result.push_back(GetTileNeighbour(pAxial, eHexDirection::NORTH));
    result.push_back(GetTileNeighbour(pAxial, eHexDirection::NORTHEAST));
    result.push_back(GetTileNeighbour(pAxial, eHexDirection::NORTHWEST));
    result.push_back(GetTileNeighbour(pAxial, eHexDirection::SOUTH));
    result.push_back(GetTileNeighbour(pAxial, eHexDirection::SOUTHEAST));
    result.push_back(GetTileNeighbour(pAxial, eHexDirection::SOUTHWEST));

    return result;
}

inline IGP2::Model::EdgeCoordinate IGP2::Model::GraphUtility::GetTileEdge(const AxialCoordinate& pAxial, eHexDirection pDir)
{
    AxialCoordinate edgeCoord(pAxial);
    eEdgeDirection edgeDir = eEdgeDirection::NORTH;

    switch(pDir) {
    case eHexDirection::NORTH:
        break;
    case eHexDirection::NORTHEAST:
        edgeDir = eEdgeDirection::EAST;
        break;
    case eHexDirection::NORTHWEST:
        edgeDir = eEdgeDirection::WEST;
        break;
    case eHexDirection::SOUTH:
        edgeCoord = GetTileNeighbour(pAxial, eHexDirection::SOUTH);
        edgeDir = eEdgeDirection::NORTH;
        break;
    case eHexDirection::SOUTHEAST:
        edgeCoord = GetTileNeighbour(pAxial, eHexDirection::SOUTHEAST);
        edgeDir = eEdgeDirection::WEST;
        break;
    case eHexDirection::SOUTHWEST:
        edgeCoord = GetTileNeighbour(pAxial, eHexDirection::SOUTHWEST);
        edgeDir = eEdgeDirection::EAST;
        break;
    }

    return EdgeCoordinate(edgeCoord, edgeDir);
}

inline std::vector<IGP2::Model::EdgeCoordinate> IGP2::Model::GraphUtility::GetTileEdges(const AxialCoordinate& pAxial)
{
    std::vector<EdgeCoordinate> result;

    result.push_back(GetTileEdge(pAxial, eHexDirection::NORTH));
    result.push_back(GetTileEdge(pAxial, eHexDirection::NORTHEAST));
    result.push_back(GetTileEdge(pAxial, eHexDirection::NORTHWEST));
    result.push_back(GetTileEdge(pAxial, eHexDirection::SOUTH));
    result.push_back(GetTileEdge(pAxial, eHexDirection::SOUTHEAST));
    result.push_back(GetTileEdge(pAxial, eHexDirection::SOUTHWEST));

    return result;
}

/// Returns the first vertice of a tile clockwise to the direction.
inline IGP2::Model::VerticeCoordinate IGP2::Model::GraphUtility::GetTileVertice(const AxialCoordinate& pAxial, eHexDirection pDir)
{
    AxialCoordinate verticeCoord(pAxial);
    eVerticeDirection verticeDir = eVerticeDirection::LEFT;

    switch(pDir) {
    case eHexDirection::NORTH:
        verticeCoord = GetTileNeighbour(pAxial, eHexDirection::NORTHEAST);
        verticeDir = eVerticeDirection::LEFT;
        break;
    case eHexDirection::NORTHEAST:
        verticeCoord = pAxial;
        verticeDir = eVerticeDirection::RIGHT;
        break;
    case eHexDirection::NORTHWEST:
        verticeCoord = GetTileNeighbour(pAxial, eHexDirection::NORTHWEST);
        verticeDir = eVerticeDirection::RIGHT;
        break;
    case eHexDirection::SOUTH:
        verticeCoord = GetTileNeighbour(pAxial, eHexDirection::SOUTHWEST);
        verticeDir = eVerticeDirection::RIGHT;
        break;
    case eHexDirection::SOUTHEAST:
        verticeCoord = GetTileNeighbour(pAxial, eHexDirection::SOUTHEAST);
        verticeDir = eVerticeDirection::LEFT;
        break;
    case eHexDirection::SOUTHWEST:
        verticeCoord = pAxial;
        verticeDir = eVerticeDirection::LEFT;
        break;
    }

    return VerticeCoordinate(verticeCoord, verticeDir);
}

inline std::vector<IGP2::Model::VerticeCoordinate> IGP2::Model::GraphUtility::GetTileVertices(const AxialCoordinate& pAxial)
{
    std::vector<VerticeCoordinate> result;

    result.push_back(GetTileVertice(pAxial, eHexDirection::NORTH));
    result.push_back(GetTileVertice(pAxial, eHexDirection::NORTHEAST));
    result.push_back(GetTileVertice(pAxial, eHexDirection::NORTHWEST));
    result.push_back(GetTileVertice(pAxial, eHexDirection::SOUTH));
    result.push_back(GetTileVertice(pAxial, eHexDirection::SOUTHEAST));
    result.push_back(GetTileVertice(pAxial, eHexDirection::SOUTHWEST));

    return result;
}

inline std::vector<IGP2::Model::AxialCoordinate> IGP2::Model::GraphUtility::GetEdgeTiles(const EdgeCoordinate& pEdge)
{
    std::vector<AxialCoordinate> result;

    switch(pEdge.GetD()) {
    case eEdgeDirection::EAST:
        result.push_back(AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
        result.push_back(AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1));
        break;
    case eEdgeDirection::NORTH:
        result.push_back(AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
        result.push_back(AxialCoordinate(pEdge.GetU(), pEdge.GetV() + 1));
        break;
    case eEdgeDirection::WEST:
        result.push_back(AxialCoordinate(pEdge.GetU(), pEdge.GetV()));
        result.push_back(AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()));
        break;
    }

    return result;
}

inline std::vector<IGP2::Model::VerticeCoordinate> IGP2::Model::GraphUtility::GetEdgeVertices(const EdgeCoordinate& pEdge)
{
    std::vector<VerticeCoordinate> result;

    switch(pEdge.GetD()) {
    case eEdgeDirection::EAST:
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1), eVerticeDirection::LEFT));
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU(), pEdge.GetV()), eVerticeDirection::RIGHT));
        break;
    case eEdgeDirection::NORTH:
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()), eVerticeDirection::RIGHT));
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU() + 1, pEdge.GetV() + 1), eVerticeDirection::LEFT));
        break;
    case eEdgeDirection::WEST:
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU() - 1, pEdge.GetV()), eVerticeDirection::RIGHT));
        result.push_back(VerticeCoordinate(AxialCoordinate(pEdge.GetU(), pEdge.GetV()), eVerticeDirection::LEFT));
        break;
    }

    return result;
}

inline std::vector<IGP2::Model::AxialCoordinate> IGP2::Model::GraphUtility::GetVerticeTiles(const VerticeCoordinate& pVertice)
{
    std::vector<AxialCoordinate> result;

    // TODO

    return result;
}

inline std::vector<IGP2::Model::EdgeCoordinate> IGP2::Model::GraphUtility::GetVerticeEdges(const VerticeCoordinate& pVertice)
{
    std::vector<EdgeCoordinate> result;

    // TODO

    return result;
}

inline std::vector<IGP2::Model::EdgeCoordinate> IGP2::Model::GraphUtility::GetEdgeNeighbours(const EdgeCoordinate& pEdge)
{
    std::vector<EdgeCoordinate> result;

    // TODO

    return result;
}

inline std::vector<IGP2::Model::VerticeCoordinate> IGP2::Model::GraphUtility::GetVerticeNeighbours(const VerticeCoordinate& pVertice)
{
    std::vector<VerticeCoordinate> result;

    // TODO

    return result;
}
