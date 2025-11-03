#include "Weapon.h"

Weapon::Weapon(const std::string &n, int dmg) : Item(n), damage(dmg) {}

int Weapon::getDamage() const {
    return damage;
}
