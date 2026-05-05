#include<stdio.h>

int main()
{
    int arr[100],n,sn,i;
    printf("enter size of array:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter search number : ");
    scanf("%d",&sn);
    for(i=0;i<n;i++)
    {
        if(arr[i]==sn)
        {
            printf("%d",i+1);
        }
    }
      return 0;
}