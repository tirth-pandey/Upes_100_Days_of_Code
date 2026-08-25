//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
 
 int main(){
 double side1, side2, side3;
 printf("Enter the length of the three sides: ");
 scanf("%lf %lf %lf",&side1 , &side2, &side3);
 if(side1 <=0 || side2 <=0 || side3 <= 0){
   printf("Error: Lenght of side should be greater than zero. /n");
   }
  if((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)){
    
    if(side1 == side2 && side2 == side3){
      printf("The triangle is Equilateral. \n");
     }
    else if (side1 == side2 || side1 == side3 ||side2 == side3){
      printf("The triangle is Isosceles. \n");
     }
    else {
      printf("The triangle is Scalene. \n");
     }
   }
  else {
       printf("The given side length do not form a valid triangle. \n");
   }
  return 0;
 }

