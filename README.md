#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;

    // Ask user to input all valus at once
    printf("Samitanan 18  1.62 A: ");
    scanf("%s %d %f", name age height); //Read multiple inputs at once

    // Display the entered values
    printf("You entered:\n");
    printf("Name = %s\n", name);
    printf("Age = %d years\n",age);
    printf("Height = %.2f meters\n", height);

    return 0;
  }
    
