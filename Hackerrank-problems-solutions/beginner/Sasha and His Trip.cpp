///5.5 exercise code..
#include<iostream>
using namespace std;

class DB;
class DM
{
    double m,cm;
public:
    void set();
    friend DM addmeter(DM ob1,DB ob2);
    friend DB addfeet(DM ob1,DB ob2);
    void print()
    {
        cm=m*100;
        cout<<"meter = "<<m<<"  centimeter = "<<cm<<endl;
    }
};

class DB
{
    double ft,in;
public:
    void get();
    friend DM addmeter(DM ob1,DB ob2);
    friend DB addfeet(DM ob1,DB ob2);
    void print()
    {
        in=ft*12;
        cout<<"feet = "<<ft<<"  inchi = "<<in<<endl;
    }
};
void DM::set(){cout<<"Enter data in meter..";cin>>m;}
void DB::get(){cout<<"Enter data in feet...";cin>>ft;}
DM addmeter(DM ob1,DB ob2)
{
    DM tmp;
    tmp.m=ob1.m+(0.2808)*ob2.ft;
    tmp.cm=tmp.m*100;
    return tmp;
}
DB addfeet(DM ob1,DB ob2)
{
    DB tmp;
    tmp.ft=ob1.m*3.2808;
    tmp.in=tmp.ft;
    return tmp;
}
int main()
{
    DM ob1;
    DB ob2;
    ob1.set();
    ob2.get();
    ob1.print();
    ob2.print();
    ob1=addmeter(ob1,ob2);
    ob2=addfeet(ob1,ob2);
    ob1.print();
    ob2.print();

    return 0;
}
