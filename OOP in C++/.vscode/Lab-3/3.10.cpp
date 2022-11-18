#include<iostream>
#include<math.h>
using namespace std;
class Demo
{
    int num;
    static int count;
    public:
        void getdata()
        {
            cout<<endl<<"Enter any number"<<endl;
            cin>>num;
            count++;
        }
        void showcount()
        {
            cout<<endl<<"getdata() function called "<<count<<" times."<<endl;
        }
};
int Demo::count;
int main()
{
    Demo d,d1,d2,d3,d4;
    d.getdata();
    d1.getdata();
    d2.getdata();
    d3.getdata();
    d4.getdata();
    d.showcount();
}
