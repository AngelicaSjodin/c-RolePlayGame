#include "Potion.h"

Potion::Potion(const std::string &n, int heal)
    : Item(n, 20), healAmount(heal) {}

int Potion::getHealAmount() const {
    return healAmount;
}