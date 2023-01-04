#include<iostream>
using namespace std;
class Student
{
    protected:
    string name;
    int roll;
    public:
       void input()
       {
           cout<<"Enter name and roll no. of a student"<<endl;
           cin>>name>>roll;
       }
       void dislayinfo()
       {
          cout<<endl;
          cout<<"Name: "<<name<<endl;
          cout<<"Roll No.: "<<roll<<endl;
       }
};
class Marks
{
    protected:
    int oop, pm, bc,acc,fin;
    public:
        void input1()
        {
            cout<<"Enter marks of five subjects"<<endl;
            cin>>oop>>pm>>bc>>acc>>fin;
        }
        void displayMarks()
        {
            cout<<"Marks of five subjects is: "<<oop<<", "<<pm<<", "<<bc<<", "<<acc<<", "<<fin<<", "<<endl;
        }
};
class Result: public Marks, public Student
{
    int total, per;
    public:
        void calculate()
        {
            total=oop+pm+bc+acc+fin;
            per=(total*100)/500;
        }
        void display()
        {
            cout<<"Total Marks: "<<total<<endl;
            cout<<"Percentage: "<<per<<"%"<<endl;
        }
};
int main()
{
    Result r;
    r.input();
    r.input1();
    r.calculate();
    r.dislayinfo();
    r.displayMarks();
    r.display();
}