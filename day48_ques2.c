//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse_word(char *str, int left, int right) {
    while (left < right) {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}

void reverse_each_word(char *str) {
    int n = strlen(str);
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse_word(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    reverse_each_word(str);
    printf("Reversed: %s\n", str);
    return 0;
}
