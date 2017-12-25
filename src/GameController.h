#pragma once

#include <SFML/Graphics.hpp>

namespace IGP2
{
class GameController
{
public:
    GameController();
    virtual ~GameController();

    void update(float pDeltaTime);
    void draw(sf::RenderWindow* pWindow);

protected:
private:
};
}
