#include<stdio.h>

int main()
{
    int row,col,n;
    printf("enter any number : ");
    scanf("%d",&n);
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=5-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}