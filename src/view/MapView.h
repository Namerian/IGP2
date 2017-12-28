#pragma once

#include <SFML/Graphics.hpp>

#include "src/model/Model.h"

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
        
        void initialize(const Model& pModel);
        void draw(sf::RenderWindow& pRenderWindow);

    private:
        GridView mGridView;
    };
}
}