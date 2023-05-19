#ifndef LINKEDLISTMED_H
#define LINKEDLISTMED_H
#include "node.h"
#include<iostream>
using namespace std;

class linkedlistmed
{
    public:
        linkedlistmed();
        virtual ~linkedlistmed();
        node* head;
        bool isempty();
        void addfirst(string x,int z);
        void edit(string x,int z);
        void removefirst();
        void print();
        int search(string x);
        void removepos(int pos);

    protected:

    private:
};

#endif // LINKEDLISTMED_H
