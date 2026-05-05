#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,0,0,0,1,1};
    int start=0,end=5;
    while(start<end)
    {
     if(arr[start]==0)
     {
        start++;
     }
     else
     {
        if(arr[end]==0)
        {
            swap(arr[end],arr[start]);
            start++,end--;
        }
        else
        {
            end=end-1;
        }
     }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    return 0;
}