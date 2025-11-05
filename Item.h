#ifndef ITEM_H
#define ITEM_H

#include <string>

enum class ItemType { Armor, Weapon, Potion };

class Item {
private:
    std::string name; //namn på saken
    int value;
    ItemType itemType;

public:
    Item(const std::string &n, int value, ItemType type);

    virtual ~Item() = default; //virtu construktor

    std::string getName() const;

    int getValue() const;

    //poly
    virtual bool isConsumable() const; //en gång användning
    virtual void use() = 0;
};

#endif
