#include<iostream>
using namespace std;
class Convert
{
    /*int t;
    public:
       float convert()
       {
           cout<<"Enter temperture in Farenheit"<<endl;
           cin>>t;
           cout<<"Temperture in Centigrade is: "<<0.556*(t-32);
           return 0;
        }*/
    public:
       inline float convert(int tem)
       {
           cout<<"Temperture in Centigrade is: ";
           return 0.556*(tem-32);
       }
}c;
int main()
{ 
    //c.convert();
    /*int t;
    cout<<"Enter temperture in Farenheit"<<endl;
    cin>>t;
    cout<<c.convert(t);*/
    cout<<c.convert(100);
}
