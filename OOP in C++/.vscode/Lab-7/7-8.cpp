#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
void swap(T *x, T *y)
{
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<"A: "<<a<<setw(5)<<"B: "<<b<<endl<<endl;
    swap(&a,&b);
    cout<<"After swapping"<<endl;
    cout<<"A: "<<a<<setw(5)<<"B: "<<b;
}