#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;
class node
{
    public:
        node();
        ~node();
    string name;
    int cont;
    node * next;
    node(string x,int z);

    protected:

    private:
};

#endif // NODE_H
