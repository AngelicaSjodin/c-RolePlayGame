cmake_minimum_required(VERSION 3.7)

project(RolePlayGame)

add_executable(dnd)

target_sources(dnd
        PRIVATE
        main.cpp
        Game.cpp
        Item.cpp
        Potion.cpp
        Armor.cpp
        Weapon.cpp
        player.cpp
)
