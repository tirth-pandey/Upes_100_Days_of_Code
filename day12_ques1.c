//Write a program to calculate library fine.
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days later: ");
    scanf("%d",&days);

    if (days < 0) {
        printf("Invalid number of days! Days cannot be negative.\n");
    }
    else if (days > 30) {
        printf("You are late by %d days. Your membership is CANCELLED!\n", days);
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Library Fine: ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Library Fine: ₹%d\n", fine);
    }
    else {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Library Fine: ₹%d\n", fine);
    }

    return 0;
}
