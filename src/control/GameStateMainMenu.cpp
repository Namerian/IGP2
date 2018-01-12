#include "GameStateMainMenu.h"

IGP2::Control::GameStateMainMenu::GameStateMainMenu(Game* pGame)
{
    mGame = pGame;

    sf::Vector2f pos = sf::Vector2f(mGame->getWindow().getSize());
    mView.setSize(pos);
    pos *= 0.5f;
    mView.setCenter(pos);

    mGame->getTextureHolder().load("GFX_test_button", "../media/test_button.png");
    mGame->getFontHolder().load("font", "../media/font.ttf");
}

IGP2::Control::GameStateMainMenu::~GameStateMainMenu()
{
    mGame = nullptr;
}

void IGP2::Control::GameStateMainMenu::draw(const float pDeltaTime)
{
    mGame->getWindow().setView(mView);

    // TODO: draw stuff
}

void IGP2::Control::GameStateMainMenu::update(const float pDeltaTime)
{
}

void IGP2::Control::GameStateMainMenu::handleEvent(const sf::Event& pEvent)
{
    switch(pEvent.type) {
    case sf::Event::Closed: {
        mGame->getWindow().close();
        break;
    }
    case sf::Event::Resized: {
        // this should not happen!
        break;
    }
    case sf::Event::KeyPressed: {
        if(pEvent.key.code == sf::Keyboard::Escape) {
            mGame->getWindow().close();
        }
        break;
    }
    default:
        break;
    }
}