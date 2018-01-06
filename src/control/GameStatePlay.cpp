#include "GameStatePlay.h"

#include <Eigen/Core>

IGP2::Control::GameStatePlay::GameStatePlay(Game* pGame)
{
    mGame = pGame;

    sf::Vector2f pos = sf::Vector2f(mGame->getWindow().getSize());

    mGuiView.setSize(pos);
    mMapView.setSize(pos);
    pos *= 0.5f;
    mGuiView.setCenter(pos);
    mMapView.setCenter(0, 0);

    mMap.initialize(mModel);
}

IGP2::Control::GameStatePlay::~GameStatePlay()
{
    mGame = nullptr;
}

void IGP2::Control::GameStatePlay::draw(const float pDeltaTime)
{
    mGame->getWindow().setView(mMapView);

    mGame->getWindow().setView(mGuiView);

    // TODO:draw the gui
}

void IGP2::Control::GameStatePlay::update(const float pDeltaTime)
{
    Eigen::Vector2f cameraMovement(0, 0);

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        cameraMovement.x() -= 1;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        cameraMovement.x() += 1;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        cameraMovement.y() -= 1;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        cameraMovement.y() += 1;
    }

    cameraMovement.normalize();
    cameraMovement *= 64 * pDeltaTime;

    sf::Vector2f oldPos = mMapView.getCenter();
    mMapView.setCenter(oldPos.x + cameraMovement.x(), oldPos.y + cameraMovement.y());
}

void IGP2::Control::GameStatePlay::handleInput()
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