#include "GameStateMainMenu.h"

IGP2::Control::GameStateMainMenu::GameStateMainMenu(Game* pGame)
{
    mGame = pGame;

    sf::Vector2f pos = sf::Vector2f(mGame->getWindow().getSize());
    mView.setSize(pos);
    pos *= 0.5f;
    mView.setCenter(pos);
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

void IGP2::Control::GameStateMainMenu::handleInput()
{
    sf::Event event;

    while(mGame->getWindow().pollEvent(event)) {
        switch(event.type) {
        case sf::Event::Closed: {
            mGame->getWindow().close();
            break;
        }
        case sf::Event::Resized: {
            // this should not happen!

            /*mView.setSize(event.size.width, event.size.height);

            game->background.setPosition(this->game->window.mapPixelToCoords(sf::Vector2i(0, 0)));
            this->game->background.setScale(
                float(event.size.width) / float(this->game->background.getTexture()->getSize().x),
                float(event.size.height) / float(this->game->background.getTexture()->getSize().y));*/
            break;
        }
        case sf::Event::KeyPressed: {
            if(event.key.code == sf::Keyboard::Escape) {
                mGame->getWindow().close();
            }
            break;
        }
        default:
            break;
        }
    }
}