#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <iostream>
#include <string>

class InventoryItem {
private:
    std::string name;
    int quantity;

public:
    InventoryItem();
    InventoryItem(std::string name, int quantity);

    std::string getName() const;
    int getQuantity() const;

    void setName(std::string name);
    void setQuantity(int quantity);

    bool operator==(const InventoryItem &other) const;
    friend std::ostream& operator<<(std::ostream &out, const InventoryItem &item);
};

#endif