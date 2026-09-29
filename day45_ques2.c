//Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        str[strcspn(str, "\n")] = '\0';

   
        for (int i = 0; str[i] != '\0'; i++) {
    
            unsigned char c = str[i]; 
            
            if (islower(c)) {
                str[i] = toupper(c);
            } else if (isupper(c)) {
                str[i] = tolower(c); 
            }
            
        }

        printf("Toggled string: %s\n", str);
    }

    return 0;
}
