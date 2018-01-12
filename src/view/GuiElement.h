#pragma once

#include <memory>
#include <string>

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/NonCopyable.hpp>

//#include <SFML/Graphics/RenderStates.hpp>
//#include <SFML/Graphics/RenderTarget.hpp>

#include "src/view/GuiElementType.h"

namespace IGP2
{

namespace View
{

    class GuiElement : public sf::Drawable, public sf::Transformable, private sf::NonCopyable
    {
    public:
        typedef std::shared_ptr<GuiElement> Ptr;

    public:
        virtual void handleEvent(const sf::Event& pEvent) = 0;

        inline std::string getName()
        {
            return mName;
        }

        inline eGuiElementType getType()
        {
            return mType;
        }

    protected:
        inline GuiElement(std::string pName, eGuiElementType pType)
            : mName(pName)
            , mType(pType)
        {
        }

    protected:
        std::string mName;
        eGuiElementType mType;
    };
}
}
