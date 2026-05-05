#include<iostream>
using namespace std;

int subset(int arr[],int index,int targetsum,int n)
{
    if(targetsum==0)
    {
        return 1;
    }
    if(index==n || targetsum<0)
    return 0;

    return subset(arr,index+1,targetsum,n) + subset(arr,index,targetsum-arr[index],n);
}
int main()
{
    int arr[3]={2,3,4};
    int targetsum=6;
    cout<<subset(arr,0,targetsum,3);
    return 0;
}