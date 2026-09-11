//Count even and odd numbers in an array.
#include <stdio.h>
int main(){
int size, i;
int even_count = 0;
int odd_count = 0;

printf("Enter the size of the elements: ");
scanf("%d", &size);

int arr[size];
printf("Enter %d numbers:\n", size);
for(i = 0; i < size; i++){
   scanf("%d", &arr[i]);
}
for(i = 0; i < size ; i++) {
   if(arr[i] % 2 == 0) {
     even_count++;
   }
   else {
        odd_count++;
        }
  }
    printf("\nTotal Even numbers: %d", even_count);
    printf("\nTotal Odd numbers: %d\n", odd_count);

    return 0;
 }
