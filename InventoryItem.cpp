#include "InventoryItem.h"

InventoryItem::InventoryItem() : name("Unknown"), quantity(0) {}

InventoryItem::InventoryItem(std::string name, int quantity) : name(name), quantity(quantity) {}

std::string InventoryItem::getName() const {
    return name;
}

int InventoryItem::getQuantity() const {
    return quantity;
}

void InventoryItem::setName(std::string name) {
    this->name = name;
}

void InventoryItem::setQuantity(int quantity) {
    this->quantity = quantity;
}

bool InventoryItem::operator==(const InventoryItem &other) const {
    return (name == other.name && quantity == other.quantity);
}

std::ostream& operator<<(std::ostream &out, const InventoryItem &item) {
    out << "InventoryItem [Name: " << item.name << ", Quantity: " << item.quantity << "]";
    return out;
}