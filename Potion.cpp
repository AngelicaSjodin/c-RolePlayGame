#include "Potion.h"
#include <iostream>

Potion::Potion(const std::string &n, int heal)
    : Item(n, heal, ItemType::Potion), healAmount(heal) {}

int Potion::getHealAmount() const {
    return healAmount;
}

void Potion::use() {
std::cout << "You consumed " << getName() << " and healed " << healAmount << " HP\n";
}

bool Potion::isConsumable() const { return true; }