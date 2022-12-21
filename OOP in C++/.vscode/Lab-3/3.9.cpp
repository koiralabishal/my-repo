#include<iostream>
using namespace std;
class Employee
{
    char name[20],add[20],ph[20];
    int salary,net_salary,tax;
    void calculate()
    {
        net_salary=salary-tax;
    }
    public:
        void calculate_net_salary()
        {
            calculate();
        }
        void input();
        void output();
};
void Employee::input()
{
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter address"<<endl;
    cin>>add;
    cout<<"Enter phone number"<<endl;
    cin>>ph;
    cout<<"Enter salary"<<endl;
    cin>>salary;
    cout<<"Enter tax"<<endl;
    cin>>tax;
} 
void Employee::output()
{
    cout<<endl<<endl;
    cout<<"**********************Employee's Information**************************"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<add<<endl;
    cout<<"Phone Number: "<<ph<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Tax: "<<tax<<endl;
    cout<<"Net-Salary: "<<net_salary<<endl;
}
int main()
{
    Employee e;
    e.input();
    e.calculate_net_salary();
    e.output();
}  