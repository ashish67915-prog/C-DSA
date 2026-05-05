#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter elements in array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1,key,last=-1;;
    cout<<"enter the element :";
    cin>>key;
    while(start<=end)
    {
       int mid=(start+end)/2;
       if(arr[mid]==key)
       {
        last=mid;
        start=mid+1;
       }
       else if(arr[mid]<key)
       {
        start=mid+1;
       }
       else
       {
        end=mid-1;
       }
    }
    if(last!=-1)
    {
        cout<<"the last occurance is: "<<last;
    }
    else
    {
        cout<<"element not found";
    }
    return  0;
}