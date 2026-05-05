#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int temp,i;
    temp=arr[4];
    for( i=3;i>=0;i--)
    {
         arr[i+1]=arr[i];
    }
    arr[0]=temp;
    printf("\n");
    for(i=0;i<=4;i++)
    {
        cout<<arr[i];
    }
    return 0;
}