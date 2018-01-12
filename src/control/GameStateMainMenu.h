#pragma once

#include <SFML/Graphics.hpp>

#include "src/control/GameState.h"

namespace IGP2
{

namespace Control
{

    class GameStateMainMenu : public GameState
    {
    public:
        GameStateMainMenu(Game* pGame);
        virtual ~GameStateMainMenu();

        virtual void draw(const float pDeltaTime);
        virtual void update(const float pDeltaTime);
        virtual void handleEvent(const sf::Event& pEvent);

    private:
        sf::View mView;
    };
}
}
