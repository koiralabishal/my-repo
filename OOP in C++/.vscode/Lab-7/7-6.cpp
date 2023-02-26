#include<iostream> 
using namespace std; 
class Test 
{ 
    int a,b; 
    public: 
        void getData()
        {
            cout<<"Enter  two numbers"<<endl;
            cin>>a>>b;
        }
        Test operator +(Test m) 
        { 
            Test temp;
            temp.a = a  +  m.a;
            temp.b = b  +  m.b;
            return temp;
        }
        Test operator -(Test m) 
        { 
            Test temp;
            temp.a = a  -  m.a;
            temp.b = b  -  m.b;
            return temp;
        } 
        void display() 
        { 
            cout<<a<<" + "<<b<<" i";     
        }
}; 
int main() 
{ 
    Test t1,t2,t3,t4;
    t1.getData();
    t2.getData();
    t3=t1+t2;
    t4=t1-t2;
    cout<<"Sum is: ";
    t3.display();
    cout<<endl<<endl<<"Difference is: ";
    t4.display();
}