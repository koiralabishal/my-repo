#include<iostream>
using namespace std;
class Sum
{
    int a,b,c;
    public:
        Sum(int x, int y)
        {
            a=x;
            b=y;
            cout<<"Sum of two integers is: "<<a+b<<endl;
        }
        Sum(int x, int y, int z)
        {
            a=x;
            b=y;
            c=z;
            cout<<"Sum of three integers is:"<<a+b+c;
        }
};
int main()
{
    Sum s1(4,4);
    Sum s2(5,2,3);
}