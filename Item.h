#ifndef ITEM_H
#define ITHEM_H

#include <string>

class Item{
private:
    std::string name;   //namn på saken

public:
    Item(const std::string &n);

    virtual ~Item() = default; //virtu construktor

    std::string getName() const;
};

#endif