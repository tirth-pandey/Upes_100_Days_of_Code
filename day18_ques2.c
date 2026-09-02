//Write a program to find the HCF of two numbers.
#include <stdio.h>
 int main(){

   int num1, num2, temp;
   printf("Enter two integers: ");
   scanf("%d %d",&num1, &num2);
   int a = num1;
    int b = num2;
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2; // % gets the remainder of the division
        num1 = temp;
    }

    // After the loop ends, num1 will hold the HCF
    printf("The HCF of %d and %d is: %d\n", a, b, num1);

    return 0;
}  
