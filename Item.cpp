#include "Item.h"
#include <iostream>

Item::Item(const std::string &name, int value, ItemType type)
    : name(name), value(value), itemType(type) {
}

std::string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}

bool Item::isConsumable() const {
    return false;
}
