#ifndef ROLEPLAYGAME_GAME_H
#define ROLEPLAYGAME_GAME_H
#include "player.h"
#include "Item.h"

#include <vector>
#include <string>


class Game {
private:
    Player player;

    void showMenu();

    void addItem();

    void showItems() const;

    void useItem();

    void removeItem();

public:
    void run();
};
#endif //ROLEPLAYGAME_GAME_H
