#pragma once

#include <string>

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include "src/view/GuiElementType.h"

namespace IGP2
{

namespace View
{

    class GuiElement : public sf::Drawable
    {
    public:
        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

        inline std::string getName()
        {
            return mName;
        }

        inline eGuiElementType getType()
        {
            return mType;
        }

    protected:
        std::string mName;
        eGuiElementType mType;
    };
}
}
