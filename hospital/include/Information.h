#ifndef INFORMATION_H
#define INFORMATION_H

#include <iostream>

using namespace std;
class Information
{
    public:
        Information();
        ~Information();
        string H_name="Dar_el_fouad" ;
        string location= "Giza, Egypt, on the outskirts of Cairo";
        string date=" 1999";
        int number_Employee=1800;
        int rooms=300;
        int number_ambulance=200;
         void print_all();

    protected:

    private:
};

#endif // INFORMATION_H
