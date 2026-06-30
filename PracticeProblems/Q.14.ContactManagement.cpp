#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,string> contact;
    map<string,string>::iterator it;

    int choice;
    string name,phone;

    do
    {
        cout<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Search Contact"<<endl;
        cout<<"3. Delete Contact"<<endl;
        cout<<"4. Display Contacts"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter Name: ";
            cin>>name;

            cout<<"Enter Phone: ";
            cin>>phone;

            contact[name]=phone;
        }

        else if(choice==2)
        {
            cout<<"Enter Name: ";
            cin>>name;

            if(contact.find(name)!=contact.end())
                cout<<"Phone = "<<contact[name]<<endl;
            else
                cout<<"Contact Not Found"<<endl;
        }

        else if(choice==3)
        {
            cout<<"Enter Name: ";
            cin>>name;

            contact.erase(name);
        }

        else if(choice==4)
        {
            for(it=contact.begin();it!=contact.end();it++)
            {
                cout<<it->first<<" -> "<<it->second<<endl;
            }
        }

    }while(choice!=5);

    return 0;
}