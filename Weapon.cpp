#include "Weapon.h"

Weapon::Weapon(const std::string &n, int dmg, WeaponType t)
    : Item(n, 0), damage(dmg), type(t) {}

int Weapon::getDamage() const {
    return damage;
}

WeaponType Weapon::getType() const {
    return type;
}

bool Weapon::isConsumable() const {
    return false; // Weapons are not consumable
}