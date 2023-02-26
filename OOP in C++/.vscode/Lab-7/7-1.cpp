#include<iostream> 
using namespace std; 
class Test 
{ 
    int a,b; 
    public: 
        void getData() 
        { 
            cout<<"Enter two numbers"<<endl; 
            cin>>a>>b; 
        } 
        void operator ++() 
        { 
            ++a;  
        } 
        void operator --() 
        { 
            --b; 
        } 
        void display() 
        { 
            cout<<"Value of a = "<<a<<endl; 
            cout<<"Value of b = "<<b<<endl; 
        }
}; 
int main() 
{ 
    Test t; 
    t.getData(); 
    cout<<"Before operator overloading"<<endl; 
    t.display();
    cout<<endl; 
    ++t; 
    --t; 
    cout<<"After operator overloading"<<endl; 
    t.display(); 
}