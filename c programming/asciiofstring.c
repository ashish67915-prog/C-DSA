#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    puts("enter any string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}