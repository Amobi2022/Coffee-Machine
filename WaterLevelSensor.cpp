#include "Coffee.h"
#include "WaterLevelSensor.h"


WaterLevelSensor::WaterLevelSensor(int WaterLevel_param, bool SwitchOn_param):Coffee(SwitchOn),WaterLevel(WaterLevel_param) 
{
}
void WaterLevelSensor:: Reservoir() const
{
    if( WaterLevel>=50)
    {
        std::cout<<"Heating the water"<<std::endl;
    }
    else
    if(WaterLevel<50)
    {
      std::cout<<"Low level water detected and Element stopped!"<<std::endl;   
    }
}