#include<iostream>
using namespace std;
class Compare
{
    int n1,n2;
    public:
       void getdata()
       {
        cout<<"Enter two numbers"<<endl;
        cin>>n1>>n2;
       }
       friend void compare(Compare);
};
void compare(Compare d)
{
    if (d.n1>d.n2)
    {
        cout<<d.n1<<" is greatest."<<endl;
    }
    else
    {
        cout<<d.n2<<" is greatest."<<endl;
    }
}
int main()
{
    Compare c;
    c.getdata();
    compare(c);
}