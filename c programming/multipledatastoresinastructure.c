
#include<stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter roll, name and marks of student %d:\n", i+1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\n Student Details \n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}





