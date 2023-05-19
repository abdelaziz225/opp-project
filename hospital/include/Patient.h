#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
#include<cstring>
#include "Residence.h"
using namespace std;

class Patient
{
    public:
       Patient();

    void setname(string x);
    void setaddress(string y);
    void setage(int f);
    void setmail(string s);
    void setcode(int j);
    void setphone(string p);
    void displayall();
    string getname();
    string getaddress();
    int getage();
    int getcode();
    string getmail();
    string getphone();

private:
    string name;
    string address;
    int age;
    string mail;
    string phone;
    string room;
    int code;
    string bed;


};

#endif // PATIENT_H
