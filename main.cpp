#include <SFML/Graphics.hpp>

#include "src/GameController.h"

using namespace IGP2;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!", sf::Style::Default);
    window.setVerticalSyncEnabled(true);

    IGP2::GameController gameController;

    sf::Clock clock;

    while(window.isOpen()) {
        sf::Event event;

        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        // updating
        sf::Time elapsed = clock.restart();
        gameController.update(elapsed.asSeconds());

        // rendering
        window.clear();

        gameController.draw(&window);

        window.display();
    }

    return 0;
}
