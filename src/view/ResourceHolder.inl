template <typename Resource, typename Identifier> void IGP2::View::ResourceHolder<Resource, Identifier>::load(Identifier pId, const std::string& pFileName)
{
    std::unique_ptr<Resource> resource(new Resource());
    if(!resource->loadFromFile(pFileName)) {
        throw std::runtime_error("ResourceHolder::load - Failed to load " + pFileName);
    }

    insertResource(pId, std::move(resource));
}

template <typename Resource, typename Identifier> Resource& IGP2::View::ResourceHolder<Resource, Identifier>::get(Identifier pId)
{
    auto found = mResourceMap.find(pId);
    assert(found != mResourceMap.end());

    return *found->second;
}

template <typename Resource, typename Identifier> const Resource& IGP2::View::ResourceHolder<Resource, Identifier>::get(Identifier pId) const
{
    auto found = mResourceMap.find(pId);
    assert(found != mResourceMap.end());

    return *found->second;
}

template <typename Resource, typename Identifier> void IGP2::View::ResourceHolder<Resource, Identifier>::insertResource(Identifier pId, std::unique_ptr<Resource> pResource)
{
    auto inserted = mResourceMap.insert(std::make_pair(pId, std::move(pResource)));
    assert(inserted.second);
}