#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory() {
this->itemNumber = 0;
this->quantity = 0;
this->cost = 0.0;
this->totalCost = 0.0;
    }
    Inventory(int itemNumber, double cost, int quantity) {
        this->itemNumber = itemNumber;
this->quantity = quantity;
this->cost = cost;
this->totalCost = 0.0;
    }
    void setItemNumber(int itemNumber) {
        if (itemNumber >= 0) {
            this->itemNumber = itemNumber;
        }
    }
    void setQuantity(int quantity) {
        if (quantity >= 0) {
            this->quantity = quantity;
            setTotalCost();
        }
    }
    void setCost(double cost) {
        if (cost >= 0.0) {
            this->cost = cost;
            setTotalCost();
        }
    }
    void setTotalCost() {
        totalCost = quantity * cost;
    }
    int getItemNumber() const {
        return itemNumber;
    }
    int getQuantity() const {
        return quantity;
    }
    double getCost() const {
        return cost;
    }
    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    Inventory item1;
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: " << item1.getCost() << endl;
    cout << "Total cost: " << item1.getTotalCost() << endl;

    Inventory item2(12345, 9.99, 100);
    cout << "Item number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: " << item2.getCost() << endl;
    cout << "Total cost: " << item2.getTotalCost() << endl;

    item2.setItemNumber(54321);
    item2.setQuantity(50);
    item2.setCost(7.99);
    cout << "Item number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: " << item2.getCost() << endl;
    cout << "Total cost: " << item2.getTotalCost() << endl;

    return 0;
}