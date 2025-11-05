#include "Armor.h"
#include <iostream>

Armor::Armor(const std::string& name, int protection)
    : Item(name, 10, ItemType::Armor), damageProtection(protection){}

void Armor::use() {
std::cout << "Equipped armor: " << getName() << " with protection " << damageProtection << std::endl;
}