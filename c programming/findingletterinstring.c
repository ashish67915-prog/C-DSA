#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0;
    char str[50],ch;
    printf("enter any string : ");
    gets(str);
    printf("enter letter to find : ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]==ch)
       {
          count=1;
          break;
       }
    }
      
    if(count==1)
    {
        printf("letter is present");
    }
    else
    {
        printf("letter is not present");
    }
    return 0;
}