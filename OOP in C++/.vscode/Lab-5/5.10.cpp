#include<iostream>
#include<string>
using namespace std;
class Mountain
{
    string name, location;
    public:
        int height;
        Mountain(string s, string t, int u)
        {
            name=s;
            location=t;
            height=u;
        }
        void CmpHeight(Mountain m, Mountain n)
        {
            if (m.height>n.height)
            {
                cout<<"Mounatin having object m has greatest height."<<endl;
            }
            else
            {
                cout<<"Mounatin having object n has greatest height."<<endl;
            }
        }
        void DisplayInfo()
        {
            cout<< endl;          
            cout<<"Name: "<<name<<endl;
            cout<<"Location: "<<location<<endl;
            cout<<"Height: "<<height<<endl;                 
        }
};
int main()
{
    Mountain m1("MtEveret","Solukhumbu",8848);
    Mountain m2("JugalHimal","Kathmandu",9999);
    m1.CmpHeight(m1,m2);
    m1.DisplayInfo();
    m2.DisplayInfo();
    cout<<endl;
    cout<<"Information of Mountain having greatest height:";
    if(m1.height > m2.height)
    {
        m1.DisplayInfo();
    }
    else
    {
        m2.DisplayInfo();
    }
}