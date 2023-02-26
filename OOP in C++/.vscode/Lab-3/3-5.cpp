#include<iostream>
using namespace std;
class Calculate
{
    int n,r,rev=0;
    public:
        void getnum()
        {
            cout<<"Enter any number"<<endl;
            cin>>n;
        }
        int reverse()
        {
            while (n!=0)
            {
                r=n%10;
                rev=rev*10+r;
                n=n/10;
            }
            cout<<"The reverse order is: ";
            return rev;
        }
};
int main()
{
    Calculate c;
    c.getnum();
    cout<<c.reverse();
}