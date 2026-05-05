#include<stdio.h>

int main()
{
   int a[5]={1,23,4,56,54};
   int  *p=a;
   printf("%d \n",++(*p));
   
   return 0;
}