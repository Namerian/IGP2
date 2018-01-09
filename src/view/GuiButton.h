#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include "src/view/GuiElement.h"

namespace IGP2
{

namespace View
{

    class GuiButton : public GuiElement
    {
    public:
        GuiButton();
        GuiButton(std::string pName, sf::Vector2f pPosition, sf::Texture& pTexture, std::string pMessage, sf::Font& pFont);
        virtual ~GuiButton();

        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

        void update(sf::Event& pEvent, sf::RenderWindow& window);

    private:
        sf::RectangleShape mShape;
        sf::Text mText;
    };
}
}
