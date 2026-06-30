#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> marks;
    int n, i, x;
    int max, min;

    cout<<"Enter Number of Marks: ";
    cin>>n;

    cout<<"Enter Marks:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>x;
        marks.push_back(x);
    }

    marks.pop_back();

    max = marks[0];
    min = marks[0];

    for(i=0;i<marks.size();i++)
    {
        if(marks[i] > max)
            max = marks[i];

        if(marks[i] < min)
            min = marks[i];
    }

    cout<<"Marks:"<<endl;

    for(i=0;i<marks.size();i++)
    {
        cout<<marks[i]<<" ";
    }

    cout<<endl;
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl;

    return 0;
}