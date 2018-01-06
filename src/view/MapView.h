#pragma once

#include <SFML/Graphics.hpp>

#include "src/model/ModelManager.h"

#include "GridView.h"

namespace IGP2
{
namespace View
{
    class MapView
    {
    public:
        MapView();
        ~MapView();

        void initialize(const Model::ModelManager& pModel);
        void draw(sf::RenderWindow& pRenderWindow);

    private:
        GridView mGridView;
    };
}
}