#ifndef PRODUCT_H
#define PRODUCT_H
#include"Information.h"

#include <iostream>

using namespace std;
class product
{
    public:
        product();
        ~product();
        product(string n, float p, int q);
        void set_Name(string n);
        void set_Price(float p );
        void set_Quantity(int q);
        string get_Name();
        float get_Price();
        int get_Quantity();
        float gettotal();


    protected:

    private:
        string name;
       float  price;
       int quantity;
};

#endif // PRODUCT_H
