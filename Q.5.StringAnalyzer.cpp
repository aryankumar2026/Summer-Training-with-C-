#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    int vowel=0;
    int consonant=0;
    int digit=0;
    int space=0;
    int i;

    cout<<"Enter a Sentence:"<<endl;
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
           str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }

        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            consonant++;
        }

        else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }

        else if(str[i]==' ')
        {
            space++;
        }
    }

    cout<<"Vowels = "<<vowel<<endl;
    cout<<"Consonants = "<<consonant<<endl;
    cout<<"Digits = "<<digit<<endl;
    cout<<"Spaces = "<<space<<endl;

    return 0;
}