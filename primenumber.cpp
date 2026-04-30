#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter any number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }

    if(count==2)
    {
        cout<<"the given number is prime";
    }
    else
    {
        cout<<"the given number is not prime";
    }
    return 0;
}