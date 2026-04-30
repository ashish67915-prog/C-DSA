#include<iostream>
using namespace std;

int main()
{
    int n,rem,mul=1,ans=0;
    char arr[100];
    cout<<"enter any number : ";
    cin>>n;
    int i=0;
    while(n>0)
    {
        rem=n%16;
        if(rem>9)
        {
            arr[i]='A'+(rem-10);
        }
        else{
        arr[i]='0'+rem;
        }
        n/=16;
        i++;

    }
  for(int j=i-1;j>=0;j--)   //we use j=n-1 because when loop terminate i increase one more time
  {
    cout<<arr[j];
  }
    return 0;

}