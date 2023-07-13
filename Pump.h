#ifndef PUMP_H
#define PUMP_H
#include <iostream>
#include "WaterLevelSensor.h"
class Pump:public WaterLevelSensor
{

public:
    Pump()=default;
    Pump(bool pumpSwitch_param,int WaterLevel_param, bool SwitchOn_param);

    public:
    bool  pumpSwitch=true;

    void pumpValve();

    
};







#endif//PUMP_H 