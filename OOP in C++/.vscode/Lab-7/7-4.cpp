#include<iostream>
#include<math.h>
using namespace std;
class Height
{
    float meter;
    public:
       Height(){}
       Height(float m)
       {
         meter=m;
       }
       void display()
       {
           cout<<meter<<" m"<<endl;
       }
}; 
class Height1
{
     float feet, inch;
     public:
        Height1(){}
        Height1(float f, float i)
        {
            feet=f;
            inch=i;
        }
        void display()
        {
           cout<<"Height in feet and inch is:"<<endl;
           cout<<feet<<" ft "<<inch<< " in"<<endl;
        }
        operator Height()
        {
            float m;
            m = 3.28084*feet + (1/(3.28084*12))*inch;
            return Height(m);
        }
};
int main()
{
    Height h;
    Height1 h1(5,3);
    h=h1;
    h1.display();
    cout<<"Height in meter is: ";
    h.display();
}