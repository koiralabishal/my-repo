#include<iostream>
using namespace std;
class Person
{
   char name[20],add[20];
   int age;
   int vID=1001;
   public:
    void input();
    void display();
};
void Person::input()
{
    cout<<endl<<endl<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter address"<<endl;
    cin>>add;
    cout<<"Enter age"<<endl;
    cin>>age;
}
void Person::display()
{
    cout<<endl<<"Name: "<<name<<endl;
    cout<<"Address: "<<add<<endl;
    cout<<"Age: "<<age<<endl;
    if (age>18)
    {
        cout<<"Voting ID: "<<vID<<endl;
    }
    else
    {
        cout<<"Voting ID: "<<0<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    Person p[n];
    for ( int i = 0; i < n; i++)
    {
        p[i].input();
    }
    for (int  i = 0; i < n; i++)
    {
        p[i].display();
    }
}