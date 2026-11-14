
#include <string>
#include <vector>

enum class CreativeCategory {
    Nature,
    Construction,
    Equipment,
    Tools,
    Combat,
    Food,
    Redstone,
    Decoration,
    Nether,
    End,
    Potions,
    Miscellaneous
};

struct CreativeTab {
    CreativeCategory category;
    std::string name;
};

std::vector<CreativeTab> creativeTabs = {
    {CreativeCategory::Nature, "Natureza"},
    {CreativeCategory::Construction, "Construção"},
    {CreativeCategory::Equipment, "Equipamentos"},
    {CreativeCategory::Tools, "Ferramentas"},
    {CreativeCategory::Combat, "Combate"},
    {CreativeCategory::Food, "Alimentos"},
    {CreativeCategory::Redstone, "Redstone"},
    {CreativeCategory::Decoration, "Decoração"},
    {CreativeCategory::Nether, "Nether"},
    {CreativeCategory::End, "End"},
    {CreativeCategory::Potions, "Poções"},
    {CreativeCategory::Miscellaneous, "Diversos"}
};

const std::vector<CreativeTab>& getCreativeTabs() {
    return creativeTabs;
}

