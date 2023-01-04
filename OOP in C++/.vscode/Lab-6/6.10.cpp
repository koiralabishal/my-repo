#include<iostream>
using namespace std;
class Staff
{
    public:
    string name, address,post;
        Staff()
        {
            name="Bishal";
            address="Pkr";
            post="Treasurer";
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"post: "<<post<<endl;
        }
};
class NonTeaching:virtual public Staff
{
    public:
       NonTeaching()
       {
           name="Sudip";
           address="Pkr";
           post="Accountant";
       }
       void display2()
       {
          cout<<endl;
          cout<<"Name: "<<name<<endl;
          cout<<"Address: "<<address<<endl;
          cout<<"post: "<<post<<endl;
       }
};
class Teaching:virtual public Staff
{
    
    string deprt;
    public:
        Teaching()
        {
            name="Mayukh";
            address="Pkr";
            deprt="Science";
        }
        void display3()
        {
            cout<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Department: "<<deprt<<endl;
        }
};
class Admin: public NonTeaching, public Teaching
{
    int workinghrs;
    public:
        Admin()
        {
            name="Ayush";
            address="pkr";
            post="Technician";
            workinghrs=8;
        }
        void display4()
        {
            cout<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"post: "<<post<<endl;
            cout<<"Working Hrs: "<<workinghrs<<endl;
        }
};
int main()
{
    Staff s;
    s.display();
    NonTeaching n;
    n.display2();
    Teaching t;
    t.display3();
    Admin a;
    a.display4();
}