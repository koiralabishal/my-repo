#include<iostream>
using namespace std;
template<class T>
void sum(T x, T y)
{
    cout<<"Sum is:"<< x+y;
}
int main()
{
    cout<<"For integers"<<endl;
    sum(5,6);
    cout<<endl<<"For floats"<<endl;
    sum(5.5,5.5);
}