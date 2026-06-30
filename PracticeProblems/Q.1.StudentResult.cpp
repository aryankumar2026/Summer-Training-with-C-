#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int m1, m2, m3;
    int total;
    float per;

    Student()
    {
        total = 0;
        per = 0;
    }

    void input()
    {
        cout<<"Enter Student Name: ";
        cin>>name;

        cout<<"Enter Roll Number: ";
        cin>>roll;

        cout<<"Enter Marks of 3 Subjects: ";
        cin>>m1>>m2>>m3;
    }

    void calculate()
    {
        total = m1 + m2 + m3;
        per = total / 3.0;
    }

    void display()
    {
        cout<<endl;
        cout<<"Student Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll<<endl;
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage : "<<per<<endl;

        if(per>=90)
            cout<<"Grade : A+"<<endl;
        else if(per>=75)
            cout<<"Grade : B+"<<endl;
        else if(per>=50)
            cout<<"Grade : C+"<<endl;
        else
            cout<<"Result : Fail"<<endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}