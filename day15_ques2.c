#include<stdio.h>
int main(){
 int num, remainder;
 int reversed_num;
 printf("Enter the number you want to reverse: ");
 scanf("%d",&num);
 while(num!=0){
  remainder = num % 10;
  reversed_num = reversed_num*10 + remainder;
  num/=10;
 }
 printf("Reversed number: %d\n",reversed_num);
 return 0;
}

