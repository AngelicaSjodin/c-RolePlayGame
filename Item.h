#ifndef ITEM_H
#define ITHEM_H

#include <string>

class Item{
private:
    std::string name;   //namn på saken
    int value;

public:
    Item(const std::string &n,int value);

    virtual ~Item() = default; //virtu construktor

    std::string getName() const;
    int getValue() const;

    //poly
    virtual bool isConsumable() const; //en gång användning
};

#endif