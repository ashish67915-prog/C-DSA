#include<iostream>
using namespace std;

int main()
{
    int digit,rem,ans=0;
    cout<<"enter any digit :";
    cin>>digit;
    int c=digit;
    while(digit>0)
    {
        rem=digit%10;
        ans=ans+rem*rem*rem;
        digit/=10;
    }

    if(c==ans)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not armstrong";
    }

    return 0;
}