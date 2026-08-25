//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
 int main(){

  int totalSec, hours, min, sec;
  printf("Enter time in seconds: ");
  scanf("%d",&totalSec);
  hours=totalSec/3600;
  min=(totalSec%3600)/60;
  sec=totalSec%60;
  printf("Converted time  %02d:%02d:%02d\n",hours,min,sec);
  return 0;
 }

