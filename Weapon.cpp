#include "Weapon.h"

Weapon::Weapon(const std::string &n, int dmg)
    : Item(n), damage(dmg) {}

int Weapon::getDamage() const {
    return damage;
}

WeaponType Weapon::getType() const {
    return type;
}

bool Weapon::isConsumable() const {
    return false; // Weapons are not consumable
}