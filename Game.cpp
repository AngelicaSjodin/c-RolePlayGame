#include "Game.h"

#include <iostream>
#include <vector>
#include <string>
#include "Armor.h"
#include "Weapon.h"
#include "Potion.h"

using namespace std;

void Game::run() {
    int choice;

    do {
        showMenu();
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: addItem(); break;
            case 2: showItems(); break;
            case 3: useItem(); break;
            case 4: removeItem(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n"; break;
        }

    } while (choice != 5);
}

void Game::showMenu() {
    cout << "\n===== INVENTORY MENU =====\n";
    cout << "1. Add an item\n";
    cout << "2. Show all items\n";
    cout << "3. Use an item\n";
    cout << "4. Remove an item\n";
    cout << "5. Exit\n";
}

void Game::addItem() {
    int index;
    std::string name;
    int value;

    cout << "Select Item type:\n";
    cout << "1. Armor\n";
    cout << "2. Weapon\n";
    cout << "3. Potion\n";
    cin >> index;

    cout << "Write Item name:\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Rensar eventuellt kvarvarande inmatningar
    getline(cin, name); // Läser in hela raden inklusive mellanslag

    cout << "Write Item value:\n";
    while (!(cin >> value)) {
        cout << "Please enter a valid number for the item value:\n";
        cin.clear(); // Återställer strömmen
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Tar bort felaktig inmatning
    }

    if (index == 1) {
        Armor armor{name, value};
        inventory.push_back(armor);
    }
    else if (index == 2) {
        int dmg;
        cout << "Weapon damage:\n";
        cin >> dmg;

        WeaponType type{};
        Weapon weapon{name, dmg, type};
        inventory.push_back(weapon);
    }
    else if (index == 3) {
        Potion potion{name, value};
        inventory.push_back(potion);
    }
    else {
        cout << "Invalid choice!\n";
        return;
    }

    cout << "Item added!\n";
}

void Game::showItems() const {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "Inventory:\n";
    int index = 1;
    for (auto& item : inventory) {
        cout << index << ". "<< item.getName() << ": " << item.getValue() << endl;
        ++index;
    }
}

void Game::useItem() {
    if (inventory.empty()) {
        cout << "No items to use.\n";
        return;
    }

    showItems();
    cout << "Select item number to use: ";
    int index;
    cin >> index;

    if (index < 1 || index > (int)inventory.size()) {
        cout << "Invalid choice.\n";
        return;
    }

    cout << "You used: " << inventory[index - 1].getName() << "!\n";
}

void Game::removeItem() {
    if (inventory.empty()) {
        cout << "No items to remove.\n";
        return;
    }

    showItems();
    cout << "Select item number to remove: ";
    int index;
    cin >> index;

    if (index < 1 || index > (int)inventory.size()) {
        cout << "Invalid choice.\n";
        return;
    }

    cout << "Removed: " << inventory[index - 1].getName() << "\n";
    inventory.erase(inventory.begin() + (index - 1));
}
