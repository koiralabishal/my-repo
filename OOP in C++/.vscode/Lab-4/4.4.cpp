#include<iostream>
using namespace std;
class DM;
class DB
{
    int d,d1;
    public:
       void input()
       {
           cout<<"Enter distance of class DB in meter and centimeter"<<endl;
           cin>>d>>d1;
       }
       
       friend void showtotal(DB,DM);
};
class DM
{
    int dis,dis1;
    public:
       void input1()
       {
           cout<<"Enter distance of class DM in feet and inches"<<endl;
           cin>>dis>>dis1;
       }
       friend void showtotal(DB,DM);
};
inline void showtotal(DB m,DM n)
{
    cout<<endl;
    int sum=m.d+m.d1*100+n.dis*0.3048+n.dis1*0.0254;//convert centimeter,feet and inch into meter 
    int cm=sum/100;
    sum=sum%100;
    int meter=sum;
    cout<<"Sum is: "<<cm<<"cm and "<<meter<<"m"<<endl;
}
int main()
{
    DB d;
    DM d1;
    d.input();
    d1.input1();
    showtotal(d,d1);
}