#include<iostream>
using namespace std;

int main()
{  
int n,rem,ans=0,mul=1;
cout<<"enter any number : ";
cin>>n;
while(n>0)
{
    rem=n%10;
    rem=rem^1;
    n=n/10;
    ans=ans+rem*mul;
    mul=mul*2;
}
   cout<<ans;
   return 0;
}