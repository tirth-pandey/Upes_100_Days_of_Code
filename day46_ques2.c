//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    
    int visited[26] = {0}; 
    int found = 0;

    printf("Enter a string of lowercase alphabets: ");
    
    scanf("%s", str); 

    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (visited[index] == 1) {
                printf("The first repeating lowercase alphabet is: %c\n", str[i]);
                found = 1;
                break; 
            }
            visited[index] = 1;
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
