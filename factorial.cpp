#include<iostream>
using namespace std;

int main()
{
    int n,f=1;
    cout<<"enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"factorial of a number : "<<f;
    return 0;
}