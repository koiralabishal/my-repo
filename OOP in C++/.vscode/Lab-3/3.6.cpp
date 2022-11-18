#include <iostream>
using namespace std;
class Box
{
    int l, b, h;

public:
    void readData()
    {
        cout << "Enter length,breadth and height" << endl;
        cin >> l >> b >> h;
    }
    int showVolume()
    {
        return l*b*h;
    }
};
int main()
{
    int l, b, h;
    Box b1;
    b1.readData();
    cout<<"Volume is: "<<b1.showVolume();
}