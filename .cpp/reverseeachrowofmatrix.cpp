#include<iostream>
using namespace std;

void reverseeachrow(int arr[][4],int row,int col)
{
    
    for(int i=0;i<row;i++)
    {
        int start=0,end=col-1;
        while(start<=end)
        {
            int temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++;
            end--;
        }
    }

   
}

int main()
{
    int arr[3][4];
    cout<<"enter elements in array : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j];
    }
    cout<<"\n";
}


    //calling of the function
    reverseeachrow(arr,3,4);
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}