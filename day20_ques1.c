//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, rem;
    int prod = 1;
    int has_odd = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        rem = num % 10;

        if (rem % 2 != 0) {
            prod = prod * rem;
            has_odd = 1;     
        }

        num = num / 10; 
    }

    if (has_odd) {
        printf("Product of odd digits = %d\n", prod);
    } else {
        printf("No odd digits found. Product = 0\n");
    }

    return 0;
}
