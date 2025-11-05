#include "Game.h"

#include <iostream>
#include <vector>
#include <string>
#include "Armor.h"
#include "Weapon.h"
#include "Potion.h"
#include <limits>

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

cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
cout << "Write Item name:\n";
getline(cin, name);

cout << "Write Item value:\n";
while (!(cin >> value)) {
    cout << "Please enter a valid number for the item value:\n";
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Item* newItem = nullptr;

if (index == 1) {
    newItem = new Armor{name, value};
} else if (index == 2) {
    int dmg;
    cout << "Weapon damage:\n";
    while (!(cin >> dmg)) {
        cout << "Please enter a valid number for weapon damage:\n";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int wType;
    cout << "Select weapon type:\n1. Sword\n2. Crossbow\n";
    while (!(cin >> wType) || (wType != 1 && wType != 2)) {
        cout << "Please enter 1 for Sword or 2 for Crossbow:\n";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    WeaponType type = (wType == 1) ? WeaponType::Sword : WeaponType::Crossbow;
    newItem = new Weapon{name, dmg, type};
} else if (index == 3) {
    newItem = new Potion{name, value};
} else {
    cout << "Invalid choice!\n";
    return;
}

Player.addItem(newItem);
cout << "Item added!\n";

}

void Game::showItems() const {
Player.showItems();
}

void Game::useItem() {
if (true) { 
Player.showItems();
cout << "Select item number to use: ";
int idx;
cin >> idx;
Player.useItem(idx);
}
}

void Game::removeItem() {
if (true) { 
Player.showItems();
cout << "Select item number to remove: ";
int idx;
cin >> idx;
Player.removeItem(idx);
}
}