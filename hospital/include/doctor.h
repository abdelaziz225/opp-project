#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>

using namespace std;


class doctor
{
    public:
        doctor();
        ~doctor();
        doctor (string n,string I,float a,string s,char g);
        void set_name(string n );
        void set_ID(string I);
        void set_age (float a);
        void  set_spec(string s);
        void set_gender (char g);
        string get_name();
        string get_ID();
         float get_age();
         string get_spec();
         char get_gender ();
          void display ();

    protected:
    string name ;
    string ID;
    float age;
    string spec;
    char gender;

    private:
};

#endif // DOCTOR_H
