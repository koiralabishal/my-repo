#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
       void getData();
       void calculateArea();
};
void Rectangle::getData()
{
    cout << "Enter length and breadth" << endl;
    cin >>l >>b;
}
void Rectangle::calculateArea()
{
    cout << "Area is: " <<l * b;
}
int main()
{
    Rectangle r;
    r.getData();
    r.calculateArea();
}