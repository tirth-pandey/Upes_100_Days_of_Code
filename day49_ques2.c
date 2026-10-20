//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, last_space_idx = -1;

    printf("Enter full name: ");
    // Reads the entire line including spaces
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character added by fgets
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    // Step 1: Find the index of the last space to locate the surname
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space_idx = i;
            break;
        }
    }

    // If there are no spaces, the input is just a single word (surname only)
    if (last_space_idx == -1) {
        printf("Formatted Name: %s\n", name);
        return 0;
    }

    printf("Formatted Name: ");

    // Step 2: Print the initial of the first name
    if (len > 0 && name[0] != ' ') {
        printf("%c. ", toupper(name[0]));
    }

    // Step 3: Print the initials of any middle names
    for (int i = 1; i < last_space_idx; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // Step 4: Print the full surname from the last space onwards
    printf("%s\n", &name[last_space_idx + 1]);

    return 0;
}
