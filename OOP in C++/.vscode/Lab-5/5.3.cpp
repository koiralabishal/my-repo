#include<iostream>
using namespace std;
class AddAmount
{
    int amount=50;
    public:
        AddAmount()
        {
            amount=0;
        }
        AddAmount(int amou)
        {
           amount=amount +amou;
        }
        void final_amount()
        {
            cout<<"Final amount is: $"<<amount;
        }
};
int main()
{
    AddAmount a1(40);
    a1.final_amount();
}