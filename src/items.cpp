E ASSIM CODIGO 
#pragma once

#include <string>
#include <vector>

struct MinecraftItem {
    std::string id;
    std::string name;
    std::string category;
};

const std::vector<MinecraftItem>& getMinecraftItems();


