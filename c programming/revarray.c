#include<stdio.h>

int main()
{
    int n,i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reverse array\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}