#include<iostream>
#include<math.h>
using namespace std;
class Rectangular
{
    float x, y;
    public:
       Rectangular(){}
       Rectangular(float m, float n)
       {
         x=m;
         y=n;
       }
       void display()
       {
           cout<<"("<<x<<" , "<<y<<")"<<endl;
       }
}; 
class Polar
{
     float radius, angle;
     public:
        Polar(){}
        Polar(float r, float a)
        {
            radius=r;
            angle=a;
        }
        void display()
        {
            cout<<"("<<radius<<" , "<<angle<<")"<<endl;
        }
        operator Rectangular()
        {
            float x, y;
            x= radius*cos(angle);
            y= radius* sin(angle);
            return Rectangular(x,y);
        }
};
int main()
{
    Rectangular r;
    Polar p(70.0, 0.785398);
    r=p;
    cout<<"Polar coordiante is:"<<endl;
    p.display();
    cout<<"Rectangular coordinate is:"<<endl;
    r.display();
}