#pragma once

#include <cassert>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>

namespace IGP2
{

namespace View
{

    template <typename Resource, typename Identifier> class ResourceHolder
    {
    public:
        void load(Identifier pId, const std::string& pFileName);

        Resource& get(Identifier pId);
        const Resource& get(Identifier pId) const;

    private:
        void insertResource(Identifier pId, std::unique_ptr<Resource> pResource);

    private:
        std::map<Identifier, std::unique_ptr<Resource> > mResourceMap;
    };

    typedef ResourceHolder<sf::Texture, std::string> TextureHolder;
    typedef ResourceHolder<sf::Font, std::string> FontHolder;
}
}

#include "src/view/ResourceHolder.inl"