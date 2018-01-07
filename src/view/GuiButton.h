#pragma once

#include <SFML/Graphics.hpp>

#include "src/view/GuiElement.h"

namespace IGP2
{

namespace View
{

    class GuiButton : public GuiElement
    {
    public:
        GuiButton();
        virtual ~GuiButton();
    };
}
}
