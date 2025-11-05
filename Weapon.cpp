#include "Weapon.h"

Weapon::Weapon(const std::string &n, int dmg, WeaponType _type)
    : Item(n, 40, ItemType::Weapon), damage(dmg) {type=_type;}

int Weapon::getDamage() const {
    return damage;
}

WeaponType Weapon::getType() const {
    return type;
}

bool Weapon::isConsumable() const {
    return false; // Weapons are not consumable
}