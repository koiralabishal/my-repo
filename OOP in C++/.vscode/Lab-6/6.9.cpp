#include<iostream>
using namespace std;
class Employee
{
    int eid, salary;
    string ename;
    public:
        void input()
        {
            cout<<"Enter employee id, name and salary"<<endl;
            cin>>eid>>ename>>salary;
        }
        void display()
        {
            cout<<endl;
            cout<<"Detail of Employee:-"<<endl;
            cout<<"Name: "<<ename<<endl;
            cout<<"Emloyee Id: "<<eid<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
class Company
{
    string cname,location;
    int no_of_employee;
    public: 
        Employee e;
        void input1()
        {
            cout<<"Enter company name, location and no of employee"<<endl;
            cin>>cname>>location>>no_of_employee;
        }
        void displayRecord()
        {
            cout<<endl;
            cout<<"Detail of Company:-"<<endl;
            cout<<"Company Name: "<<cname<<endl;
            cout<<"Location: "<<location<<endl;
            cout<<"No. of Employee: "<<no_of_employee<<endl;
        }
};
int main()
{
    Company c;
    c.input1();
    c.e.input();
    c.displayRecord();
    c.e.display();
}