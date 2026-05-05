#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
       if(n%i==0)
       {
        count++;
        break;
       }

    }
    if(count==0)
    cout<<"prime number";
    else
    cout<<"not prime";

    return 0;
}