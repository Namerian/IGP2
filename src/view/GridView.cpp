#include "GridView.h"

namespace IGP2
{
namespace View
{
    GridView::GridView()
    {
    }

    GridView::~GridView()
    {
    }

    void GridView::initialize(const Model& pModel)
    {
        std::vector<Coordinates::EdgeCoordinate> edgeCoords = pModel.GetEdgePositions();

        mVertexArray.clear();

        for(unsigned int i = 0; i < edgeCoords.size(); i++) {
            std::vector<Coordinates::VerticeCoordinate> vertices = Graph::GetEdgeVertices(edgeCoords[i]);

            mVertexArray.push_back(sf::Vertex(Coordinates::VertexToPixel(vertices[0]), sf::Color::Red));
            mVertexArray.push_back(sf::Vertex(Coordinates::VertexToPixel(vertices[1]), sf::Color::Red));
        }
    }

    void GridView::draw(sf::RenderWindow& pRenderWindow)
    {
        pRenderWindow.draw(&mVertexArray[0], mVertexArray.size(), sf::Lines);
    }
}
}