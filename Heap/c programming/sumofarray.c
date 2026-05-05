#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}