#pragma once

#include <functional>
#include <memory>
#include <string>

#include <SFML/Graphics.hpp>

#include "src/view/GuiElement.h"

namespace IGP2
{

namespace View
{

    class GuiButton : public GuiElement
    {
    public:
        typedef std::shared_ptr<GuiButton> Ptr;
        typedef std::function<void(std::string)> Callback;

    public:
        GuiButton(std::string pName, sf::Vector2f pPosition, sf::Texture& pTexture, sf::Font& pFont);

        void setCallback(Callback pCallback);
        void setText(const std::string& pText);

        virtual void handleEvent(const sf::Event& pEvent);

    private:
        virtual void draw(sf::RenderTarget& pTarget, sf::RenderStates pStates) const;

    private:
        sf::Sprite mSprite;
        sf::Text mText;
        Callback mCallback;
    };
}
}
