#include "Information.h"
#include <iostream>

using namespace std;
Information::Information()
{
    //ctor
}

void Information::print_all()
        {
            cout<<"Hospital name="<<H_name <<endl;
            cout<<"location="<<location<<endl;
            cout<<"founded in"<<date <<endl;
            cout<<"Number of Employees="<<number_Employee<<endl;
            cout<<"Number of rooms="<<rooms<<endl;
            cout<<"Number of ambulances"<<number_ambulance<<endl;

        }

Information::~Information()
{
    //dtor
}
