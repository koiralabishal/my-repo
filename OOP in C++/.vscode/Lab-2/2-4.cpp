#include<iostream>
using namespace std;
class Convert
{
    public:
       inline float convert(int p)
       {
          cout<<"Pounds in kilogram is: "<<p*0.453592;
          return 0;
       }
}c;
int main()
{
    c.convert(4);
}
