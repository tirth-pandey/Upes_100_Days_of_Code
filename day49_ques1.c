//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character (if it is a lowercase letter, convert to uppercase)
    if (name[0] >= 'a' && name[0] <= 'z') {
        printf("%c", name[0] - 32);
    } else if (name[0] >= 'A' && name[0] <= 'Z') {
        printf("%c", name[0]);
    }

    // Traverse the string to find characters after a space
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            char next_char = name[i + 1];
            printf(". ");
            
            // Convert lowercase to uppercase manually
            if (next_char >= 'a' && next_char <= 'z') {
                printf("%c", next_char - 32);
            } else if (next_char >= 'A' && next_char <= 'Z') {
                printf("%c", next_char);
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
