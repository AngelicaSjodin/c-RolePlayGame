
#include "Item.h"
#include <iostream>

Item::Item(const std::string &name, int value)
    : name(name),value(value){}

std::string Item::getName() const{
    return name;
}

int Item::getValue() const{
    return value;
}

bool Item::isConsumable() const{
    return false;
}