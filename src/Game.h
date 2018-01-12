#pragma once

#include <stack>

#include <SFML/Graphics.hpp>

#include "src/model/ModelManager.h"
#include "src/view/ResourceHolder.h"

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

    View::TextureHolder& getTextureHolder();
    View::FontHolder& getFontHolder();

    void pushState(Control::GameState* pState);
    void popState();
    void changeState(Control::GameState* pState);
    Control::GameState* peekState();

private:
    sf::RenderWindow mWindow;

    View::TextureHolder mTextureHolder;
    View::FontHolder mFontHolder;

    std::stack<Control::GameState*> mStates;
};
}
