#include<stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);
    printf("enter two number for operation : ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':printf("%d",a+b);
        break;
        case '-':printf("%d",a-b);
        break;
        case '*':printf("%d",a*b);
        break;
        case '/':printf("%d",a/b);
        break;
        case '%':printf("%d",a%b);
        break;
        default:printf("invalid operation");
    }
    return 0;
}