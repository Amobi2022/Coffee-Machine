#include "Coffee.h"

Coffee::Coffee(bool SwitchOn_param)
:SwitchOn(SwitchOn_param)
{
}

void Coffee::switch_1()
{
    if(SwitchOn==true)
    {
        std::cout<<"The Coffee machine is switched On."<<std::endl;
    }

    else
    if(SwitchOn==false)
    {
      std::cout<<"The Coffee machine is switched Off."<<std::endl;  
    }
}
