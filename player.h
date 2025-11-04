#ifndef C_ROLEPLAYGAME_PLAYER_H
#define C_ROLEPLAYGAME_PLAYER_H
#include "Item.h"
#include "Potion.h"
#include "Armor.h"
#include "Weapon.h"

class Player {
private:
    Armor armor;
    Weapon weapon;
    Potion potion;
    

public:

    Player();
    void equipArmor(const Armor& newArmor);
    void equipWeapon(const Weapon& newWeapon);
    void usePotion(const Potion& potion);
    
};

#endif