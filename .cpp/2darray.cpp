#include<iostream>
using namespace std;

void changearrayelement(int arr[][3],int row,int col)
{
arr[0][0]=4;
}


int main()
{
    int arr[3][3],i,j;
    cout<<"enter elements in array : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    changearrayelement(arr,3,3);
    cout<<arr[0][0];
    return 0;
}