#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int i,item,mid,low=0,high=4;
    cout<<"enter element you have to search : ";
    cin>>item;
    int count=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==item)
        {
            count++;
            cout<<mid;
            break;
        }
       else if(arr[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(count==0)
    {
        cout<<"not found";
    }
    return 0;
}