#include<iostream>
#include<string>
using namespace std;
class Student
{
  string name;
  public:
    Student(string s)
    {
      name=s;
      cout<<"Name: "<<name<<endl;
    }
    Student()
    {
      name="0";
      cout<<"Name: unknown"<<endl;
    }
};
int main()
{
  Student s("Bishal"),t;
}