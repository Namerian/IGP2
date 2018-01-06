/*#pragma once

#include <Eigen/Core>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "src/model/ModelManager.h"
#include "src/view/MapView.h"

namespace IGP2
{
namespace Control
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
        Model::ModelManager mModel;

        View::MapView mMapView;

        sf::View mCameraView;
    };
}
}
*/