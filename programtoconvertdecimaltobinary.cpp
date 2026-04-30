#include<iostream>
using namespace std;

int main()
{
    int num,rem,mul=1,result=0;
    cout<<"enter digit : ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        num/=2;
        result+=rem*mul;
        mul*=10;
    }

    cout<<result;
    return 0;
}