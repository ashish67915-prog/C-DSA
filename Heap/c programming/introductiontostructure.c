#include<stdio.h>
#include<string.h>
struct student 
{
    int roll;
    char name[50];
};
int main()
{
    struct student s;
    s.roll=1;
    strcpy(s.name,"ankit");
    printf("%d\n",s.roll);
    printf("%s",s.name);
    return 0;
}
