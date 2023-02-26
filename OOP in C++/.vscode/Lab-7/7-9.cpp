#include<iostream>
using namespace std;
template<class T>
void avg_multi(T x, T y)
{
    cout<<"Average is:"<< (x+y)/2;
    cout<<endl<<endl;
    cout<<"Multiplication is:"<< x*y;
}
int main()
{
    avg_multi(5,5);
}