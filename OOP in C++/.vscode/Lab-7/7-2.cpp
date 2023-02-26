#include<iostream> 
using namespace std; 
class Test 
{ 
    int a; 
    public: 
        void getData()
        {
            cout<<"Enter a number"<<endl;
            cin>>a;
        }
        Test operator *(Test m) 
        { 
            Test temp;
            temp.a = a * m.a;
            return temp;
        } 
        void display() 
        { 
            cout<<a;     
        }
}; 
int main() 
{ 
    Test t1,t2,t3;
    t1.getData();
    t2.getData();
    t3=t1*t2;
    cout<<"Multiplication is: ";
    t3.display();
}