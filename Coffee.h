#ifndef COFFEE_H
#define COFFEE_H
#include <iostream>

class Coffee
{
//friend std::ostream& operator<<(std::ostream& out,  Coffee& coffee);
public:
     Coffee()=default;
    Coffee(bool SwitchOn_param);
    
 void switch_1();
 public:
 bool SwitchOn=true;
};





#endif// COFFEE_H