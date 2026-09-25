//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[150];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    // fgets is the safest way to read a full line of text with spaces
    fgets(str, sizeof(str), stdin); 

    // Loop through each character until the end of the string '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase to easily check it
        char ch = tolower(str[i]);

        // Check if the character is a letter between 'a' and 'z'
        if (ch >= 'a' && ch <= 'z') {
            // If it matches any vowel, increment the vowel count
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } 
            // If it's a letter but not a vowel, it must be a consonant
            else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
