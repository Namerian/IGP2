#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

#include "src/model/CoordinateUtility.h"
#include "src/model/ModelManager.h"

namespace IGP2
{
namespace View
{
    class GridView : public sf::Drawable
    {
    public:
        GridView();
        ~GridView();

        void initialize(const Model::ModelManager& pModel);
        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

    private:
        std::vector<sf::Vertex> mVertexArray;
    };
}
}