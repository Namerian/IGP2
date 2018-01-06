#pragma once

#include <string>

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

namespace IGP2
{

namespace View
{

    class GuiElement : public sf::Drawable
    {
    public:
        GuiElement();
        GuiElement(sf::RectangleShape pShape, std::string pName);
        virtual ~GuiElement();

        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

        sf::RectangleShape& getShape();

        std::string getName();
        void setName(std::string pName);

    private:
        sf::RectangleShape mShape;
        std::string mName;
    };
}
}
