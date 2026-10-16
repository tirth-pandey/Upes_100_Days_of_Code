//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 256

void findLongestWord(char *input, char *longestWord) {
    int i = 0;
    int len = strlen(input);
    int wordStart = 0;
    int maxLen = 0;
    int currentWordStart = 0;
    int tempLen = 0;

    // Handle empty input
    if (len == 0) {
        longestWord[0] = '\0';
        return;
    }

    // Iterate through the string
    while (i <= len) {
        // Check if current character is a space or end of string
        if (i == len || isspace(input[i])) {
            // Calculate length of the word just ended
            tempLen = i - wordStart;
            
            // If this word is longer than the previous max, update
            if (tempLen > maxLen) {
                maxLen = tempLen;
                currentWordStart = wordStart;
            }
            
            // Move start pointer to the next character (skip space)
            wordStart = i + 1;
        }
        i++;
    }

    // Copy the longest word to the output buffer
    strncpy(longestWord, input + currentWordStart, maxLen);
    longestWord[maxLen] = '\0';
}

int main() {
    char input[MAX_LENGTH];
    char longestWord[MAX_LENGTH];

    printf("Enter a sentence: ");
    // Use fgets to safely read input including spaces
    if (fgets(input, MAX_LENGTH, stdin) != NULL) {
        // Remove trailing newline if present
        input[strcspn(input, "\n")] = 0;
        
        findLongestWord(input, longestWord);
        
        if (strlen(longestWord) > 0) {
            printf("Longest word: %s (Length: %ld)\n", longestWord, strlen(longestWord));
        } else {
            printf("No words found.\n");
        }
    }

    return 0;
}

