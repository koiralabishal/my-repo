#include<iostream>
#include<math.h>
using namespace std;
class Area
{
    public:
       void area(int l)
       {
           //cout<<endl<<endl;
           cout<<"Area of square is: "<<pow(l,2)<<endl;
       }
       void area(int l,int b)
       {
          cout<<"Area of rectangle is: "<<l*b<<endl;;
       }
       float area(int,int r,int)
       {
           cout<<"Area of circle is: "<<3.14*pow(r,2)<<endl;
           return 0;
       }
}a;
int main()
{
    /*int l,b,r,s,PI;
    cout<<"Enter the length, breath,radius"<<endl;
    cin>>l>>b>>r;
    a.area(l);
    a.area(l,b);
    a.area(PI,r,s);*/
    a.area(4);
    a.area(4,5);
    a.area(1,2,1);
}
