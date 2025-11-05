#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string &n, int dmg, WeaponType t)
    : Item(n, 40, ItemType::Weapon), damage(dmg),type(t){}

int Weapon::getDamage() const {
    return damage;
}

WeaponType Weapon::getType() const {
    return type;
}

bool Weapon::isConsumable() const {
    return false; // Weapons are not consumable
}

void Weapon::use() {
std::cout << "Equipped weapon: " << getName() << " with damage " << damage << std::endl;
}