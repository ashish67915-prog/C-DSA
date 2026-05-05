#include<stdio.h>

int main()
{
   int n;
   printf("enter size of array : ");
   scanf("%d",&n);
   int arr1[n],arr2[n],i,j,count=0;
   printf("enter elements in first array : ");
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr1[i]);
   }
   for(i=n-1,j=0;i>=0 && j<n;i--,j++)
   { 
     arr2[j]=arr1[i];
   }
   for(i=0;i<n;i++)
   {
     if(arr1[i]==arr2[i])
     {
        count++;
     }
   }
   if(count==n)
   {
    printf("array is palindrome");
   }
   else
   {
    printf("array is not palindrome");
   }

   
   return 0;
}