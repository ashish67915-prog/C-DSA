#include<stdio.h>

int main()
{
   int arr[5]={1,2,3,4,5};
   int *p=arr;
   printf("%p\n",&p);
   printf("%p\n",arr);
   return 0;
}