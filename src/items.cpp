
#include <string>
#include <vector>

struct MinecraftItem {
    std::string id;
    std::string name;
    std::string category;
};

std::vector<MinecraftItem> minecraftItems = {
    {"minecraft:diamond_sword", "Espada de diamante", "Combate"},
    {"minecraft:iron_sword", "Espada de ferro", "Combate"},
    {"minecraft:bow", "Arco", "Combate"},
    {"minecraft:crossbow", "Besta", "Combate"},
    {"minecraft:shield", "Escudo", "Combate"},
    {"minecraft:diamond_pickaxe", "Picareta de diamante", "Ferramentas"},
    {"minecraft:iron_pickaxe", "Picareta de ferro", "Ferramentas"},
    {"minecraft:diamond_axe", "Machado de diamante", "Ferramentas"},
    {"minecraft:diamond_shovel", "Pá de diamante", "Ferramentas"},
    {"minecraft:diamond_helmet", "Capacete de diamante", "Equipamentos"},
    {"minecraft:diamond_chestplate", "Peitoral de diamante", "Equipamentos"},
    {"minecraft:diamond_leggings", "Calças de diamante", "Equipamentos"},
    {"minecraft:diamond_boots", "Botas de diamante", "Equipamentos"},
    {"minecraft:apple", "Maçã", "Alimentos"},
    {"minecraft:golden_apple", "Maçã dourada", "Alimentos"},
    {"minecraft:bread", "Pão", "Alimentos"},
    {"minecraft:ender_pearl", "Pérola do End", "Diversos"},
    {"minecraft:compass", "Bússola", "Diversos"},
    {"minecraft:clock", "Relógio", "Diversos"},
    {"minecraft:elytra", "Élitros", "Equipamentos"}
};

