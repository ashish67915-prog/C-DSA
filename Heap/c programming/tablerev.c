#include<stdio.h>

int main()
{
    int n,i,table;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
    printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}