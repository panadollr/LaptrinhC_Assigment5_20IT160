#include <iostream>
using namespace std;

class Employee {
    private:
    string name;
    int idNumber;
    string department;
    string position;
    public:
    Employee(string name, int idNumber, string department, string position){
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }
    Employee(string name, int idNumber){
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }
     Employee(){
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }
    void setName(string name){
        this->name = name;
    }
    void setIdNumber(int idNumber){
        this->idNumber = idNumber;
    }
    void setDepartment(string department){
        this->department = department;
    }
    void setPosition(string position){
        this->position = position;
    }
    void display(){
        cout << "Ten: " << this->name << ", idNumber: " << this->idNumber << ", khoa: " << this->department << ", chuc vu: " << 
        this->position << endl;
    }
};

int main() {
    Employee em1("Nguyen Van A", 20, "abc", "giam doc");
    Employee em2("Nguyen Van B", 10);
    Employee em3;
    em1.display();
    em2.display();
    em3.setName("Nguyen Van C");
    em3.display();
    return 0;
}
