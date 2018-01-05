#pragma once

#include <stack>

#include <SFML/Graphics.hpp>

#include "src/control/GameController.h"

namespace IGP2
{

class Game
{
public:
    Game();
    virtual ~Game();

    void gameloop();

private:
    sf::RenderWindow mWindow;
};
}
