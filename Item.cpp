
#include "Item.h"

Item::Item(const std::string &n)
    : name(n){}

std::string Item::getName() const{
    return name;
}

