#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c=2,d;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    return 0;
}