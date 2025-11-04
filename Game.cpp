#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Game {
private:
    vector<string> inventory;

public:
    void run();
    void showMenu();
    void addItem();
    void showItems() const;
    void useItem();
    void removeItem();
};

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
    cout << "Enter item name: ";
    string item;
    getline(cin, item);
    inventory.push_back(item);
    cout << "Item added!\n";
}

void Game::showItems() const {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "Inventory:\n";
    for (size_t i = 0; i < inventory.size(); i++) {
        cout << i + 1 << ". " << inventory[i] << endl;
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

    cout << "You used: " << inventory[index - 1] << "!\n";
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

    cout << "Removed: " << inventory[index - 1] << "\n";
    inventory.erase(inventory.begin() + (index - 1));
}
