#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,index;
    cout<<"enter size of array : \n";
    cin>>n;
    cout<<"enter element in array : ";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"enter the index of element of an array who you want to delete :  \n";
    cin>>index;
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
return 0;
}