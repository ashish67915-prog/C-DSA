#include<stdio.h>

int areaofrec(int length,int breadth)
{
    return (length*breadth);
}
int sum(int a,int b)
{
    return (a+b);
}
float areaofcircle(float radius)
{
    return (3.14*radius*radius);
}
int main()
{
    int length,breadth,a,b;
    float radius;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    printf("enter length and breadth : ");
    scanf("%d%d",&length,&breadth);
    printf("enter radius : ");
    scanf("%f",&radius);
    areaofrec(length,breadth);
    sum(a,b);
    areaofcircle(radius);
    printf("%d\n",areaofrec(length,breadth));
    printf("%d\n",sum(a,b));
    printf("%f",areaofcircle(radius));
    return 0;
}