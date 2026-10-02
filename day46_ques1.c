//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
   
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    char result[100];
    int j = 0;

    printf("Enter a string: ");
    
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; 

    printf("String after removing vowels: %s\n", result);

    return 0;
}
