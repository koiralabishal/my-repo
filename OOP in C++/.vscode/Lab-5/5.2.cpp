#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
       Rectangle()
       {
           l=0;
           b=0;
           cout<<"Enter length and breadth"<<endl;
           cin>>l>>b;
       }
       Rectangle(int m, int n)
       {
            l=m;
            b=n;
       }
       Rectangle(int o)
       {
           l=o;
           b=o;
       }
       void area()
       {
            cout<<"Area is: "<<l*b<<endl;
       }
};
int main()
{
    Rectangle r1;
    r1.area();
    Rectangle r2(4,5);
    r2.area();
    Rectangle r3(5);
    r3.area();
}