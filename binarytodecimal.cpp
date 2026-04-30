#include<iostream>
using namespace std;

int main()
{
    int binary,rem,ans=0,mul=1;
    cout<<"enter binary number : ";
    cin>>binary;
    
    while(binary>0)
    {
      rem=binary%10;
      ans+=rem*mul;
      mul*=2;
      binary = binary/10;
    }
    cout<<"binary to decimal : "<<ans;
    return 0;

}