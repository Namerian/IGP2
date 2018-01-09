#pragma once

#include <stack>

#include <SFML/Graphics.hpp>

#include "src/model/ModelManager.h"
#include "src/view/ResourceManager.h"

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
    View::ResourceManager& getResourceManager();
    Model::ModelManager& getModel();

    void pushState(Control::GameState* pState);
    void popState();
    void changeState(Control::GameState* pState);
    Control::GameState* peekState();

private:
    sf::RenderWindow mWindow;
    View::ResourceManager mResourceManager;
    Model::ModelManager mModel;

    std::stack<Control::GameState*> mStates;
};
}
