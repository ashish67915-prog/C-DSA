#include<stdio.h>

struct Address {
    char city[20];
    int pincode;
};

struct Person {
    char name[20];
    struct Address ad;  // structure inside structure
};

int main() {
    struct Person p = {"Rohan", {"Delhi", 110001}};

    printf("Name: %s\n", p.name);
    printf("City: %s\n", p.ad.city);
    printf("Pincode: %d\n", p.ad.pincode);

    return 0;
}







