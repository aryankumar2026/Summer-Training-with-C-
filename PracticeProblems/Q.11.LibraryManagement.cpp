#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book
{
public:
    string name, author;
    float price;

    void addBook()
    {
        cout<<"Enter Book Name: ";
        cin>>name;

        cout<<"Enter Author Name: ";
        cin>>author;

        cout<<"Enter Price: ";
        cin>>price;
    }

    void displayBook()
    {
        cout<<"Book Name : "<<name<<endl;
        cout<<"Author : "<<author<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
    vector<Book> b;
    Book temp;
    int n,i,found=0;
    string search;

    cout<<"Enter Number of Books: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"Book "<<i+1<<endl;
        temp.addBook();
        b.push_back(temp);
    }

    cout<<endl;
    cout<<"Books List"<<endl;

    for(i=0;i<n;i++)
    {
        b[i].displayBook();
        cout<<endl;
    }

    cout<<"Enter Book Name to Search: ";
    cin>>search;

    for(i=0;i<n;i++)
    {
        if(search==b[i].name)
        {
            found=1;
            cout<<"Book Found"<<endl;
            b[i].displayBook();
        }
    }

    if(found==0)
        cout<<"Book Not Found"<<endl;

    return 0;
}