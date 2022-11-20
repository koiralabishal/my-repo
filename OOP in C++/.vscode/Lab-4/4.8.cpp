#include<iostream>
using namespace std;
class Demo
{
    int a;
    int &b=a;//b is the reference of a
    public:
       void input()
       {
           cout<<"Enter the value of a"<<endl;
           cin>>a;
       }
       void display()
       {
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            b*=4;
            cout<<"After multiplying 4 on reference vaiable b:"<<endl;
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
       }
};
int main()
{
    Demo d;
    d.input();
    d.display();
}