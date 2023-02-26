#include<iostream>
using namespace std;
class Multiply
{
    public:
        inline int multiply(int x, int y)
        {
            cout<<"Multiplication of "<<x<<" & "<<y<<" is: ";
            return x*y;
        }
}m;
int main()
{
    /*int a,b;
    cout<<"Enter two numbers"<<endl;//run-time initialization
    cin>>a>>b;
    cout<<m.multiply(a,b);*/
    cout<<m.multiply(4,5);//complile-time initialization
}