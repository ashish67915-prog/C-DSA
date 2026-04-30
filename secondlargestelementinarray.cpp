// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],i,n,max,secmax;
//     cout<<"enter size of array : ";
//     cin>>n;
//     cout<<"enter elements in array : \n";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"second largest element in array :\n";
//     max=arr[0];
//     secmax =arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]>secmax && arr[i]!=max)
//         {
//             secmax=arr[i];
//         }
//     }
//     cout<<secmax;
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,max,secmax;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter element in an array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    secmax=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            secmax=max;
            max=arr[i];
        }
    }
    cout<<"second maximum element in an array : "<<secmax<<endl;
    cout<<"maximum element in an array : "<<max;
    return 0;
}



