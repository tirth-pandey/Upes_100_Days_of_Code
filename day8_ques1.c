//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch); 
   
    if(ch >= 'A' && ch <= 'Z'){
     printf("Is an uppercase alphabet.\n");
    }
    else if(ch >= 'a' && ch <= 'z'){
      printf("Is a lowercase alphabet.\n");
    }
    else if(ch >= '0' && ch <= '9'){
      printf("Is a digit. %c",ch);
    } 
    else{
      printf("Is a special character.\n");
    }
    return 0;
 }

