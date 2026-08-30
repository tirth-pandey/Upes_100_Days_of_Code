//Write a program to calculate electricity bill based on units consumed with these rates: 
/*First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
int main(){
int u;
printf("Enter no of Units: ");
scanf("%d",&u);
if(u<=100){
  printf("Bill: ₹%d\n",u*5);
}
else if(u<=200 && u>100){
  printf("Bill: ₹%d\n", 500+(u-100)*7);
 }
else if(u<=300 && u>200){
  printf("Bill: ₹%d\n",1200+(u-200)*10);
 }
else{
 printf("Bill: ₹%d\n ",2200+(u-300)*12);
 }
 return 0;
}

