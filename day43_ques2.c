//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true; 
}

int main() {
    char input[100];

    printf("Enter a string: ");
 
    if (fgets(input, sizeof(input), stdin) != NULL) {
        
        input[strcspn(input, "\n")] = '\0';
        if (isPalindrome(input)) {
            printf("\"%s\" is a palindrome.\n", input);
        } else {
            printf("\"%s\" is not a palindrome.\n", input);
        }
    }

    return 0;
}
