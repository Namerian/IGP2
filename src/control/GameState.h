#pragma once

namespace IGP2
{

namespace Control
{

    class GameState
    {
    public:
        GameState();
        virtual ~GameState();

        virtual void draw(const float pDeltaTime) = 0;
        virtual void update(const float pDeltaTime) = 0;
        virtual void handleInput() = 0;
    };
}
}
