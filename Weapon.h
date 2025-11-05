#ifndef C_ROLEPLAYGAME_WEAPON_H
#define C_ROLEPLAYGAME_WEAPON_H  
#include "Item.h"

enum class WeaponType {
    Sword,
    Crossbow
};

class Weapon : public Item {
private:
    int damage; // Attribut för skada
    WeaponType type; // Typ av vapen


public:
    Weapon(const std::string &n, int dmg, WeaponType t);

    int getDamage() const;

    WeaponType getType() const;

    void use() override;

    bool isConsumable() const override;
};


#endif // C_ROLEPLAYGAME_WEAPON_H
