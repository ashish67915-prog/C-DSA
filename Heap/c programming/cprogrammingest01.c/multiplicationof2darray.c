#include<stdio.h>

int  main()
{
    int  arr[10][10],brr[10][10],crr[10][10];
    int i,j,k;
    int r1,c1,r2,c2;
    printf("enter number of rows of first matrix : ");
    scanf("%d",&r1);
    printf("enter number of columns of first matrix : ");
    scanf("%d",&c1);
    printf("enter number of rows of second  matrix : ");
    scanf("%d",&r2);
    printf("enter number of columns of second matrix : ");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("multiplication of the matrix is not possible");
        return 0;
    }


    else
    { 
    printf("enter elements in the first array : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter elements in the second array : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    for( i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           crr[i][j]=0;
           for( k=0;k<c1;k++)
           {
            crr[i][j]+=arr[i][k]*brr[k][j];
           }
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
   }
   return 0;
}