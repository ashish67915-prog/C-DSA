// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],i,n;
//     cout<<"enter size of the array  : ";
//     cin>>n;
//     //taking input of array element
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     //printing array element
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],i,n;
//     cout<<"enter size of the array : ";
//     cin>>n;
//     cout<<"enter the element in an array : ";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     int secmax=arr[0];

//     for(i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             secmax=max;
//             max=arr[i];
//         }
//         else if(arr[i]>secmax &&  arr[i]!=max)
//         {
//             secmax=arr[i];
//         }

//     }

//     cout<<secmax;
//     return 0;
// }.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],n,i;
//     cout<<"enter size of array : ";
//     cin>>n;
//     cout<<"enter element in an array : ";

//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int max=arr[0];
//     int secmax=arr[0];
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

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3],i,j;
//     cout<<"enter element in an array : ";
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][4],brr[3][4],crr[3][4],i,j;
//     cout<<"enter elements of the first matrix : \n";
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"enter element of second matrix : \n";
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cin>>brr[i][j];
//         }
//     }


//     cout<<"sum of the two matrix : \n";
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             crr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cout<<crr[i][j];
//         }
//      cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3],i,j;
//     cout<<"enter elements in array : \n";
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             cout<<arr[j][i];
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[2][4],brr[4][2],c[2][2],i,j,k;
//     cout<<"enter element in an array : \n";
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             cin>>brr[i][j];
//         }
//     }

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             c[i][j]=0;
//         }
//     }

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//            for(k=0;k<4;k++)
//            {
//             c[i][j]+=arr[i][k]*brr[k][j];
//            }
//         }
       
//     }

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             cout<<c[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;


// int main()
// {
//     int arr[5]={1,2,3,4,5},i,start,end,mid,target;
//     start=0;
//     end=4;

//     cout<<"enter your target you have to search : ";
//     cin>>target;
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         if(arr[mid]==target)
//         {
//             cout<<"position of target: "<<mid;
//         }

//         else if(target>arr[mid])
//         {
//             start=start+1;
//         }
//         else
//         {
//             end=end-1;
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],start,end,mid,key,n,i,found=0;
//     cout<<"enter size of the array : ";
//     cin>>n;

//     cout<<"enter element in an array: ";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     start=0;
//     end=3;
//     cout<<"enter the element you to search : ";
//     cin>>key;

//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         if(arr[mid]==key)
//         {
//             cout<<"position of the element : "<<mid;
//             found=1;
//             break;
//         }
//         else if(key>arr[mid])
//         {
//             start=mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//     }

//     if(!found)
//     {
//         cout<<"element  not found";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,ans=0,mul=1,rem;
//     cout<<"enter value of n : ";
//     cin>>n;
//     while(n>0)
//     {
//       rem=n%2;
//       ans=ans+rem*mul;
//       mul=mul*10;
//       n=n/2;
//     }

//     cout<<ans;
//     return 0;
// }

#include<iostream>
using namespace  std;

int main()
{
    int binary,rem,mul=1,ans=0;
    cout<<"enter binary number : ";
    cin>>binary;
    while(binary>0)
    {
        rem=binary%10;
        ans+=rem*mul;
        mul=mul*2;
        binary/=10;
    }
    cout<<ans;
    return 0;
}