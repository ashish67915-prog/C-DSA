#include<stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;
    printf("%p %p %d",&a,ptr,*ptr);
    return 0;
}