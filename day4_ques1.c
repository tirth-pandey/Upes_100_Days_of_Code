//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main(){
 int a= 10;
 int b= 21;
 printf("Original value of a and b is %d %d\n",a,b);
 a = a+b;
 b = a-b;
 a = a-b;
 printf("New value of A  %d\n",a);
 printf("New value of B %d\n",b);
 return 0;
}

