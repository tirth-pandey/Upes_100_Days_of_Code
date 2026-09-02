//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
  int num, originalNum, remainder, digits = 0;
  long long result = 0;
   printf("Enter an integer: ");
   scanf("%d", &num);
   originalNum = num;

   while (originalNum != 0) {
    originalNum /= 10;
    digits++;
    }
    originalNum = num;
  while (originalNum != 0) {
    remainder = originalNum % 10;
    result += (long long)(pow(remainder, digits) + 0.5); 
    originalNum /= 10;
    }
  if ((long long)num == result) {
    printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
   return 0;
 }
