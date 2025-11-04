#include "Weapon.h"

Weapon::Weapon(const std::string &n, int dmg)
    : Item(n, 10), damage(dmg) {}

int Weapon::getDamage() const {
    return damage;
}
