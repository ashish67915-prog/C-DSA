#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    printf("%p %d",ptr,*ptr);
    ptr++;
    printf("\n%p %d",ptr,*ptr);
    return 0;
}