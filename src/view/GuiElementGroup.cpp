#include "GuiElementGroup.h"

IGP2::View::GuiElementGroup::GuiElementGroup()
{
}

IGP2::View::GuiElementGroup::~GuiElementGroup()
{
}

void IGP2::View::GuiElementGroup::draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const
{
}

void IGP2::View::GuiElementGroup::addChild(const GuiElement* pChild)
{
}

void IGP2::View::GuiElementGroup::removeChild(const GuiElement* pChild)
{
}

std::vector<IGP2::View::GuiElement*>& IGP2::View::GuiElementGroup::getChildren()
{
    return mChildren;
}
