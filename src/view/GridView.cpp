#include "GridView.h"

namespace IGP2
{
namespace View
{
    GridView::GridView(const Model& pModel)
    {
        auto edgeCoords = pModel.GetEdgePositions();

        mVertexArray.clear();

        for(unsigned int i = 0; i < edgeCoords.size(); i++) {
            auto vertices = Graph::GetEdgeVertices(edgeCoords[i]);

            mVertexArray.push_back(sf::Vertex(Coordinates::VertexToPixel(vertices[0]), sf::Color::Red));
            mVertexArray.push_back(sf::Vertex(Coordinates::VertexToPixel(vertices[1]), sf::Color::Red));
        }
    }

    GridView::~GridView()
    {
    }

    void GridView::draw(sf::RenderWindow& pRenderWindow)
    {
        pRenderWindow.draw(&mVertexArray[0], mVertexArray.size(), sf::Lines);
    }
}
}