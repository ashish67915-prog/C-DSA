#include<iostream>
using namespace std;

int main()
{
    int arr[7]={2,4,6,8,10,8,5};
    int start=0,end=6;
    while(start<=end)
    {
        int mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<"postion of peak : "<<mid<<endl;
            break;
        }
        else if(arr[mid]>arr[mid-1])
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