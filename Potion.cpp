#include "Potion.h"

Potion::Potion(const std::string &n, int heal)
    : Item(n, 20, ItemType::Potion), healAmount(heal) {}

int Potion::getHealAmount() const {
    return healAmount;
}

bool Potion::isConsumable() const {
    return true; // Potions are consumable
}