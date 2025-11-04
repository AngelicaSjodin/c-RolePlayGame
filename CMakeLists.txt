cmake_minimum_required(VERSION 3.7)

project(RolePlayGame)

add_executable(dnd)

target_sources(dnd
        PRIVATE
        main.cpp
        Item.cpp
        potion.cpp
)