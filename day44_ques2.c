//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // 1. Input the string from the user
    printf("Enter a string: ");
    // fgets reads the entire line, including spaces
    fgets(str, sizeof(str), stdin);

    // 2. Remove the trailing newline character added by fgets (optional but recommended)
    str[strcspn(str, "\n")] = '\0';

    // 3. Loop through the string and replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // 4. Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
