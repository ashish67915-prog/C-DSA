#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    return n*fact(n-1);
}

int main()
{
    int  n,ans;
    cout<<"enter any number : ";
    cin>>n;
    ans=fact(n);
    cout<<"factorial of a number : "<<ans;

    return 0;
}