#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Employee e("Aryan", 101);
    e.display();

    return 0;
}