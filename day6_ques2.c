//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main (){
int num;
 printf("Enter an integer:");
 scanf("%d",&num);
 if (num>=0){
 if(num==0){
 printf("Number is: %d\n",num);
}
 else{
 printf("Number is positive: %d\n",num);
 }
  }
 else{
 printf("Number is negative: %d\n",num);
 }
 return 0;
}

