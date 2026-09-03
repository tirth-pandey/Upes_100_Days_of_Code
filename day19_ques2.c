//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
 int num, remainder, sum = 0;
 printf("Enter a number: ");
 scanf("%d",&num);
 while(num != 0 ){
   remainder = num % 10;
   sum = sum + remainder;
   num = num/10;
  }
 printf("Sum of the digits: %d\n",sum);
 return 0; 
}

