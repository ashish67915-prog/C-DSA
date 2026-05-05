#include<iostream>
using namespace std; 

int main()
{
    int arr[3][3];
    cout<<"enter elements in array : ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    int maxsum=INT8_MIN;
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}