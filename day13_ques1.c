/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>
int main(){
 int i;
 int j;
 char c;
 printf("Enter two integers and a mathematical operator");
 scanf("%d %d %c",&i,&j,&c);
 switch(c){ 
  case '+':
   printf("%d\n", i+j);
   break;
  case '-':
   printf("%d\n", i-j);
   break;
  case '*':
   printf("%d\n", i*j);
   break;
  case '/':
   printf("%d\n", i/j);
   break;
 }
return 0;
}

 
