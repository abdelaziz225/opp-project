#ifndef VACATION_H
#define VACATION_H
#include"doctor.h"
#include"ssalary.h"
#include <iostream>

using namespace std;


 class vacation:public ssalary
{
    public:
        vacation();
        ~vacation();
        void set_vacation(float v);
        float get_vacation();
        void cal_slary ();

    protected:

    private:
        float vac;
};

#endif // VACATION_H
