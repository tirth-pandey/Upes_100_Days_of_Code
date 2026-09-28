//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[256];
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
     
        if (str[i] == '\n') {
            continue;
        }

        if (isspace((unsigned char)str[i])) {
            spaces++;
        } 
        else if (isdigit((unsigned char)str[i])) {
            digits++;
        } 
        else if (isalpha((unsigned char)str[i])) {
            continue;
        } 
        else {
            special_chars++;
        }
    }
    printf("\n--- Results ---\n");
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special_chars);

    return 0;
}
