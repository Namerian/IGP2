#include "GuiButton.h"

IGP2::View::GuiButton::GuiButton()
{
}

IGP2::View::GuiButton::GuiButton(std::string pName, sf::Vector2f pPosition, sf::Texture& pTexture, std::string pMessage, sf::Font& pFont)
{
    //    mName = pName;
    //    mType = eGuiElementType::Button;
    //
    //    mShape.setPosition(pPosition);
    //    mShape.setTexture(&pTexture, true);
    //
    //    sf::Vector2f
    //
    //        mText.setPosition(pPosition);
    //    mText.set mText.setFont(pFont);
    //    mText.setString(pMessage);
}

IGP2::View::GuiButton::~GuiButton()
{
}

void IGP2::View::GuiButton::draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const
{
}