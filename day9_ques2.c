//Write a program that accepts a percentage (0-100) and assigns a grade.
 #include <stdio.h>
 int main(){
   float percent;
   printf("Enter the percentage (0-100): ");
   scanf("%f", &percent);
   if(percent < 0.0 || percent > 100.0) {
        printf("Error: Percentage must be between 0 and 100.\n");
    } 
    else if (percent>= 90.0) {
        printf("Grade: A\n");
    } 
    else if (percent>= 80.0) {
        printf("Grade: B\n");
    }
    else if (percent>= 70.0) {
        printf("Grade: C\n");
    }
    else if (percent>= 60.0) {
        printf("Grade: D\n");
    }  
    else {
        printf("Grade: F\n");
    }

    return 0;
 }

