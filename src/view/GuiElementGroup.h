/*#pragma once

#include <vector>

#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include "src/view/GuiElement.h"

namespace IGP2
{

namespace View
{

    class GuiElementGroup : public GuiElement
    {
    public:
        GuiElementGroup();
        virtual ~GuiElementGroup();

        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

        void addChild(const GuiElement* pChild);
        void removeChild(const GuiElement* pChild);

    protected:
        std::vector<GuiElement*>& getChildren();

    private:
        std::vector<GuiElement*> mChildren;
    };
}
}
*/