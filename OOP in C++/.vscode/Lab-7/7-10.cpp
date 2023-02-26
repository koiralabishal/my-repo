#include<iostream>
using namespace std;
int main()
{
    int a,b,id, num[5]={1,2,3,4,5};
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<endl;
    cout<<"Enter id"<<endl;
    cin>>id;
    cout<<endl;
    try
    {
        if (b==0)
        {
            throw "Divisible by zero is impossible.";
        }
        else
        {
            cout<<"Division is: "<<(a/b)<<endl;
            cout<<endl;
        }    
    }
    catch(const char* ex)
    {
        cout<<ex;
        cout<<endl;
    }

    
    try
    {
         if (id>4)
        {
            throw "Array index out of range";
        }
        else
        {
            cout<<"Array value is: "<<num[id];
        }
        
    }
    catch(const char* excep)
    {
        cout<<excep;
    }
    
    return 0;
}