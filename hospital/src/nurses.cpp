#include "nurses.h"
#include<iostream>
using namespace std;

nurses::nurses()
{
    name=" ";
    phone=" ";
    gender=" ";
    age=0;
    id=0;
}

void nurses::setname(string n)
{
    name=n;
}

string nurses::getname()
{
    return name ;
}

void nurses::setphone(string p)
{
    phone=p ;
}
string nurses::getphone()
{
    return phone  ;
}
void nurses::setgender(string g)
{
    gender=g ;
}
string nurses::getgender()
{
    return gender  ;
}
void nurses:: setid(int i)
{
    id=i ;
}
int nurses::getid()
{
    return id  ;
}
void nurses:: setage(int a)
{
    age=a ;
}
int nurses::getage()
{
    return age  ;
}
void nurses:: setdepartment(string d)
{
    department=d ;
}
string nurses::getdepartment()
{
    return department  ;
}
void nurses::display()
{

    cout<<endl;
        cout<<"walcome"<<endl;

        cout<<"Nur."<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"department:"<<department<<endl;

        cout<<endl;
}

nurses::~nurses()
{
    //dtor
}
