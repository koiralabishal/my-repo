#include<iostream>
using namespace std;
class Multiply
{
    int a,b;
    public:
       void setvalue(int m, int n)
       {
           a=m;
           b=n;
       }
       int multiply(int x, int y)
       {
           cout<<"Multiplication having two arguments is: "<<x*y<<endl;
           return 0;
       }
       int multiply()
       {
          cout<<"Multiplcation having no argument is: "<<a*b<<endl;;
          return 0;
       }
       int multiply(int x, int y, int z)
       {
           cout<<"Multiplication having three arguments is: "<<x*y*z<<endl;
           return 0;
       }
}m;
int main()
{
    m.setvalue(4,5);
    m.multiply();
    m.multiply(4,5);
    m.multiply(4,5,1);
}