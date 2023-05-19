#include "Residence.h"
#include<iostream>
#include<cstring>
using namespace std;

Residence::Residence()
{
    //ctor
}

string Residence::room()
{
    char alphabet[28] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                              'h', 'i', 'j', 'k', 'l', 'm', 'n',
                              'o', 'p', 'q', 'r', 's', 't', 'u',
                              'v', 'w', 'x', 'y', 'z'  };


    string rom = "";
    for (int i = 0; i < 3; i++)
    {
        rom = rom + alphabet[rand() % 28];
    }

    return rom;

}
string Residence::bed()
{

    char alphabet[35] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                              'h', 'i', 'j', 'k', 'l', 'm', 'n',
                              'o', 'p', 'q', 'r', 's', 't', 'u',
                              'v', 'w', 'x', 'y', 'z' ,'1','2','3','4','5','6','7','8','9' };

    string bd = " ";
    for (int i = 0; i < 3; i++)
    {
        bd = bd + alphabet[rand() % 35];
    }

    return bd;
}


Residence::~Residence()
{
    //dtor
}
