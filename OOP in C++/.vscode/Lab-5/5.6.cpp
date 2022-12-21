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
          cout<<"Simple interest is: Rs."<<(p*t*r)/100<<"/-"<<endl;
       }
       Interest(Interest & i3)
       {
         p=i3.p;
         t=i3.t;
         r=i3.r;
         cout<<"Simple interest is: Rs."<<(p*t*r)/100<<"/-";
       }
};
int main()
{
    Interest i(20000,2);
    Interest i2(i);
}