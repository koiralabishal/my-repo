#include<iostream>
using namespace std;
class Largest
{
    public:
    void largest(int x, int y, int z)
    {
        if (x>y && x>z)
        {
            cout<<x<<" is largest."<<endl;
        }
        else if (y>x && y>z)
        {
            cout<<y<<" is largest."<<endl;
        }
        else
        {
            cout<<z<<" is largest."<<endl;
        }
        
    }
}g;
int main()
{
    //int a,b,c;
    //cout<<"Enter three numbers"<<endl;//run-time initialization
    //cin>>a>>b>>c;
    //g.largest(a,b,c);
    g.largest(7,6,5);
}