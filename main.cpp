#include <iostream>
#include "InventoryItem.h"

int main() {
    InventoryItem cheese("Mozzarella", 10);
    InventoryItem sauce("Tomato Sauce", 5);
    InventoryItem duplicateCheese("Mozzarella", 10);

    std::cout << cheese << std::endl;
    std::cout << sauce << std::endl;

    std::cout << "cheese == sauce? " << (cheese == sauce) << std::endl;
    std::cout << "cheese == duplicateCheese? " << (cheese == duplicateCheese) << std::endl;

    return 0;
}