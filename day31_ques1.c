//Search for an element in an array using linear search.
#include <stdio.h>
int main(){
int array[100],size,search,i;
int found = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &size);
printf("Enter %d integers:\n", size);
for(i = 0;i < size; i++){
   scanf("%d", &array[i]);
}
printf("Enter the number to search for: ");
scanf("%d", &search);

for(i = 0;i < size;i++) {
    if(array[i] == search){
      printf("%d found at index position %d (Element %d).\n", search, i, i + 1);
            found = 1; 
            break;   
        }
    }
   
      if (found == 0) {
        printf("%d is not present in the array.\n", search);
    }
   return 0;
}
