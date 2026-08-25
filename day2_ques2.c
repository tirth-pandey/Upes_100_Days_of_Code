//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define pi 3.1415

 int main(){
 int r;
 printf("Enter radius:"); 
 scanf("%d",&r);
 int peri=2*pi*r;
 int area=pi*r*r;
 printf("Perimeter: %d\n",peri);
 printf("Area: %d\n",area);
 return 0;
}


