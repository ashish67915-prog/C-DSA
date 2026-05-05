#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
            if(i%2!=0)
            {
           printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}