//Search in a sorted array using binary search.
#include <stdio.h>
int main(){
int n, last, first, middle, search;
int array[100];
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d integers (In ascending order):\n", n);
for(int c = 0; c < n; c++){
   scanf("%d",&array[c]);
  }
 printf("Enter value to find: ");
 scanf("%d", &search);
 
 first = 0;
 last = n-1;
 middle = first + (last - first) / 2;
 while (first <= last) {
     if (array[middle] < search) {
        first = middle + 1;
   }
   else if(array[middle] == search) {
          printf("%d found at index %d (position %d).\n", search, middle, middle + 1);
          break;
          }
  else {
        last = middle - 1;
       }
     middle = first + (last - first) / 2;
  }
  if (first > last) {
     printf("Not found! %d is not present in the list. \n", search);
    }
   return 0;
 }

