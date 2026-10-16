//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

// Function returns 1 if anagrams, 0 otherwise
int checkAnagram(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If lengths differ, they cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Frequency array for ASCII characters
    int count[256] = {0};
    int i;

    // Increment count for s1, decrement for s2
    for (i = 0; i < len1; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    // If all counts are zero, strings are anagrams
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%99s", str1);
    
    printf("Enter second string: ");
    scanf("%99s", str2);

    // Check and print result
    if (checkAnagram(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}
