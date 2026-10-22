//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, year;
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // Prompt user for input
    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    // Validate month range (1 to 12)
    if (month < 1 || month > 12) {
        printf("Invalid month value!\n");
        return 1;
    }

    // Print formatted date: dd-Apr-yyyy
    printf("Formatted Date: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
