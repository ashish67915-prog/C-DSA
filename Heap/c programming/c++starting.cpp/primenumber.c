#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    if(count==1)
    {
        printf("entered number is prime");
    }
    else{
        printf("entered number is not prime");
    }
    return 0;
}