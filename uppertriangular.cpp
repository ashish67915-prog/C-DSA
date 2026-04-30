#include<iostream>
using namespace std;

int main()
{
    int arr[3][3],i,j;
    cout<<"enter elements in array : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"upper triangular  matrix : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i<=j)
           {
            cout<<arr[i][j];
           }
           else
           {
            cout<<'0';
           }
        }
        cout<<endl;
    }
    return 0;

}