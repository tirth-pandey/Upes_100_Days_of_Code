//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation (different lengths)\n");
        return 0;
    }

    // temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are NOT rotations of each other\n");

    return 0;
}
