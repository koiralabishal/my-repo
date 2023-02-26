#include<iostream>
#include<math.h>
using namespace std;
class Volume
{
    public:
       void volume(int r,int h)
       {
           cout<<endl<<endl;
           cout<<"Volume of cylinder is: "<<3.14*pow(r,2)*h<<endl;
       }
       void volume(int l,int b,int h)
       {
          cout<<"Volume of cuboid is: "<<l*b*h<<endl;
       }
       float volume(int l)
       {
           cout<<"Volume of cube is: "<<pow(l,3)<<endl;
           return 0;
       }
}v;
int main()
{
    /*int l,b,h,r;
    cout<<"Enter the length, breath,height and radius"<<endl;
    cin>>l>>b>>h>>r;
    v.volume(r,h);
    v.volume(l,b,h);
    v.volume(l);*/
    v.volume(2,6);
    v.volume(4,5,6);
    v.volume(4);
}
