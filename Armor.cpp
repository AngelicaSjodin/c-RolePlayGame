#include "Armor.h"

Armor::Armor(const std::string& name, int damageProtection)
    : Item(name, 10), damageProtection(damageProtection){

    }