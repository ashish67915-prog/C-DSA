#include<stdio.h>

int main()
{
    float a,b,c,res;
    printf("enter three numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    res=a*b+c/a;
    printf("%f",res);
    return 0;

}
