#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

#include "src/model/Model.h"

namespace IGP2
{
namespace View
{
    class GridView
    {
    public:
        GridView();
        ~GridView();

        void initialize(const Model& pModel);
        void draw(sf::RenderWindow& pRenderWindow);

    private:
        std::vector<sf::Vertex> mVertexArray;
    };
}
}