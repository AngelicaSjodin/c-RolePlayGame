#ifndef C_ROLEPLAYGAME_WEAPON_H
#define C_ROLEPLAYGAME_WEAPON_H  
#include "Item.h"

class Weapon : public Item {
private:
    int damage;       // Attribut för skada


public:
    Weapon(const std::string &n, int dmg);
    int getDamage() const;
};



#endif // C_ROLEPLAYGAME_WEAPON_H
