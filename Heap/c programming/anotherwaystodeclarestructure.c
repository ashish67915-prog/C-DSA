#include<stdio.h>

struct Employee {
    int id;
    char name[20];
} e = {101, "Rahul"};

int main() {
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    return 0;
}
