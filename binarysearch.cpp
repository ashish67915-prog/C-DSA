#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,mid,start,end,target;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter element in array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter target you have search : ";
    cin>>target;
    start=0;
    end=n-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {  
            cout<<mid;
            break;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }
    return 0;
}