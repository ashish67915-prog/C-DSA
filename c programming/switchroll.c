#include<stdio.h>

int main()
{
  int roll;
  printf("enter roll number=");
  scanf("%d",&roll);
  switch(roll)
  {
  case 1: printf("Ashish ");
  break;
  case 2: printf("Nitin");
  break;
  case 3: printf("Mukesh");
  break;
  case 4: printf("Sahil");
  break;
  default : printf("invalid roll number");
  break;
  }
return 0;
}