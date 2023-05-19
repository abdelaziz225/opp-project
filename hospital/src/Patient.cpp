#include "Patient.h"
#include <iostream>
#include "Residence.h"
using namespace std;


Patient::Patient()
{
    Residence x;
    name = " ";
    address = " ";
    age = 0;
    mail = " ";
    phone = " ";
    code=0;
    room = x.room();
    bed = x.bed();


}


void Patient::setname(string x)
{
    name = x;
}
void Patient::setaddress(string y)
{
    address = y;
}void Patient::setage(int f)
{
    age = f;
}void Patient::setcode(int j)
{
    code = j;
}void Patient::setmail(string s)
{
    mail = s;
}void Patient::setphone(string p)
{
    phone = p;
}
int Patient::getcode()
{
    return code;
}
string Patient::getname()
{
    return name;
}
string  Patient::getaddress()
{
    return address;
}
int Patient::getage()
{
    return age;
}string Patient::getmail()
{
    return mail;
}
string Patient::getphone()
{
    return phone;
}

void Patient::displayall()
{
    cout<<endl;
    cout<<"patient info:"<<endl;
    cout << "ur info:" << endl;
    cout << "name : " << name << endl;
    cout << "phone : " << phone << endl;
    cout << "age : " << age << endl;
    cout << "mail : " << mail << endl;
    cout << "address : " << address << endl;
    cout << "room : " << room << endl;
    cout << "bed : " << bed << endl;
}
