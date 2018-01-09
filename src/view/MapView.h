#pragma once

#include <SFML/Graphics.hpp>

#include "src/model/ModelManager.h"
#include "src/view/GridView.h"

namespace IGP2
{
namespace View
{
    class MapView : public sf::Drawable
    {
    public:
        MapView();
        ~MapView();

        void initialize(const Model::ModelManager& pModel);
        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

    private:
        GridView mGridView;
    };
}
}