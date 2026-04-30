#include<iostream>
using namespace std;

int main()
{
    int digit,rem,ans=0;
    cout<<"enter any digit : ";
    cin>>digit;
    while(digit>0)
    {
      rem=digit%10;
      ans=rem+ans*10;
      digit/=10;
    }

    cout<<"reverse of number  : "<<ans;
    return 0;
}