/*#pragma once

#include <SFML/Graphics.hpp>

namespace IGP2
{

namespace View
{

    class GuiStyle
    {
    public:
        GuiStyle();
        GuiStyle(sf::Color pTextColor, sf::Color pTextHighlightedColor, sf::Font* pFont);
        virtual ~GuiStyle();

        sf::Color getTextColor() const;
        sf::Color getTextHighlightedColor() const;

        sf::Font* getFont() const;

    private:
        sf::Color mTextColor;
        sf::Color mTextHighlightedColor;

        sf::Font* mFont;
    };
}
}
*/