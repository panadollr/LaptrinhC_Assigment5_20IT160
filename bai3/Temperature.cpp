#include "Temperature.h"

Temperature::Temperature(){}
void Temperature::setTemperature(int temperature){
    this->temperature = temperature;
}

bool Temperature::isEthylFreezing(){
return this->temperature <= this->freezing_point_ethyl;
}
    bool Temperature::isEthylBoiling(){
        return this->temperature >= this->boiling_point_ethyl;
    }
    bool Temperature::isOxygenFreezing(){
        return this->temperature <= this->freezing_point_oxygen;
    }
    bool Temperature::isOxygenBoiling(){
        return this->temperature >= this->boiling_point_oxygen;
    }
    bool Temperature::isWaterFreezing(){
        return this->temperature <= this->freezing_point_water;
    }
    bool Temperature::isWaterBoiling(){
        return this->temperature >= this->boiling_point_water;
    }


