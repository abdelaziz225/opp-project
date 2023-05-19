#ifndef SSALARY_H
#define SSALARY_H
#include"doctor.h"
#include <iostream>

using namespace std;


class ssalary:public doctor
{
    public:
        ssalary();
        ~ssalary();
float get_working_hours();
float get_salary();
void set_working_hours(float h);
void set_salary (float s);
ssalary (float s,float h);

    protected:
    float salary;
    float whours ;

    private:
};

#endif // SSALARY_H
