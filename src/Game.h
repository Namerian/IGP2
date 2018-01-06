#pragma once

#include <stack>

#include <SFML/Graphics.hpp>

#include "src/view/TextureManager.h"

namespace IGP2
{

namespace Control
{
    class GameState;
}

class Game
{
public:
    Game();
    virtual ~Game();

    void gameloop();

    sf::RenderWindow& getWindow();
    View::TextureManager& getTextureManager();

    void pushState(Control::GameState* pState);
    void popState();
    void changeState(Control::GameState* pState);
    Control::GameState* peekState();

private:
    sf::RenderWindow mWindow;
    View::TextureManager mTextureManager;

    std::stack<Control::GameState*> mStates;
};
}
