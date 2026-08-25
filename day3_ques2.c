//Write a program to swap two numbers using a third variable.
#include <stdio.h>
 int main(){
 int a=5;
 int b=7;
 int c=0 ;
 printf("Original value of a and b is %d %d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\n New value of a is  %d\n",a);
 printf("New value of b is %d\n",b);
 return 0;
}

