#include<iostream>
using namespace std;
class Student
{
    protected:
        int roll;
    public:
        void getData()
        {
            cout<<"Enter roll no.:"<<endl;
            cin>>roll;
        }    
};
class Test: public Student
{
    protected:
        int sub1, sub2;
    public:
        void setData()
        {
            cout<<"Enter marks of two subjects:"<<endl;
            cin>>sub1>>sub2;     
        }
};
class Result: public Test
{
    int total;
    public:
        void display()
        {
            cout<<"Roll no.: "<<roll<<endl;
            total=sub1+sub2;
            cout<<"Total Marks: "<<total<<endl;
        }
};
int main()
{
    Result r;
    r.getData();
    r.setData();
    r.display();
}