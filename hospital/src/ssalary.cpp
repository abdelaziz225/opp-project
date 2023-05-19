#include "ssalary.h"
#include"doctor.h"
#include <iostream>

using namespace std;

ssalary::ssalary ()
    {
       salary=2500;
       whours=0;
    }
    ssalary::ssalary (float s,float h)
    {
        salary =s;
        whours=h;
    }
    void ssalary::set_salary (float s)
    {
        salary=s;
    }
    void ssalary::set_working_hours(float h)
    {
        whours=h;
    }
    float ssalary::get_salary()
    {
        return salary;
    }
    float ssalary::get_working_hours()
    {
        return whours;
    }

ssalary::~ssalary()
{
    //dtor
}
