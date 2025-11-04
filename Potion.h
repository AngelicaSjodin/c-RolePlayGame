#ifndef C_ROLEPLAYGAME_POTION_H
#define C_ROLEPLAYGAME_POTION_H

#include "Item.h"

class Potion : public Item {
private:
    int healAmount; // hur mycket liv drycken återställer

public:
    Potion(const std::string &n, int heal);
    int getHealAmount() const;
};

#endif