#include<iostream>
using namespace std;
class Time
{
    int hrs, min,sec;
    public:
        Time()
        {
            hrs=0;
            min=0;
            sec=0;
        }
        Time(int x, int y, int z)
        {
            hrs=x;
            min=y;
            sec=z;
        }
        void display()
        {
            cout<<hrs<<":"<<min<<":"<<sec<<endl;
        }
        void sum(Time t3, Time t4)
        {
           Time t5;
           int sum= (t3.hrs*3600+t3.min*60+t3.sec)+(t4.hrs*3600+t4.min*60+t4.sec);
           t5.hrs=sum/3600;
           sum=sum%3600;
           t5.min=sum/60;
           sum=sum%60;
           t5.sec=sum;
           cout<<"Sum is: "<<endl;
           cout<<t5.hrs<<" : "<<t5.min<<" : "<<t5.sec<<endl;
        }
};
int main()
{
    Time t(2, 30, 20);
    t.display();
    Time t1(3,40,30);
    Time t2(4,50,40);
    Time t6;
    t6.sum(t1,t2);
}