#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    printf("%d%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("%d%d",a,b);

}