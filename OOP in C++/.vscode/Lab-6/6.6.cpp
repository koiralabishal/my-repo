#include<iostream>
using namespace std;
class Vehicle
{
    protected:
        int speed;
        string engine_model;
    public:
        virtual void display()=0;
        void setData(int m, string v)
        {
            speed=m;
            engine_model=v;
        }
};
class Car: public Vehicle
{
    int no_of_seats;
    public:
        void setData(int n)
        {
            no_of_seats=n;
        }
        void display()
        {
            cout<<"Detail of Car class"<<endl;
            cout<<"Speed: "<<speed<<" km per hr"<<endl;
            cout<<"Engine Model: "<<engine_model<<endl;
            cout<<"No of Seats: "<<no_of_seats<<endl;
        }
};
class Bus: public Vehicle
{
    string color;
    public:
        void setData(string m)
        {
            color=m;
        }
        void display()
        {
            cout<<endl;
            cout<<"Detail of Bus class"<<endl;
            cout<<"Speed: "<<speed<<" km per hr"<<endl;
            cout<<"Engine Model: "<<engine_model<<endl;
            cout<<"Color: "<<color<<endl;
        }
};
int main()
{
    Car c;
    Bus b;
    c.Vehicle:: setData(12,"CR45"); 
    c.setData(5);
    b.Vehicle::setData(6, "TYR67");
    b.setData("Red");
    c.display();
    b.display();
}