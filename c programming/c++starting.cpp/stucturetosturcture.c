#include <stdio.h>

/* Inner structure */
struct Address
{
    char city[20];
    int pincode;
};

/* Outer structure */
struct Student
{
    int roll;
    char name[20];  // structure inside structure
};

int main()
{
    struct Student s;
    struct Address add;
    /* Input */
    s.roll = 1;
    strcpy(s.name, "Ashish");
    strcpy(s.add.city, "Delhi");
    s.add.pincode = 110001;

    /* Output */
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.add.city);
}