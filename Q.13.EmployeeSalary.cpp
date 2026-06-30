#include<iostream>
using namespace std;

class Employee
{
protected:
    float basic;

public:
    void input()
    {
        cout<<"Enter Basic Salary: ";
        cin>>basic;
    }
};

class Manager : public Employee
{
public:
    void display()
    {
        float salary;

        salary=basic+5000;

        cout<<"Manager Salary = "<<salary<<endl;
    }
};

class Developer : public Employee
{
public:
    void display()
    {
        float salary;

        salary=basic+3000;

        cout<<"Developer Salary = "<<salary<<endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    cout<<"Manager"<<endl;
    m.input();
    m.display();

    cout<<endl;

    cout<<"Developer"<<endl;
    d.input();
    d.display();

    return 0;
}