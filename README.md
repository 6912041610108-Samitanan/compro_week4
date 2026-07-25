#include <studio.h>

int main() {
    char name[30];
    float age;
    char height;

    // Ask user to input all valus at once
    printf("Samitanan, 18, and 1.62 A: ");
    scanf("%d %f %c", &name, &age, &height); //Read multiple inputs at once

    // Display the entered values
    printf("You entered:\n");
    printf("Name = %d\n", name);
    printf("Age = %f years\n",age);
    printf("Height = %.2c meters\n", height);

    return 0;
  }
    
