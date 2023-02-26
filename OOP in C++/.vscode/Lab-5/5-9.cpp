#include<iostream>
#include<iomanip>
using namespace std;
class Complex
{
    int a,b;
    public:
       Complex(){}
       Complex(int x, int y)
        {
           a=x;
           b=y; 
        }
        void display()
        {
            cout<<"a = "<<a<<setw(7)<<"b = "<<b<<endl;
        }
        Complex add(Complex c3)
        {
           Complex temp;
           temp.a= a+c3.a;
           temp.b=b+c3.b;
           return temp;
        } 
        void show_data()
        {
            cout<<"a = "<<a<<setw(7)<<"b = "<<b<<endl;
        }
};
int main()
{
    Complex c(3,4),c1(4,5),c2;
    c.display();
    c1.display();
    c2=c.add(c1);
    c2.show_data();
}