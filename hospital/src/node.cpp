#include "node.h"
#include<iostream>
using namespace std;
node::node()
{
    next= NULL ;
}

node::node(string x,int z)
    {
        name=x;
        cont=z;
        next=NULL;
    }

node::~node()
{
    delete next;
}
