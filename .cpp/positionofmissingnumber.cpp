#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of element in array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1,key,res;
    cout<<"enter key:";
    cin>>key;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
           res=mid;
           break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            res=mid;
            end=mid-1;
        }
    }
    cout<<"position of element is : "<<res<<endl;
    return 0;

}