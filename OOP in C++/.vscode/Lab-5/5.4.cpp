#include<iostream>
using namespace std;
class Area
{
    int l,b;
    public:
       Area(int x, int y)
       {
           l=x;
           b=y;
           cout<<"Area of rectangle is: "<<l*b<<endl;
       }
       Area(int x)
       {
            l=x;
            cout<<"Area of square is: "<<l*l;
       }
};
int main()
{
   Area ar1(4,5);
   Area ar2(4);
}