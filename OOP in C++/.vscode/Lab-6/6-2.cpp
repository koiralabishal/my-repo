#include<iostream>
using namespace std;
class Class1
{
    protected:
       int a;
    public:
       void getData()
       {
           cout<<"Enter the value of a:"<<endl;
           cin>>a;
       }
};
class Class2
{
    protected:
        int b;
    public:
        void getData1()
        {
            cout<<"Enter the value of b:"<<endl;
            cin>>b;
        }
};
class Class3: public Class1, public Class2
{
    public:
        void display()
        {
            cout<<"Sum is: "<<a+b;
        }
};
int main()
{
    Class3 c;
    c.getData();
    c.getData1();
    c.display();
}