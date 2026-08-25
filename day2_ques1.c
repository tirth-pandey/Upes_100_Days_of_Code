//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
 int main(){
 int a;
 int b;
 printf("Enter length and breadth: ");
 scanf("%d %d",&a, &b);
 int peri = 2*(a+b);
 int area = a*b;
 printf("Perimeter: %d\n",peri);
 printf("Area: %d\n",area);
  return 0;
}

