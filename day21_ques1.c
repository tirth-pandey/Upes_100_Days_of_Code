//Write a program to swap the first and last digit of a number.
#include <stdio.h>
 int main(){
 int num, originalNum, swappedNum;
 int firstDigit, lastDigit;
 int multiplier = 1;
 
 printf("Enter any number: ");
 scanf("%d", &num);
 
 originalNum = num;
 lastDigit = num % 10;
 while(num >= 10){
    num = num / 10;
    multiplier *= 10;
}
 firstDigit = num;
 swappedNum = lastDigit * multiplier;
 swappedNum += (originalNum % multiplier) / 10 * 10;
 swappedNum += firstDigit;

 printf("Original number = %d\n", originalNum);
 printf("Number after swapping first and last digit: %d\n", swappedNum);
 return 0;
}

 
