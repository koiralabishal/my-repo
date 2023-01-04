#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    public:
        void getData()
        {
            cout<<"Enter roll no.:"<<endl;
            cin>>roll_no;
        }
        void display()
        {
            cout<<"Roll no.: "<<roll_no<<endl;
        }
};
class Test: public Student
{
    protected:
        int marks1, marks2;
    public:
        void getData1()
        {
            cout<<"Enter the marks of two subjects:"<<endl;
            cin>>marks1>>marks2;
        }
        void showData()
        {
            cout<<"Marks of two subjects is: "<<marks1<<", "<<marks2<<endl;
        }
};
class Sports
{
    protected:
        int score1, score2;
    public:
        void getData2()
        {
            cout<<"Enter score of two sports:"<<endl;
            cin>>score1>>score2;
        }
        void displayData()
        {
            cout<<"Scores of two sports: "<<score1<<", "<<score2<<endl;
        }
};
class Result: public Test, public Sports
{
    public:
        void displayTotal()
        {
            cout<<"Total Marks: "<<marks1+marks2<<endl;
            cout<<"Total Scores: "<<score1+score2<<endl;
        }
};
int main()
{
    Result r;
    r.getData();
    r.display();
    r.getData1();
    r.showData();
    r.getData2();
    r.displayData();
    r.displayTotal();
}
