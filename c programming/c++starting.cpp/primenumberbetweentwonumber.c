#include<stdio.h>

int main()
{
    int n1,n2,j,i,count=0;
    printf("enter first number : ");
    scanf("%d",&n1);
    printf("enter second number : ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
      for(j=2;j<=i;j++)
      {
        if(i%j==0)
        break;
      }
      if(i==j)
      {
        printf("%d",j);
      }

    }
    return 0;
}