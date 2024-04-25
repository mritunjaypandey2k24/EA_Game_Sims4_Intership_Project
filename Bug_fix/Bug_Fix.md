# Bug Fix Report: Inventory System Item Removal

## Issue Description
The current version of the inventory system does not fully implement item removal. When an object is removed from the inventory by selling all of its quantity, it is not fully removed from the item list. Instead, it remains in the item list with a quantity of 0.

## Root Cause Analysis
The issue occurs because the code only deletes the item and removes it from the vector if its quantity becomes 0 after selling. However, the removal logic should be applied even if the quantity reaches 0, ensuring that the item is completely removed from the inventory.

## Proposed Solution
Implement a way to fully remove an item from the inventory when its quantity reaches 0. Modify the `remove_item` method to remove the item from the vector regardless of its quantity after selling. This ensures that the item is completely removed from the inventory when its quantity is exhausted.

## Implementation Details
The proposed solution involves modifying the `remove_item` method in the Inventory class. After updating the quantity of the item, check if the quantity becomes 0. If it does, delete the item and remove it from the vector using the `erase` method.

## Code Snippet (Updated remove_item Method)
```cpp
void remove_item(int item_index) {
    int input_quantity;
    Item *item = items[item_index];
    std::cout << "\nEnter number of items to sell: ";
    std::cin >> input_quantity;

    int quantity = item->get_quantity();
    if (input_quantity <= quantity) {
        float price = item->get_price();
        float money_earned = price * input_quantity;
        item->set_quantity(quantity - input_quantity);
        std::cout << "\nItems sold";
        std::cout << "\nMoney received: " << money_earned;
        total_money += money_earned;

        if (item->get_quantity() == 0) { // if quantity is zero after selling
            delete items[item_index]; // delete the item
            items.erase(items.begin() + item_index); // remove the item from the vector
        }
    } else {
        std::cout << "\nCannot sell more items than you have.";
    }
}
