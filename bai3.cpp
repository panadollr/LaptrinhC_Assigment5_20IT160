#include <iostream>
using namespace std;

class RetailItem {
    private:
    string description;
    int unitsOnHand;
    double price;
    public:
    RetailItem(string description, int unitsOnHand, double price){
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }
    void setDescription(string description) {
        this->description = description;
    }

    void setUnitsOnHand(int unitsOnHand) {
        this->unitsOnHand = unitsOnHand;
    }

    void setPrice(double price) {
        this->price = price;
    }
     string getDescription(){
        return this->description;
    }

    int getUnitsOnHand(){
        return this->unitsOnHand;
    }

    double getPrice() {
        return this->price;
    }
};

int main() {
    RetailItem item1("Ao", 10, 20.99);
    RetailItem item2("Quan", 5, 29.99);
    RetailItem item3("Giay", 7, 59.99);

    cout << "Item 1: " << item1.getDescription() << ", Units: " << item1.getUnitsOnHand() << ", Gia: $" << item1.getPrice() << endl;
    cout << "Item 2: " << item2.getDescription() << ", Units: " << item2.getUnitsOnHand() << ", Gia: $" << item2.getPrice() << endl;
    cout << "Item 3: " << item3.getDescription() << ", Units: " << item3.getUnitsOnHand() << ", Gia: $" << item3.getPrice() << endl;

    return 0;
}