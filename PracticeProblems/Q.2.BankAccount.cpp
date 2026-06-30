#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
public:
    string name;
    int accNo;

private:
    float balance;

public:

    BankAccount(string n,int a,float b)
    {
        name=n;
        accNo=a;
        balance=b;
    }

    void deposit()
    {
        float amt;

        cout<<"Enter Deposit Amount: ";
        cin>>amt;

        balance=balance+amt;

        cout<<"Amount Deposited"<<endl;
    }

    void withdraw()
    {
        float amt;

        cout<<"Enter Withdraw Amount: ";
        cin>>amt;

        if(amt<=balance)
        {
            balance=balance-amt;
            cout<<"Amount Withdrawn"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    void displayBalance()
    {
        cout<<"Balance = "<<balance<<endl;
    }
};

int main()
{
    BankAccount b("Aryan",101,5000);

    b.deposit();
    b.withdraw();
    b.displayBalance();

    return 0;
}