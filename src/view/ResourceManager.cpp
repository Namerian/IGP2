#include "ResourceManager.h"

IGP2::View::ResourceManager::ResourceManager()
{
}

IGP2::View::ResourceManager::~ResourceManager()
{
}

void IGP2::View::ResourceManager::loadTexture(const std::string& pTextureName, const std::string& pFileName)
{
    sf::Texture texture;
    texture.loadFromFile(pFileName);

    mTextures[pTextureName] = texture;
}

sf::Texture& IGP2::View::ResourceManager::getTexture(const std::string& pTextureName)
{
    return mTextures.at(pTextureName);
}

void IGP2::View::ResourceManager::loadFont(const std::string& pFontName, const std::string& pFileName)
{
    sf::Font font;
    font.loadFromFile(pFileName);

    mFonts[pFontName] = font;
}

sf::Font& IGP2::View::ResourceManager::getFont(const std::string& pFontName)
{
    return mFonts.at(pFontName);
}