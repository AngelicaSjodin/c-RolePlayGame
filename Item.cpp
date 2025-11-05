
#include "Item.h"
#include <iostream>

Item::Item(const std::string &name, int value, ItemType _type)
    : name(name),value(value), itemType(_type){}

std::string Item::getName() const{
    return name;
}

int Item::getValue() const{
    return value;
}

bool Item::isConsumable() const{
    return false;
}