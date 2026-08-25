//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
 int main(){
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 int sum = (n+1)*n/2;
 printf("Sum: %d\n",sum);
 return 0 ;
}

