#pragma once

#include <Eigen/Core>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "src/model/Model.h"
#include "src/view/MapView.h"

namespace IGP2
{
class GameController
{
public:
    GameController();
    virtual ~GameController();

    void update(float pDeltaTime);
    void draw(sf::RenderWindow& pRenderWindow);

protected:
private:
    Model mModel;

    View::MapView mMapView;

    sf::View mCameraView;
};
}
