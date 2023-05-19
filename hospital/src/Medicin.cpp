#include "Medicin.h"
#include<iostream>
#include<cstring>
using namespace std;

Medicin ::Medicin ()
{

}



string Medicin::med()
{

    string  alphabet[10] = {"Abacavir","Dacarbazine","Factor IX complex","G-CSF (Filgrastim)","Ifosfamide",
        "Ketoconazole","L-glutamine","Magnesium","Nelarabine","Omeprazole"};


    string meed = "";
    for (int i = 0; i < 3; i++)
    {
        meed=meed + alphabet[rand() % 10]+" , ";
    }

    return meed;
}



Medicin ::~Medicin ()
{

}
