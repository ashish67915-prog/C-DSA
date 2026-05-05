#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("You entered an even number: %d", num);
    } 
    else 
    {
        printf("Thank you");
    }

    return 0;
}