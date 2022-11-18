#include<iostream>
using namespace std;
class Area
{
    int l,b;
    public:
        void getarea()
        {
            cout<<"Enter length and breadth"<<endl;
            cin>>l>>b;
            cout<<"Area is: "<<l*b;
        }
};
int main()
{
    Area a;
    a.getarea();
}