#include "Clinics.h"
#include<iostream>
using namespace std;

Clinics::Clinics()
{
     name=" " ;
    phone=" " ;
    gender=" " ;
    age=0 ;
    regular_reservation=" " ;
    urgent_reservation=" " ;
}
Clinics::Clinics(string n,string p,string g,int a)
{
    name=n;
    phone=p;
    gender=g;
    age=a;

}

void Clinics::setname(string n)
{
    name=n ;
}

string Clinics::getname ()
{
    return name ;
}

void Clinics:: setphone(string p)
{
    phone=p ;
}
string Clinics::getphone()
{
    return phone  ;
}
void Clinics:: setgender(string g)
{
    gender=g ;
}
string Clinics::getgender()
{
    return gender  ;
}
void Clinics:: setage(int a)
{
    age=a ;
}
int Clinics::getage()
{
    return age  ;
}
void Clinics:: setregular_reservation(string rg)
{
    regular_reservation=rg ;
}
string Clinics::getregular_reservation()
{
    return regular_reservation  ;
}
void Clinics:: seturgant_reservation(string rg)
{
    urgent_reservation=rg ;
}
string Clinics::geturgant_reservation()
{
    return urgent_reservation  ;

}
void Clinics:: setclinic(string c)
{
    clinic=c ;
}

void Clinics::getclinic()
{
    cout << "clinic : " << clinic << endl;  ;
}



void Clinics::showClinics()
{
    cout<<" write your clinic that you want"<<endl;
    cout<<" Eyesclinic, 1 for DermatologyC,2 for PhisicalTherapyC,3 for GynecologyC,4 for hematologyC,5 for heartclinic,6 forinternalmedicineC, 7 for diabetesANDnephrologyC : "<<endl ;

}
void Clinics::showinfo()
{
    cout<<name<<" "<<phone<<" "<<gender<<" "<<age<<" "<<endl;
}

Clinics::~Clinics()
{
    //dtor
}
