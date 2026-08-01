//linear search

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



//binary search

#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"enter elements in array :";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int start=0;
    int end=n-1,key;
    cin>>key;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key)
        {
          cout<<"position of the key: "<<mid+1;
          break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}