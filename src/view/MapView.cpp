#include "MapView.h"

namespace IGP2
{
namespace View
{
    MapView::MapView()
    {
    }

    MapView::~MapView()
    {
    }

    void MapView::initialize(const Model& pModel)
    {
        mGridView.initialize(pModel);
    }

    void MapView::draw(sf::RenderWindow& pRenderWindow)
    {
        mGridView.draw(pRenderWindow);
    }
}
}