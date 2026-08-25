//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
 int main(){
 int a;
 int b;
 printf("Enter two numbers: ");
 scanf("%d %d",&a,&b);
 int sum = a+b;
 int diff = a-b;
 int product= a*b;
 int quot = a/b;
 printf("Sum:  %d\n",sum);
printf("Difference: %d\n",diff);
printf("Product: %d\n",product);
printf("Quotient: %d\n",quot);
 return 0;
}
