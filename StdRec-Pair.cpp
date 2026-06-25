#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<string, int> student;

    cout << "Enter Student Name: " << endl;
    cin >> student.first;

    cout << "Enter Marks: " << endl;
    cin >> student.second;

    cout << "\n Student Record: " << endl;
    cout << "Name: " << student.first << endl;
    cout << "Marks: " << student.second << endl;

    return 0;
}