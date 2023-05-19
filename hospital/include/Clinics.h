#ifndef CLINICS_H
#define CLINICS_H
#include<iostream>
using namespace std;

class Clinics
{
     private:
        string name ;
        string phone ;
        string gender ;
        int age ;
        string regular_reservation ;
        string urgent_reservation ;
        string clinic ;
    public:
        Clinics();
        virtual ~Clinics();
        Clinics(string n,string p,string g,int a);
         void setname(string n) ;
        string getname () ;
         void setphone(string p) ;
        string getphone () ;
        void setgender(string g) ;
        string getgender () ;
         void setage(int a) ;
        int getage () ;
        void setclinic(string c) ;
        void getclinic () ;
        void setregular_reservation(string rg) ;
        string getregular_reservation () ;
        void seturgant_reservation(string ur) ;
        string geturgant_reservation () ;
        void showClinics();
        void showinfo();



    protected:

    private:
};

#endif // CLINICS_H
