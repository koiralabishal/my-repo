#include<iostream>
using namespace std;
class Room
{
    protected:
       int l,b;
    public:
       int area()
       {
          cout<<"Area is: "<<l*b<<endl;
          return 0;
       }
};
class Bedroom : public Room
{
   int h;
   public:
       void set_data(int m,int n,int o)
       {
          l=m;
          b=n;
          h=o;
       }
       int Volume()
       {
          cout<<"Volume is: "<<l*b*h<<endl;
          return 0;
       }
};
int main()
{
    Bedroom b;
    b.set_data(4,5,2);
    b.area();
    b.Volume();
}