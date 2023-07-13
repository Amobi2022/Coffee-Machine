#ifndef WATERLEVELSENSOR_H

#define WATERLEVELSENSOR_H
#include "Coffee.h"
#include<iostream>

class WaterLevelSensor:public Coffee
{
    public:
    WaterLevelSensor()=default;
    WaterLevelSensor(int WaterLevel_param, bool SwitchOn_param);
     void Reservoir() const;

    public:
    int WaterLevel=50;
};







#endif//WATERLEVELSENSOR_H
