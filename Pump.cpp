#include "WaterLevelSensor.h"
#include  "Pump.h"
Pump::Pump(bool pumpSwitch_param,int WaterLevel_param, bool SwitchOn_param):WaterLevelSensor(WaterLevel,SwitchOn)
,  pumpSwitch( pumpSwitch_param)
{
}
void Pump:: pumpValve()
{
    if(pumpSwitch==true)
    {
        std::cout<<"Your coffee is ready!"<<std::endl;
    }

    else
    if (pumpSwitch!=true)
    {
           std::cout<<"Your coffee is not ready!"<<std::endl;  
    }
    
}
