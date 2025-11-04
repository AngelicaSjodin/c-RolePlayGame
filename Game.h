#ifndef ROLEPLAYGAME_GAME_H
#define ROLEPLAYGAME_GAME_H

#include "Item.h"

#include <vector>
#include <string>

using namespace std;
class Game {
private:
    vector<Item> inventory;

public:
    void run();
    void showMenu();
    void addItem();
    void showItems() const;
    void useItem();
    void removeItem();
};
#endif //ROLEPLAYGAME_GAME_H