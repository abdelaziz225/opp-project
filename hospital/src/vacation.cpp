#include "vacation.h"
#include"doctor.h"
#include"ssalary.h"
#include <iostream>

using namespace std;

vacation::vacation()
{
    //ctor
}
void vacation::set_vacation(float v)
       {
           vac=v;
       }

float vacation::get_vacation()
       {
           return vac;
       }

void vacation::cal_slary ()
    {
      if   (vac<=7)
        {
         if (whours <=30)
          {
         salary=2500;
         cout<<"your salary =2500 L.E"<<endl;
          }
        else
          {
        float extra =whours-30;
        salary=2500+(1000*extra);
        cout<<"your salary ="<<salary<<"L.E"<<endl;
         }
        }
    else {
           float ded=vac-7;
           salary =2500-(100*ded);
             cout<<"your salary will be deducted, your salary ="<<salary<<"L.E"<<endl;
         }
    }

vacation::~vacation()
{
    //dtor
}
