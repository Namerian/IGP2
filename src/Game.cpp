#include "Game.h"

#include "src/control/GameState.h"
#include "src/control/GameStateMainMenu.h"

IGP2::Game::Game()
{
    mWindow.create(sf::VideoMode(1024, 800), "IGP2", sf::Style::Titlebar | sf::Style::Close);
    mWindow.setVerticalSyncEnabled(true);
}

IGP2::Game::~Game()
{
    while(!mStates.empty()) {
        popState();
    }
}

void IGP2::Game::gameloop()
{
    sf::Clock clock;

    pushState(new Control::GameStateMainMenu(this));

    while(mWindow.isOpen()) {
        // updating
        sf::Time elapsed = clock.restart();
        float deltaTime = elapsed.asSeconds();

        if(peekState() == nullptr) {
            continue;
        }

        peekState()->handleInput();
        peekState()->update(deltaTime);

        // rendering
        mWindow.clear();

        peekState()->draw(deltaTime);

        mWindow.display();
    }
}

sf::RenderWindow& IGP2::Game::getWindow()
{
    return mWindow;
}

IGP2::View::ResourceManager& IGP2::Game::getResourceManager()
{
    return mResourceManager;
}

IGP2::Model::ModelManager& IGP2::Game::getModel()
{
    return mModel;
}

void IGP2::Game::pushState(Control::GameState* pState)
{
    mStates.push(pState);
}

void IGP2::Game::popState()
{
    delete mStates.top();
    mStates.pop();
}

void IGP2::Game::changeState(IGP2::Control::GameState* pState)
{
    if(!mStates.empty()) {
        popState();
    }
    pushState(pState);
}

IGP2::Control::GameState* IGP2::Game::peekState()
{
    if(mStates.empty()) {
        return nullptr;
    }
    return mStates.top();
}