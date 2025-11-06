# c-RolePlayGame

A player can hava an inventory list with different items of the following types:
Armor
Potion
Weapon

All items inherits from the Item class. The items have different functionality. Armor protects the player, potion heales and can be consumable (hence is deleted from the list after usage), and weapon damages the attacked object. 

The player can add new items to the list, show all items, use an item and delete an item. 

Items in the inventory list are stored on the heap. The items are deleted with the player destructor. 
Item functionality details are stored on the stack.
