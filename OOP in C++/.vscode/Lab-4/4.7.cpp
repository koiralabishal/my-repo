#include<iostream>
using namespace std;
class SI
{
    public:
       void simple_interest(int p, int t, int r=10)
       {
            cout<<"Simple interest is: Rs."<<p*t*r<<"/-"<<endl;
       }
};
int main()
{
    int p,t,n;
    cout<<"Enter number of customers"<<endl;
    cin>>n;
    SI s[n];
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<"Enter principal amount and time period for customer"<<i+1<<endl;
        cin>>p>>t;
        cout<<endl;
        s[i].simple_interest(p,t);
    }
}