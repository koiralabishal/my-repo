#include<iostream>
using namespace std;
class Interest
{
    int p,t,r;
    public:
       Interest(int x, int y, int z=10)
       {
            p=x;
            t=y;
            r=z;
            cout<<"Simple interest is: Rs."<<(p*t*r)/100<<"/-";
       }
};
int main()
{
    Interest i(20000,2);
}