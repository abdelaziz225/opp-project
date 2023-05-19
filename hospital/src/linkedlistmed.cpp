#include "linkedlistmed.h"
#include "node.h"
#include<iostream>
using namespace std;

linkedlistmed::linkedlistmed()
{
    head=NULL;
}

bool linkedlistmed::isempty()
    {
        if(head==NULL)
            return true;
        else
            return false;
    }



    void linkedlistmed::addfirst(string x,int z)
    {
        node * n=new node;
        n->name=x;
        n->cont=z;
        if(isempty()==true)
        {
            head=n;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }


    void linkedlistmed::removefirst()
    {
        if(isempty()==false)
        {
            node * c=head;
            head=head->next;
            c->next=NULL;

            delete c;


        }
    }



    void linkedlistmed::print()
    {

        if(isempty()==false)
        {
            int Num = 1;
            node * n=new node;

            n=head;

            while(n!=NULL)
            {
            cout<<"----------------"<<endl;
            cout<< "medicin Number: " << Num << endl;
            cout<< " Name: " << n->name << endl;
            cout<< "Quantity: " << n->cont << endl;
            cout<<"----------------"<<endl;
            Num++;
            n = n->next;

            }
        }
        else
        {
            cout<<"Empty";
        }
    }



    int linkedlistmed::search(string x)
    {
        node*c=new node();
        if(isempty()==false)
        {
            int count=0;

            node*c=head;

            while(c!=NULL)
            {
                if(c->name!=x)
                {
                 count++;
                }

                c=c->next;

            }
            return count;
        }
        else
            return -1;
    }



void linkedlistmed::edit(string x,int z)
{
    node*c=new node();
    int s=search(x);

    if(s==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        node*c=head;
        for(int i=0;i<s-1;i++)
        {
            c=c->next;
        }

        c->cont=z;

    }

}


    void linkedlistmed::removepos(int pos)
    {
        node * current = new node;
        node * previous = new node;
        node * next = new node;

        current = head;

        for (int i = 1;i<pos;i++)
        {
            if (current == NULL)
                return;
            previous = current;
            current = current->next;
        }
        next = current->next;
        previous->next = current->next;
        delete current;



    }


linkedlistmed::~linkedlistmed()
{
    delete[] head;
}
