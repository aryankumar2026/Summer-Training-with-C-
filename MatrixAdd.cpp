#include<iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col;

    cout<<"Enter rows and columns: ";
    cin>>r>>col;

    cout<<"Enter first matrix:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter second matrix:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Result Matrix:\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}