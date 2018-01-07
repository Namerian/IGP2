#include "GuiStyle.h"

IGP2::View::GuiStyle::GuiStyle()
{
}

IGP2::View::GuiStyle::GuiStyle(sf::Color pTextColor, sf::Color pTextHighlightedColor, sf::Font* pFont)
{
    mTextColor = pTextColor;
    mTextHighlightedColor = pTextHighlightedColor;

    mFont = pFont;
}

IGP2::View::GuiStyle::~GuiStyle()
{
}

sf::Color IGP2::View::GuiStyle::getTextColor() const
{
    return mTextColor;
}

sf::Color IGP2::View::GuiStyle::getTextHighlightedColor() const
{
    return mTextHighlightedColor;
}

sf::Font* IGP2::View::GuiStyle::getFont() const
{
    return mFont;
}