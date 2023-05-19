#ifndef NURSES_H
#define NURSES_H
#include<iostream>
using namespace std;

class nurses
{
    private:
        string name ;
        string gender ;
        string phone ;
        int id ;
        int age ;
        string department;


    public:
        nurses();
        ~nurses();
        void setname(string n ) ;
        string getname() ;
        void setphone(string p);
        string getphone();
        void setid(int ld) ;
        void setgender(string g);
        string getgender();
        int getid() ;
        void setage(int g) ;
        int getage() ;
        void setdepartment(string d ) ;
        string getdepartment() ;
        void display();



};

#endif // NURSES_H
