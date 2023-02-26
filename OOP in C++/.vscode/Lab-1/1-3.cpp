#include<iostream>
using namespace std;
#include<math.h>
class Power
{
    int x,y;
    public:
    void power()
    {
        cout<<"Enter the value of x"<<endl;
        cin>>x;
        cout<<"Enter the value of y"<<endl;
        cin>>y;
        cout<<"The value of x^y is "<<pow(x,y);
    }
};
int main()
{
    Power n;
    n.power();
}