#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter elements in array : ";
    cin>>n;
    int arr[n],i,key;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element for which you find occurence : ";
    cin>>key;
    int start=0;
    int end=n-1,first=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
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
    if(first!=-1)
    {
        cout<<"position of the first occurence : "<<first;
    }
    else
    {
        cout<<"element not found here";
    }
    return 0;
}