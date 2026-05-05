#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter any string : ";
    getline(cin,s);
    string rev="";
    
    for(int i=s.size()-1;i>=0;i--)
    {
        rev+=s[i];

    }

    if(rev==s)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }
    return 0;
}