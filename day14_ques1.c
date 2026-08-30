//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
 int main(){
 int a;
 int i;
 int sum = 0;
 printf("Enter a number");
 scanf("%d",&a);
 for(i=1;i<=a;i++){
 sum+=(2*i-1);
 }
 printf("%d\n",sum);
 return 0;
}

