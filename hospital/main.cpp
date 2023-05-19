#include <iostream>
#include"doctor.h"
#include"vacation.h"
#include"Information.h"
#include"product.h"
#include"ssalary.h"
#include"Patient.h"
#include"Residence.h"
#include"Food.h"
#include"Medicin.h"
#include"linkedlistmed.h"
#include"node.h"
#include "Clinics.h"
#include "nurses.h"


using namespace std;

int main()
{
    int choice;
    int c;
    string fname;
    int age;
    int ID;
    string phone;
    string address;
    string email;
    string clin;
    string oper;
    int quantity;
    float price;

    Patient p1;
    Patient p2;
    Clinics c1;








    cout<<"---------------------Welcome at HOSPITAI---------------------"<<endl;

    while(choice!=8)
    {
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"Please choose form next menu :"<<endl;
        cout<<"Enter (1) for Book an examination in a clinic"<<endl;
        cout<<"Enter (2) for Reservation of operations"<<endl;
        cout<<"Enter (3) for Information about the hospital and hospital departments"<<endl;
        cout<<"Enter (4) for hospital expenses"<<endl;
        cout<<"Enter (5) for Staff, doctors and nurses"<<endl;
        cout<<"Enter (6) for Reserve rooms"<<endl;
        cout<<"Enter (7) for Medicine department"<<endl;
        cout<<"Enter (8) for exit"<<endl;
        cout<<"Your choice:";
        cin>>choice;
        cout<<endl;

        if(choice==1)
        {

            cin.ignore();
            cout<<"enter ur name"<<endl;
            getline(cin,fname);
            p1.setname(fname);
            c1.setname(fname);

            cout<<"enter ur age"<<endl;
            cin>>age;
            p1.setage(age);
            c1.setage(age);
            cout<<"enter ur ID"<<endl;
            cin>>ID;
            p1.setcode(ID);

            cout<<"enter ur phone"<<endl;
            cin>>phone;
            p1.setphone(phone);
            c1.setphone(phone);

            cout<<"plases enter your adress"<<endl;
            cin>>address;
            p1.setaddress(address);

            cout<<"plases enter your email"<<endl;
            cin>>email;
            p1.setmail(email);

            c1.showClinics();
            cin>>clin;
            c1.setclinic(clin);


            p1.displayall();
            c1.getclinic();

        }

        if (choice==2)
        {
            cin.ignore();
            cout<<"enter ur name"<<endl;
            getline(cin,fname);
            p2.setname(fname);

            cout<<"enter ur age"<<endl;
            cin>>age;
            p2.setage(age);

            cout<<"enter ur ID"<<endl;
            cin>>ID;
            p2.setcode(ID);

            cout<<"enter ur phone"<<endl;
            cin>>phone;
            p2.setphone(phone);

            cout<<"plases enter your adress"<<endl;
            cin>>address;
            p2.setaddress(address);

            cout<<"plases enter your email"<<endl;
            cin>>email;
            p2.setmail(email);

            cout<<"plases enter your operation's name"<<endl;
            cin>>oper;


            p2.displayall();
            cout<<"operation : "<<oper<<endl;

        }

        else if(choice==3)
        {
            Information m;
            m.print_all();

        }

        else if(choice==4)
        {
            product p;
            string name;
            cout<<"enter product name:";
            cin>>name;
            p.set_Name(name);
            cout<<endl;
            cout<<"enter product price:";
            cin>>price;
            p.set_Price(price);
            cout<<endl;
            cout<<"enter product quantity:";
            cin>>quantity;
            p.set_Quantity(quantity);
            cout<<endl;
            cout<<"total price is: "<<p.gettotal()<<"$"<<endl;

        }

        else if(choice==5)
        {
            int c;

            cout<<"if u are a nurse choose (1)"<<endl;
            cout<<"if u are a doctor choose (2)"<<endl;
            cout<<"enter ur choice:";
            cin>>c;
            cout<<endl;

            if(c==1)
            {
                nurses s1;
                string n;
                string phone;
                int a;
                int I;
                string s;
                string g;

                cout<<"welcome"<<endl;

                cout<<"plz enter ur name:";
                cin>>n;
                s1.setname(n);
                cout<<endl;

                cout<<"plz enter ur ID:";
                cin>>I;
                s1.setid(I);
                cout<<endl;

                cout<<"plz enter ur age:";
                cin>>a;
                s1.setage(a);
                cout<<endl;

                cout<<"plz enter ur department:";
                cin>>s;
                s1.setdepartment(s);
                cout<<endl;

                cout<<"plz enter ur gender:";
                cin>>g;
                s1.setgender(g);
                cout<<endl;
                s1.display();

                int x;
                cout<<"plz choice from next menue :"<<endl;
                cout<<"enter (1) to ask about vacation"<<endl;
                cout<<"enter (2) to ask about salary"<<endl;
                cin>>x;

                if(x==1)
                {
                    ssalary s;
                    vacation v;
                    float w;

                    cout<<"plz enter ur workhours:";
                    cin>>w;
                    s.set_working_hours(w);
                    v.cal_slary();
                }
                else if(x==2)
                {
                    ssalary s;
                    cout<<"ur salary :"<<s.get_salary()<<"$"<<endl;
                }

            }

            else if(c==2)
            {
                string n;
                string I;
                float a;
                string s;
                char g;

                cout<<"welcome"<<endl;

                cout<<"plz enter ur name:";
                cin>>n;
                cout<<endl;

                cout<<"plz enter ur ID:";
                cin>>I;
                cout<<endl;

                cout<<"plz enter ur age:";
                cin>>a;
                cout<<endl;

                cout<<"plz enter ur specialization:";
                cin>>s;
                cout<<endl;

                cout<<"plz enter ur gender:";
                cin>>g;
                cout<<endl;
                doctor c1(n,I,a,s,g);
                c1.display();

                int c;
                cout<<"plz choice from next menue :"<<endl;
                cout<<"enter (1) to ask about vacation"<<endl;
                cout<<"enter (2) to ask about salary"<<endl;
                cin>>c;

                if(c==1)
                {
                    ssalary s;
                    vacation v;
                    float w;

                    cout<<"plz enter ur workhours:";
                    cin>>w;
                    s.set_working_hours(w);
                    v.cal_slary();
                }
                else if(c==2)
                {
                    ssalary s;
                    cout<<"ur salary :"<<s.get_salary()<<"$"<<endl;
                }
            }




        }


        else if(choice==6)
        {
            string name;
            string mail;
            int code;

            Patient p;
            cout<<"hello patient : "<<endl;
            cout<<"please enter your name :";
            cin>>name;
            p.setname(name);
            cout<<endl;
            cout<<"please enter your adress :";
            cin>>address;
            p.setaddress(address);
            cout<<endl;
            cout<<"please enter your age :";
            cin>>age;
            p.setage(age);
            cout<<endl;
            cout<<"please enter your mail :";
            cin>>mail;
            p.setmail(mail);
            cout<<endl;
            cout<<"please enter your ID :";
            cin>>code;
            p.setcode(code);
            cout<<endl;
            cout<<"please enter your phone:";
            cin>>phone;
            p.setphone(phone);
            cout<<endl;
            p.displayall();

            Food f;
            cout<<"ur food : "<<f.fod()<<endl;

            Medicin m;
            cout<<"ur Medicin : "<<m.med()<<endl;

        }

        else if(choice==7)
        {

            int x;

            string name;
            int quan;
            linkedlistmed med;


            cout<<"select form next menue:"<<endl;
            cout<<"1 for add new medicine"<<endl;
            cout<<"2 for edit a medicine"<<endl;
            cout<<"3 for remove a medicine"<<endl;
            cout<<"4 for view all medicines"<<endl;
            cout<<"5 for search by name"<<endl;
            cout<<"6 for Exit"<<endl;

            while(x!=6)
            {
                cout<<"enter ur choice:";
                cin>>x;
                cout<<endl;


                if(x==1)
                {
                    cout<<"enter the medicine's name:";
                    cin>>name;
                    cout<<endl;
                    cout<<"enter the Quantity:";
                    cin>>quan;
                    cout<<endl;
                    med.addfirst(name,quan);

                }
                else if(x==2)
                {
                    cout<<"enter the medicine's new name:";
                    cin>>name;
                    cout<<endl;
                    cout<<"enter the new Quantity:";
                    cin>>quan;
                    cout<<endl;

                    med.edit(name,quan);

                }
                else if(x==3)
                {
                    int pos;
                    cout<<"Enter the contact number of the medicine you would like to remove:";
                    cin>>pos;
                    cout<<endl;


                    if(pos==1)
                    {
                        med.removefirst();
                    }
                    else
                    {
                        med.removepos(pos);
                    }
                }


                else if(x==4)
                {
                    med.print();
                    cout<<endl;
                }

                else if(x==5)
                {

                    cout<<"Enter the medicine's name  you would like to search:";
                    cin>>name;

                    int i=med.search(name);

                    if(i==-1)
                    {
                        cout<<"not found"<<endl;
                    }
                    else
                    {
                        cout<<"found"<<endl;
                    }

                }
            }

        }




    }






    return 0;
}
