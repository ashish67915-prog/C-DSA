#include<stdio.h>

int main()
{
    int n,c,r,sum=0;
    printf("enter any number : ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(c==sum)
    {
        printf("entered number is armstrong number");
    }
    else
    {
        printf("entered number is not a palindrome number");
    }
    return 0;
}