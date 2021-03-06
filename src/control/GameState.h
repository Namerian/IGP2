#pragma once

#include "src/Game.h"

namespace IGP2
{

namespace Control
{

    class GameState
    {
    public:
        virtual ~GameState(){};

        virtual void draw(const float pDeltaTime) = 0;
        virtual void update(const float pDeltaTime) = 0;
        virtual void handleEvent(const sf::Event& pEvent) = 0;

    protected:
        Game* mGame;
    };
}
}
