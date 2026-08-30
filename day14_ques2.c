//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
 int main(){
 int n;
 long product = 1;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 for (int i=1;i<=n;i++){
  if(i%2==0){
    product*=i;
   
    }
    }
  printf("%ld\n",product);
  return 0;
  }
 
