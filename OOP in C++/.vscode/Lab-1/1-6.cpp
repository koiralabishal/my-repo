#include<iostream>
#include<math.h>
using namespace std;
class Circle
{
    float r;
    public:
        float area()
        {
            cout<<"Enter radius"<<endl;
            cin>>r;
            cout<<"Area is: ";
            return 3.14*r*r;
        }   
};
int main()
{
    Circle a;
    cout<<a.area();
}  

