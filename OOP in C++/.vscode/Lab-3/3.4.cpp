#include<iostream>
#include<iomanip>
using namespace std;
class Batsman
{
    char  name[20];
    int runs_made,no_of_fours,no_of_sixes;
    public:
    void input()
    {
        int i;
        cout<<endl<<"Enter  name,runs made, no.of fours and no.of sixes of batman"<<i+1<<endl;
        cin>>name>>runs_made>>no_of_fours>>no_of_sixes;
        i++;
    }
    void display()
    {
        cout<<setw(15)<<name<<setw(16)<<runs_made<<setw(15)<<no_of_fours<<setw(17)<<no_of_sixes<<endl; 
    }    
};
void line();
void star();
void line()
{
    int i;
    for ( i = 0; i < 40; i++)
    {
        cout<<"--";
    }
    cout<<endl; 
}
void star()
{
    int i;
    for ( i = 0; i < 40; i++)
    {
        cout<<"**";
    }
    cout<<endl;   
}

int main()
{ 
    int i;
    class Batsman b[5];
    for ( i = 0; i < 5; i++)
    {
        b[i].input();
    }
    cout<<endl<<endl<<setw(49)<<"Batsman's Table"<<endl;
    line();
    cout<<setw(15)<<"Name"<<setw(21)<<"Runs Made"<<setw(17)<<"No. of fours"<<setw(20)<<"No. of sixes"<<endl;
    line();
    for ( i = 0; i < 5; i++)
    {
        b[i].display();
    }
    cout<<endl<<endl<<endl;
    star();
    cout<<setw(44)<<"Finish"<<endl;
    star();

}    
    
    
    