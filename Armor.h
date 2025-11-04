#include <string>
#ifndef C_ROLEPLAYGAME_Armor_H
#define C_ROLEPLAYGAME_Armor_H  
#include "Item.h"

class Armor : public Item {

    public:
    Armor(const std::string& name, int damageProtector);

    private:
    
    int damageProtector; //How much protection the armor gives.
    

};
#endif // C_ROLEPLAYGAME_Armor_H