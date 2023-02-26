#include<iostream>
using namespace std;
class Time
{
    int hrs,min,sec;
    public:
       int total_sec;
       void input()
       {
          cout<<endl<<"Enter time in hour,minutes and seconds"<<endl;
          cin>>hrs>>min>>sec;
          total_sec=(hrs*3600)+(min*60)+sec;
       }
       friend Time output(Time, Time);
};
Time output(Time t1,Time t2)
{
    Time t4;
    int sum;
    sum= t1.total_sec+t2.total_sec;
    t4.hrs=sum/3600;
    sum=sum%3600;
    t4.min=sum/60;
    sum=sum%60;
    t4.sec=sum;
    cout<<t4.hrs<<" : "<<t4.min<<" : "<<t4.sec<<endl;
    return t4;
}
int main()
{
    Time t,t3,t5;
    t.input();
    t3.input();
    cout<<"Sum of time of two ojects is: "<<endl;
    t5=output(t,t3);
}