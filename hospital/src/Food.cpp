#include "Food.h"
#include<iostream>
#include<cstring>
using namespace std;

Food::Food()
{
    //ctor
}

string Food::fod()
{

    string  alphabet[10] = {"Cheeseburger","fries"," breakfast of bread"," sausage",
                                            "pickle","Sweet"," sour pork","bokchoy","a side of honeydew melon","potatoes"};


    string foood = " ";
    for (int i = 0; i < 3; i++)
    {
        foood=foood + alphabet[rand() % 10]+" , ";
    }

    return foood;
}

Food::~Food()
{
    //dtor
}
