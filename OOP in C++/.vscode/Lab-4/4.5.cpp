#include<iostream>
#include<math.h>
using namespace std;
class TU;
class PU
{
    int phd_std;
    public:
       void input()
       {
          cout<<"Enter the no. of phd students of PU"<<endl;
          cin>>phd_std;
       }
       friend class TU;
       void showtotal(TU);

};
class TU
{
    int rsh;
    public:
        void input1()
        {
            cout<<"Enter the no. of researchers of TU"<<endl;
            cin>>rsh;
        }
        friend class PU;
        void showdifference(PU);

};
void PU::showtotal(TU m)
{
    cout<<endl;
    cout<<"Total number of students in PU and TU is: "<<phd_std+m.rsh<<endl;
}
void TU::showdifference(PU n)
{
    cout<<"Difference of students in PU and TU is: "<<abs(n.phd_std-rsh)<<endl;
}
int main()
{
    PU p;
    TU t;
    p.input();
    t.input1();
    p.showtotal(t);
    t.showdifference(p);
}