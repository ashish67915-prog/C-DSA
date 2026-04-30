#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,n,target;
    cout<<"enter the number of elements in array :";
    cin>>n;
    cout<<"enter elements in array : ";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"enter target you have to search : ";
    cin>>target;
    for( i=0;i<n;i++)
    {
      if(arr[i]==target)
      {
        cout<<i;
        break;
      }
    }
    return 0;
}