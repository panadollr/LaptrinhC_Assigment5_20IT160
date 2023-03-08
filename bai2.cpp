#include <iostream>
using namespace std;

class Car {
    private:
    int yearModel;
    string make;
    int speed;
    public:
    Car(int yearModel, string make, int speed){
        this->yearModel = yearModel;
        this->make = make;
        this->speed = 0;
    }
    int getYearModel(){
        return this->yearModel;
    }
    string getMake(){
        return this->make;
    }
    int getSpeed(){
        return this->speed;
    }
    void accelerate(){
       this->speed += 5;
    }
    void brake(){
        this->speed -= 5;
    }
};

int main() {
    Car car1(2023, "abc", 200);

    for(int i=0; i<5; i++){
         car1.accelerate();
         cout << "Toc do: " << car1.getSpeed() << endl;
    }

    cout << "---------------------" << endl;
    for(int i=0; i<5; i++){
         car1.brake();
         cout << "Toc do: " << car1.getSpeed() << endl;
    }
   
    //car1.display();
    return 0;
}
