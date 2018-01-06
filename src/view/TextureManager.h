#pragma once

#include <map>
#include <string>

#include <SFML/Graphics.hpp>

namespace IGP2
{

namespace View
{

    class TextureManager
    {
    public:
        TextureManager();
        virtual ~TextureManager();

        void loadTexture(const std::string& pTextureName, const std::string& pFilename);

        sf::Texture& getTexture(const std::string& pTextureName);

    private:
        std::map<std::string, sf::Texture> mTextures;
    };
}
}
