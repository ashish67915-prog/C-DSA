//print a string

// #include<iostream>
// using namespace std;

// int main()
// {
//  string s = "rohan";
//  cout<<s;
// }


//reverse a string

// #include<iostream>
// using namespace std;

// int main()
// {
//     string s = {'r','o','h','a','n'};
//     for(int i=s.size()-1;i>=0;i--)
//     {
//         cout<<s[i];
//     }
//     cout<<endl;
  
//     return 0;

// }

//checking string is palindrome or not
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     puts("enter any string : ");
//     getline(cin,s);
//     int j = s.size()-1,flag = 1;
//     for(int i=0;i<=j;i++)
//     {
//         if(s[i]!=s[j])
//         {
//         flag = 0;
//         break;
//         }
//         j--;
//    }
//    if(flag == 1)
//    cout<<"palindrome";
//    else
//    cout<<"not palindrome";
//    return 0;
// }


//count number of vowels inr sring
// #include<iostream>
// using namespace std;

// int main()
// {
//   string s;
//   int count =0;
//   cout<<"enter any string : ";
//   getline(cin,s);
//   for(int i=0;i<s.size();i++)
//   {
//     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
//     {
//         count++;
//     }
//   }
//   cout<<"number of vowel in string : "<<count;
//   return 0;
// }


//replacing string element
// #include<iostream>
// using namespace std;

// // int main()
// // {
// //     string s ="abc";
// //     s[0] = 'x';
// //     cout<<s;
// //     return 0;
    
// // }

// int main()
// {
//     string s1 = "Ashish";
//     string s2=" ";
//     string s3="Yadav";
//     string s4=s1 + s2 + s3;
//     cout<<s4;
//     return 0;
// }


//linear search

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[100],n,target;
//     cout<<"enter size of array : ";
//     cin>>n;
//     cout<<"enter your target : ";
//     cin>>target;
//     cout<<"enter elements in array";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//       if(arr[i]==target)
//       {
//         cout<<"search complete target is present";
//         break;
//       }

//     }
//     return 0;

// }

//binary search
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100],target;
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;
//     cout<<"enter element to be search : ";
//     cin>>target;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int start = 0 ,end = n-1;
//     while(start<=end)
//     {
//         int mid = start + (end-start)/2;
//         if(arr[mid] == target)
//         {
//             cout<<"element found at index : "<<mid;
//             break;
//         }
//         else if(arr[mid]<target)
//         {
//         start = mid+1;
//         }
//         else
//         {
//             end = mid-1;
//         }

//     }
//     return 0;

// }


// decimal to binary 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,rem,ans=0,mul=1;
//     cout<<"enter any number : ";
//     cin>>n;
//     while(n>0)
//     {
//       rem = n%2;
//       n=n/2;;
//       ans=ans+rem*mul;
//       mul=mul*10;
//     }
//     cout<<ans;
//     return 0;
// }


//decimal to octal

#include<iostream>
using namespace std;

int main()
{
    
    int n,rem,ans=0,mul=1;
    if(n>9)
    {
    cout<<"enter any number : ";
    cin>>n;
    while(n>0)
    {
        rem = n%8;
        n=n/8;
        ans = ans+rem*mul;
        mul=mul*10;

    }
    cout<<ans;
   }
}