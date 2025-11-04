#include "Potion.h"

Potion::Potion(const std::string &n, int heal)
    : Item(n), healAmount(heal) {}

int Potion::getHealAmount() const {
    return healAmount;
}