#include "doctor.h"
#include <iostream>

using namespace std;

doctor::doctor()
{
    name=" ";
        ID=" ";
        age=0;
        spec=" ";
        gender=0;
}

 doctor::doctor(string n,string I,float a,string s,char g)
    {
        name=n;
        ID=I;
        age =a;
        spec=s;
        gender=g;

    }
        void doctor::set_name(string n )
    {
     name =n;
    }
    void doctor::set_ID(string I)
    {
       ID=I;
    }
    void doctor::set_age (float a)
    {
        age =a;
    }
    void  doctor::set_spec(string s)
    {
        spec=s;
    }
    void doctor::set_gender (char g)
    {
        gender=g;
    }
    string doctor::get_name()
    {
        return name;
    }
    string doctor::get_ID()
    {
        return ID ;
    }
    float doctor::get_age()
    {
        return age;
    }
     string doctor::get_spec()
     {
         return spec;
     }
     char doctor::get_gender ()
     {
         return gender;
     }

    void doctor::display ()
    {
        cout<<endl;
        cout<<"walcome"<<endl;

        cout<<"Dc."<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"specialization:"<<spec<<endl;

        cout<<endl;
    }


doctor::~doctor()
{
    //dtor
}
