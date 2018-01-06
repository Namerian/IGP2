/*#include "GameController.h"

IGP2::Control::GameController::GameController()
{
    mMapView.initialize(mModel);

    mCameraView.setCenter(0, 0);
    mCameraView.setSize(1024, 800);
}

IGP2::Control::GameController::~GameController()
{
}

void IGP2::Control::GameController::update(float pDeltaTime)
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

    sf::Vector2f oldPos = mCameraView.getCenter();
    mCameraView.setCenter(oldPos.x + cameraMovement.x(), oldPos.y + cameraMovement.y());
}

void IGP2::Control::GameController::draw(sf::RenderWindow& pRenderWindow)
{
    pRenderWindow.setView(mCameraView);

    mMapView.draw(pRenderWindow);
}
*/