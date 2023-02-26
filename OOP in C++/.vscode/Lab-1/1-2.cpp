#include<iostream>
using namespace std;
class Greatest
{
    int x,y;
    public:
    void greatest()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        if (x>y)
        {
            cout<<x<<" is greatest."<<endl;
        }
        else
        {
            cout<<y<<" is greatest."<<endl;
        }
        
    }
};
int main()
{
    Greatest g;
    g.greatest();
}