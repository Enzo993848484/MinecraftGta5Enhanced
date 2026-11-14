
cmake_minimum_required(VERSION 3.20)

project(MinecraftGTAEnhanced LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MinecraftGTAEnhanced
    src/main.cpp
    src/blocks.cpp
    src/items.cpp
    src/inventory.cpp
    src/creative_inventory.cpp
    src/player_health.cpp
    src/player_death.cpp
)
