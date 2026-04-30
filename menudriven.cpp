#include<iostream>
using namespace std;


void swaptwoNumber()
{
    int a=20,b=30,temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

void checkPrime()
{
   int n,count=0;
   cout<<"enter any number : ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    if(n%i==0)
    {
        count++;
    }
   }

   if(count==2)
   {
    cout<<"the given number is a prime number "<<endl;
   }

   else
   {
    cout<<"the given number is not prime "<<endl;
   }
}

void reverseNumber()
{
    int n,r,ans=0;
    cout<<"enter any number :";
    cin>>n;
    while(n)
    {
       r=n%10;
       ans=ans*10+r;
       n=n/10;
    }

    cout<<"reverse of a number : "<<ans<<endl;
}

void checkPalindrome()
{
    int n,r,ans=0;
    cout<<"enter any number : ";
    cin>>n;
    int c=n;
    while(n)
    {
        r=n%10;
        ans=ans*10+r;
        n=n/10;
    }

    if(c==ans)
    {
        cout<<"the given number is palindrome"<<endl;
    }
    else
    {
        cout<<"the given number is not palindrome"<<endl;
    }

}

void checkArmstrong()
{
    int n,r,ans=0;
    cout<<"enter any number : ";
    cin>>n;
    int c=n;
    while(n)
    {
       r=n%10;
       ans=ans+(r*r*r);
       n=n/10;
    }

    if(c==ans)
    {
        cout<<"the given number is armstrong"<<endl;
    }
    else
    {
        cout<<"the given number is not armstrong"<<endl;
    }
}

void factorial()
{
    int n,fact=1;
    cout<<"enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"factorial of a number  "<<fact<<endl;
}

void fibonacciSeries()
{
    int n;
    cout<<"enter any number : ";
    cin>>n;
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
       cout<<a;
       c=a+b;
       a=b;
       b=c;
    }
}

void sumofNaturalnumber()
{
    int n,sum=0;
    cout<<"enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"sum of n natural number : "<<sum<<endl;
}

void decimalTobinary()
{
    int n,r,ans=0,mul=1;
    cout<<"enter any number : ";
    cin>>n;
    while(n>0)
    {
        r=n%2;
        n=n/2;
        ans+=r*mul;
        mul*=10;
    }

    cout<<ans<<endl;
}

void decimalTooctal()
{
    int n,r,mul=1,ans=0;
    cout<<"enter any number : ";
    cin>>n;
    while(n>0)
    {
        r=n%8;
        n=n/8;
        ans+=r*mul;
        mul=mul*10;
    }

    cout<<ans<<endl;
}

void decimalTohexadecimal()
{
    int n,r,mul=1,ans=0;
    cout<<"enter any number";
    cin>>n;
    while(n>0)
    {
        r=n%16;
        n=n/16;
        ans+=r*mul;
        mul=mul*10;
    }

    cout<<ans<<endl;
}

void sumofArrayelement()
{   int sum=0;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
      sum+=arr[i];
    }

    cout<<"sum of array element : "<<sum<<endl;
}

void Reversearrayelement()
{
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i];
    }
}

void Linearsearch()
{
    int arr[]={1,2,3,4,5};
    int target;
    cout<<"enter the target : ";
    cin>>target;
    for(int i=0;i<5;i++)
    {
        if(target==arr[i])
        {
            cout<<"position of the element : "<<i<<endl;
            break;
        }
    }

}

void Binarysearch()
{
    int arr[]{1,2,3,4,5};
    int start=0,end=4,mid;
    int target;
    cout<<"enter the target : ";
    cin>>target;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            cout<<"position of target : "<<mid<<endl;
            break;
        }

        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
}

void Largestelement()
{
    int arr[]={1,4,7,8,4,9};
    int max=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
           max=arr[i];
        }
    }

    cout<<"largest element of array : "<<max<<endl;
}

void Secondlargestelement()
{
    int arr[]={1,4,7,8,4,9};
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    for(int i=0;i<6;i++)
    {
        if(arr[i]>secmax && arr[i]!=max)
        {
            secmax=arr[i];
        }
    }

    cout<<"second largest element in an array : "<<secmax<<endl;
}

int fact(int n)
{
    if(n==0 || n==1)
    return 1;

    return n*fact(n-1);
}

void factorialRecursion()
{
    int n;
    cout<<"enter any number : ";
    cin>>n;
    int ans=fact(n);
    cout<<"factorial of number using recursion : "<<ans<<endl;
}

void Form2Darray()
{
    int arr[2][2];
    cout<<"enter the element in a 2D array : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sumoftwoMatrix()
{
    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][2]={{4,3},{2,1}};
    int arr3[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int choice;
    cout<<"enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1: swaptwoNumber();
        break;
        case 2:checkPrime();
        break;
        case 3:reverseNumber();
        break;
        case 4:checkPalindrome();
        break;
        case 5:checkArmstrong();
        break;
        case 6:factorial();
        break;
        case 7:fibonacciSeries();
        break;
        case 8:sumofNaturalnumber();
        break;
        case 9:decimalTobinary();
        break;
        case 10:decimalTooctal();
        break;
        case 11:decimalTohexadecimal();
        break;
        case 12:sumofArrayelement();
        break;
        case 13:Reversearrayelement();
        break;
        case 14:Linearsearch();
        break;
        case 15:Binarysearch();
        break;
        case 16:Largestelement();
        break;
        case 17:Secondlargestelement();
        break;
        case 18:factorialRecursion();
        break;
        case 19:Form2Darray();
        break;
        case 20:sumoftwoMatrix();
        break;
        default:cout<<"Your choice is invalid please reentered the choice";
        break;
    }
}