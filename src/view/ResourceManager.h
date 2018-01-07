#pragma once

#include <map>
#include <string>

#include <SFML/Graphics.hpp>

namespace IGP2
{

namespace View
{

    class ResourceManager
    {
    public:
        ResourceManager();
        virtual ~ResourceManager();

        void loadTexture(const std::string& pTextureName, const std::string& pFileName);
        sf::Texture& getTexture(const std::string& pTextureName) const;

        void loadFont(const std::string& pFontName, const std::string& pFileName);
        sf::Font& getFont(const std::string& pFontName) const;

    private:
        std::map<std::string, sf::Texture> mTextures;
        std::map<std::string, sf::Font> mFonts;
    };
}
}
