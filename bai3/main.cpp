#ifndef bai3_Temperature_h
#include "Temperature.h"

int main(){
   int temperature;
     Temperature temp1;
    cout << "Enter a temperature: "; cin >> temperature; 
    temp1.setTemperature(temperature);
    if(temp1.isEthylFreezing() == 1){
        cout << "ethyl will freeze" << endl;
    } 
    if(temp1.isEthylBoiling() == 1){
        cout << "ethyl will boil" << endl;
    } 
    if(temp1.isOxygenFreezing() == 1){
        cout << "oxygen will freeze" << endl;
    } 
    if(temp1.isOxygenBoiling() == 1){
        cout << "oxygen will boil" << endl;
    } 
    if(temp1.isWaterFreezing() == 1){
        cout << "water will freeze" << endl;
    } 
    if(temp1.isWaterBoiling() == 1){
        cout << "water will boil" << endl;
    }
    return 0;
}

#endif