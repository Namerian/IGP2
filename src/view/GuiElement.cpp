#include "GuiElement.h"

IGP2::View::GuiElement::GuiElement()
{
}

IGP2::View::GuiElement::GuiElement(sf::RectangleShape pShape, std::string pName)
{
    mShape = pShape;
    mName = pName;
}

IGP2::View::GuiElement::~GuiElement()
{
}

void IGP2::View::GuiElement::draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const
{
}

sf::RectangleShape& IGP2::View::GuiElement::getShape()
{
    return mShape;
}

std::string IGP2::View::GuiElement::getName()
{
    return mName;
}

void IGP2::View::GuiElement::setName(std::string pName)
{
    mName = pName;
}
