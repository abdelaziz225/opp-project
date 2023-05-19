#include "product.h"
#include"Information.h"
#include <iostream>

using namespace std;
product::product()
           {
              name=" ";
              price=0;
             quantity=0;
              Information b;
           }
product::product(string n, float p, int q)
             {
                 name =n;
                 price=p;
                 quantity = q;

             }

void product::set_Name(string n)
            {
               name=n;
            }
void product::set_Price(float p )
            {
                price =p;
            }
void product::set_Quantity(int q)
            {
               quantity=q;
            }
string product::get_Name()
            {
                return name ;
            }
float product::get_Price()
           {
               return price ;
           }
int product::get_Quantity()
           {
               return quantity;
           }
float product::gettotal()
{
    return quantity*price;
}

product::~product()
{
    //dtor
}
