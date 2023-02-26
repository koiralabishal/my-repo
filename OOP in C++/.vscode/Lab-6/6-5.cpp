#include<iostream>
using namespace std;
class Shape
{
    protected:
        int l,b,h;
        virtual int area()=0;
    public:
        Shape()
        {
           l=10;
           b=20;
        }
        void input()
        {
            cout<<"Enter height:"<<endl;
            cin>>h;
        }
};
class Triangle: public Shape
{
    public:
        int area()
        {
            cout<<"Area of Triangle: "<<(0.5)*b*h<<endl;
            return 0;
        }
};
class Rectangle: public Shape
{
    public:
        int area()
        {
            cout<<"Area of Rectangle: "<<l*b<<endl;
            return 0;
        }
};
int main()
{
    Triangle t;
    t.input();
    t.area();
    Rectangle r;
    r.area();
}