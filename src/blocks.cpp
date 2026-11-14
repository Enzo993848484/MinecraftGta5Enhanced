
#include <string>
#include <vector>

struct Block {
    std::string id;
    std::string name;
    std::string category;
};

std::vector<Block> minecraftBlocks = {
    {"minecraft:grass_block", "Bloco de grama", "Natureza"},
    {"minecraft:dirt", "Terra", "Natureza"},
    {"minecraft:stone", "Pedra", "Natureza"},
    {"minecraft:cobblestone", "Pedregulho", "Natureza"},
    {"minecraft:sand", "Areia", "Natureza"},
    {"minecraft:gravel", "Cascalho", "Natureza"},
    {"minecraft:oak_log", "Tronco de carvalho", "Madeira"},
    {"minecraft:oak_planks", "Tábuas de carvalho", "Madeira"},
    {"minecraft:glass", "Vidro", "Construção"},
    {"minecraft:bricks", "Tijolos", "Construção"},
    {"minecraft:iron_block", "Bloco de ferro", "Minérios e metais"},
    {"minecraft:gold_block", "Bloco de ouro", "Minérios e metais"},
    {"minecraft:diamond_block", "Bloco de diamante", "Minérios e metais"},
    {"minecraft:emerald_block", "Bloco de esmeralda", "Minérios e metais"},
    {"minecraft:netherrack", "Netherrack", "Nether"},
    {"minecraft:end_stone", "Pedra do End", "End"},
    {"minecraft:redstone_block", "Bloco de redstone", "Redstone"},
    {"minecraft:bookshelf", "Estante de livros", "Decoração"},
    {"minecraft:crafting_table", "Bancada de trabalho", "Funções"}
};

