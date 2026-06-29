    #include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo, marks;

public:
    void getData()
    {
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Roll No: " << endl;
        cin >> rollNo;
        cout << "Enter Marks: " << endl;
        cin >> marks;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    s.display();

    return 0;
}