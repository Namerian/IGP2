#include "GuiButton.h"

IGP2::View::GuiButton::GuiButton(std::string pName, sf::Vector2f pPosition, sf::Texture& pTexture, sf::Font& pFont)
    : GuiElement(pName, eGuiElementType::Button)
{
    setPosition(pPosition);

    mSprite.setTexture(pTexture);
    mText.setFont(pFont);

    sf::FloatRect bounds = mSprite.getLocalBounds();
    mText.setPosition(bounds.width / 2.f, bounds.height / 2.f);
}

void IGP2::View::GuiButton::setCallback(Callback pCallback)
{
    mCallback = pCallback;
}

void IGP2::View::GuiButton::setText(const std::string& pText)
{
    mText.setString(pText);
}

void IGP2::View::GuiButton::handleEvent(const sf::Event& pEvent)
{
}

void IGP2::View::GuiButton::draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const
{
    pStates.transform *= getTransform();
    pTarget.draw(mSprite, pStates);
    pTarget.draw(mText, pStates);
}