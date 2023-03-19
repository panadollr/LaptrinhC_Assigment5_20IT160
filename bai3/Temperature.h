#include<iostream>
using namespace std;

class Temperature{
    private:
int temperature;
int freezing_point_ethyl = -173;
int boiling_point_ethyl = 172;
int freezing_point_oxygen = -362;
int boiling_point_oxygen = -306;
int freezing_point_water = 32;
int boiling_point_water = 212;
    public: 
    Temperature();
    void setTemperature(int temperature);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
};