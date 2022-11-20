#include<iostream>
using namespace std;
class PEC;
class GCES
{
    int n;
    public:
       void get_data()
        {
            cout<<"Enter no. of student of GCES"<<endl;
            cin>>n;
        }
    friend void max(GCES,PEC);
};
class PEC
{
    int m;
    public:
        inline void get_data1()
         {
           cout<<"Enter no.of students of PEC"<<endl;
           cin>>m;
         }   
    friend void max(GCES,PEC);
};
void max(GCES o,PEC p)
{
    if (o.n>p.m)
    {
        cout<<"Greatest no. of students is in GCES"<<endl;
    }
    else if(o.n==p.m)
    {
        cout<<"Equal no. of students"<<endl;
    }
    else 
    {
        cout<<"Greatest no. of students is in PEC"<<endl;
    }
}
int main()
{
    GCES g;
    PEC p;
    g.get_data();
    p.get_data1();
    max(g,p);
}