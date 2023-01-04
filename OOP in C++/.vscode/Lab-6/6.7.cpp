#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    public:
        void input()
        {
           cout<<"Enter roll no:"<<endl;
           cin>>roll_no;
        }
        void display()
        {
            cout<<endl;
            cout<<"Roll No: "<<roll_no<<endl;
        }
};
class Theory:virtual public Student
{
    protected:
        int thmarks1, thmarks2;
    public:
        void input1()
        {
           cout<<"Enter theory marks of two subjects:"<<endl;
           cin>>thmarks1>>thmarks2;
        }
        void showData()
        {
            cout<<"Theory Marks of two subjects is: "<<thmarks1<<", "<<thmarks2<<endl;
        }
};
class Practical: virtual public Student
{
    protected:
        int prmarks1, prmarks2;
    public:
        void input2()
        {
           cout<<"Enter practical marks of two subjects:"<<endl;
           cin>>prmarks1>>prmarks2;
        }
        void showData1()
        {
            cout<<"Theory Marks of two subjects is: "<<prmarks1<<", "<<prmarks2<<endl;
        }
};
class Result: public Theory, public Practical
{
    public:
        Student s;
        void displayTotal()
        {
            cout<<"Total Theory marks: "<<thmarks1+thmarks2<<endl;
            cout<<"Total Practical Marks: "<<prmarks1+prmarks2<<endl;
        }
};
int main()
{
    Result re;
    re.input();
    re.input1();
    re.input2();
    re.display();
    re.showData();
    re.showData1();
    re.displayTotal();
}
