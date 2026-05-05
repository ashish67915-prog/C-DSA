#include<iostream>
using namespace std;

int main()
{
    string address;
    string ans;
    cout<<"enter ip address : ";
    cin>>address;
    int index=0;
    while(index<address.size())
    {
        if(address[index]=='.')
        ans=ans + "[.]";
        else
        ans=ans+address[index];
        index++;
    }
    cout<<ans;
}