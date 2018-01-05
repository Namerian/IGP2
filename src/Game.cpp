#include "Game.h"

IGP2::Game::Game()
{
    mWindow.create(sf::VideoMode(1024, 800), "IGP2", sf::Style::Default);
    mWindow.setVerticalSyncEnabled(true);
}

IGP2::Game::~Game()
{
}

void IGP2::Game::gameloop()
{
    sf::Clock clock;

    while(mWindow.isOpen()) {
        sf::Event event;

        while(mWindow.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                mWindow.close();
        }

        // updating
        sf::Time elapsed = clock.restart();

        // rendering
        mWindow.clear();

        mWindow.display();
    }
}