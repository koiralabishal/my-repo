#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
        void getData()
        {
            cout << "Enter length and breadth" << endl;
            cin >> l >> b;
        }
        void calculateArea()
        {
            cout << "Area is: " << l * b;
        }
};
int main()
{
    Rectangle r;
    //r.l=5;   error
    //r.b=6;   error
    r.getData();
    r.calculateArea();
}


/*In above program, we cannot acess data member l and b 
directly in main() function because l and b are private.*/