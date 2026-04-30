#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter elements in array : ";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"largest element in an array :\n";
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}