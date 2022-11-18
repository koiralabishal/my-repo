#include<iostream>
using namespace std;
class Add
{
    int x,y;
    public:
    void add()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        cout<<"Sum is "<<x+y;
    }
};
int main()
{
    Add n;
    n.add();
}