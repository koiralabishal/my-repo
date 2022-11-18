#include <iostream>
#include<math.h>
using namespace std;
class Power
{
    public:
        int power(int n,int m=2)
        {
            cout<<"Value of "<<n<<" to a power "<<m<<" is: ";
            return pow(n,m);
        }
}p;
int main()
{
    cout<<p.power(4);
}