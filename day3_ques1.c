//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
 int main(){
 int c;
 printf("Enter temperature in Celius:");
 scanf("%d",&c);
 int f= (c* 1.8) + 32;;
 printf("Temperature in Fahrenheit: %d\n",f);
 return 0;
}


