/*#pragma once

#include <vector>

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include "src/view/GuiElement.h"

namespace IGP2
{

namespace View
{

    class GuiViewManager : public sf::Drawable
    {
    public:
        GuiViewManager();
        virtual ~GuiViewManager();

        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

        void AddGuiElement(const GuiElement* pGuiElement);
        void RemoveGuiElement(const GuiElement* pGuiElement);

    private:
        std::vector<GuiElement*> mGuiElements;
    };
}
}
*/