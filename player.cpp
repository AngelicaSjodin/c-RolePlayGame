#include "Player.h"
#include <iostream>

using namespace std;

Player::~Player() {
    for (auto item: inventory) delete item;
}

void Player::addItem(Item *item) { inventory.push_back(item); }

void Player::showItems() const {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }
    int idx = 1;
    for (auto item: inventory) {
        cout << idx << ". " << item->getName() << ": " << item->getValue() << endl;
        ++idx;
    }
}

void Player::useItem(int index) {
    if (index < 1 || index > (int) inventory.size()) {
        cout << "Invalid choice.\n";
        return;
    }
    inventory[index - 1]->use();
    if (inventory[index - 1]->isConsumable()) {
        delete inventory[index - 1];
        inventory.erase(inventory.begin() + (index - 1));
    }
}

void Player::removeItem(int index) {
    if (index < 1 || index > (int) inventory.size()) {
        cout << "Invalid choice.\n";
        return;
    }
    delete inventory[index - 1];
    inventory.erase(inventory.begin() + (index - 1));
    cout << "Item removed.\n";
}
