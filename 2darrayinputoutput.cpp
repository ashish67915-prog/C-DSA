#include<iostream>
using namespace std;

int main()
{
    int arr[3][3],i,j;
    cout<<"taking input of array element  : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"giving output of the  array element :\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
   
}