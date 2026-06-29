#include <iostream>
using namespace std;

class Bank
{
    int balance;

public:
    void deposit(int amount)
    {
        balance = amount;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Final Balance = " << balance << endl;
    }
};

int main()
{
    Bank b;

    b.deposit(1000);
    b.withdraw(300);
    b.display();

    return 0;
}