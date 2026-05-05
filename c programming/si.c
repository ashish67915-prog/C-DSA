#include<stdio.h>

int main()
{
    float amt,rate,time,si;
    printf("enter amt=");
    scanf("%f",&amt);
    printf("enter rate=");
    scanf("%f",&rate);
    printf("enter time=");
    scanf("%f",&time);
    si=(amt*rate*time)/100;
    printf("%f",si);
    return 0;
}