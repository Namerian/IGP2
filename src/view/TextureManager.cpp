#include "TextureManager.h"

IGP2::View::TextureManager::TextureManager()
{
}

IGP2::View::TextureManager::~TextureManager()
{
}

void IGP2::View::TextureManager::loadTexture(const std::string& pTextureName, const std::string& pFilename)
{
    sf::Texture texture;
    texture.loadFromFile(pFilename);

    mTextures[pTextureName] = texture;
}

sf::Texture& IGP2::View::TextureManager::getTexture(const std::string& pTextureName)
{
    return mTextures.at(pTextureName);
}