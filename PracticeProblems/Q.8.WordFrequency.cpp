#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    string str, word="";
    map<string,int> m;
    int i;

    cout<<"Enter Sentence:"<<endl;
    getline(cin,str);

    str = str + " ";

    for(i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            word = word + str[i];
        }
        else
        {
            if(word!="")
            {
                m[word]++;
                word="";
            }
        }
    }

    cout<<"Word Frequency:"<<endl;

    map<string,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    return 0;
}