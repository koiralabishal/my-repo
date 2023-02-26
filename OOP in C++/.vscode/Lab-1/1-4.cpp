#include <iostream>
using namespace std;
class Prime
{
    int n, c = 0;
    public:
    void prime()
    {
        cout << "Enter any number" << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (n% i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << n << " is prime." << endl;
        }
        else
        {
            cout << n << " is not prime." << endl;
        }
    }
};
int main()
{
    Prime p;
    p.prime();
}