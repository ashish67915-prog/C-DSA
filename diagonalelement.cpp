#include<iostream>
using namespace std;

int main()
{
    int arr[3][3],i,j,sum=0;
    cout<<"enter elements in array : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"diagonal elements in an array : \n";
    for(i=0;i<3;i++)
    {
        cout<<arr[i][i];
    }

    cout<<"\nsum of diagonal element : \n";
    for(int i=0;i<3;i++)
    {
        sum+=arr[i][i];
    }

    cout<<sum;
    return 0;
}