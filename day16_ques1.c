//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
int decimal,binary[100], rem, i=0;
printf("Enter the decimal no.:");
scanf("%d",&decimal);
if(decimal==0){
printf("Binary Equivalent is 0");
}
else {
 while(decimal>0)
 {
  rem = decimal%2;
  binary [i]=rem;
  decimal= decimal/2;
  i++;
  }
  printf("Binary is ");
  for(int k=i-1;k>=0;k--)
  {
  printf("%d",binary[k]);
  }
  }
  printf("\n");
  return 0;
  }
  
