#include<iostream>
using namespace std;
class MahendraHighway;
class PrithiviHighway
{
    int l,l1;
    public:
       void input()
       {
           cout<<"Enter the length of Prithivihighway in km and mtr"<<endl;
           cin>>l>>l1;
       }
       
       friend void showtotal(PrithiviHighway,MahendraHighway);
};
class MahendraHighway
{
    int len,len1;
    public:
       void input1()
       {
           cout<<"Enter the length of Mahendrahighway in km and mtr"<<endl;
           cin>>len>>len1;
       }
       friend void showtotal(PrithiviHighway,MahendraHighway);
};
inline void showtotal(PrithiviHighway m,MahendraHighway n)
{
    cout<<endl;
    int sum=m.l*1000+m.l1+n.len*1000+n.len1;
    int km=sum/1000;
    sum=sum%1000;
    int meter=sum;
    cout<<"Sum of the length of both highways is: "<<km<<"km and "<<meter<<"m"<<endl;
}
int main()
{
    PrithiviHighway p;
    MahendraHighway m;
    p.input();
    m.input1();
    showtotal(p,m);
}