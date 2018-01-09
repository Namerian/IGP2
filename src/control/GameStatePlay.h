#pragma once

#include <SFML/Graphics.hpp>

#include "src/control/GameState.h"
#include "src/model/ModelManager.h"
#include "src/view/MapView.h"

namespace IGP2
{

namespace Control
{

    class GameStatePlay : public GameState
    {
    public:
        GameStatePlay(Game* pGame);
        virtual ~GameStatePlay();

        virtual void draw(const float pDeltaTime);
        virtual void update(const float pDeltaTime);
        virtual void handleInput();

    private:
        sf::View mMapView;
        sf::View mGuiView;

        View::MapView mMap;
    };
}
}
