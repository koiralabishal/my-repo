#include<iostream>
#include<iomanip>
using namespace std;
class Demo
{
    int num1,num2;
    public:
       void swapdata(int m,int n)
       {
          cout<<endl<<endl;
          num1=m;
          num2=n;
          cout<<"Value after swapping:"<<endl;
          cout<<"A: "<<num1<<setw(8)<<"B: "<<num2;
       }
};
int main()
{
    Demo d;
    int x,y,temp;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"Value before swapping:"<<endl<<endl;
    cout<<"A: "<<x<<setw(8)<<"B: "<<y;
    temp=x;
    x=y;
    y=temp;
    d.swapdata(x,y);
}