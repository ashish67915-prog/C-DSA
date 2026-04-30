#include<iostream>
using namespace std;

int main()
{
    int digit,rem,ans=0;
    cout<<"enter any digit : ";
    cin>>digit;
    int c=digit;
    while(digit>0)
    {
        rem=digit%10;
        ans=rem+ans*10;
        digit/=10;
    }

    if(c==ans)
    {
        cout<<"digit is palindrome";
    }
    else
    {
        cout<<"digit is not palindrome";
    }
    return 0;
}