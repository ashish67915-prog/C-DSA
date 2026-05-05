#include<iostream>

using namespace std;
int main()
{
    int arr[100],n;
    cout<<"enter size of the array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int target;
    cout<<"enter target : ";
    cin>>target;
    while(start<=end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<start;
            cout<<end;
            break;
        }
        else if(arr[start]+end>target)
        {
            end=end-1;
        }
        else
        start=start+1;
    }
    return 0;
}