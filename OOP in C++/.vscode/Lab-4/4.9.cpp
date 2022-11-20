#include<iostream>
#include<stdlib.h>
using namespace std;
class BankAccount
{
    char name[20],acc_type[20];
    int acc_no;
    float bal_amount;
    public:
       void input()
       {
           cout<<"Enter name of the depositors"<<endl;
           cin>>name;
           cout<<"Enter account number"<<endl;
           cin>>acc_no;
           cout<<"Enter type of account"<<endl;
           cin>>acc_type;
           cout<<"Enter balance amount in account"<<endl;
           cin>>bal_amount;
       }
       void deposit()
       {
           int bal;
           cout<<endl<<"Enter deposit amount"<<endl;
           cin>>bal;
           bal_amount+=bal;
           cout<<"Amount deposited sucessfully"<<endl;
           cout<<"Your new balance is: "<<bal_amount<<endl;
       }
       void withdrawl()
       {
            int bal;
            cout<<endl<<"Your balance amount is: "<<bal_amount<<"/-"<<endl;
            cout<<"Enter your withdrawl amount"<<endl;
            cin>>bal;
            bal_amount-=bal;
            cout<<"After withdrawl,your balance amount is: Rs."<<bal_amount<<"/-"<<endl;
        }
        void display()
        {
            cout<<endl<<"Name of the depositor: "<<name<<endl;
            cout<<"Balance Amount: Rs."<<bal_amount<<"/-"<<endl;
        }
};
int main()
{
    BankAccount b;
    b.input();
    while(1)
    {
        int i;
        cout<<endl<<endl;
        cout<<"1)Your Information"<<endl;
        cout<<"2)Deposit"<<endl;
        cout<<"3)Withdrawl"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>i;
        if (i==1)
        {
            b.display();
        }
        else if (i==2)
        {
            b.deposit();
        }
        else if (i==3)
        {
            b.withdrawl();
        }
        else 
        {
            exit(0);
        }
    }
}    

