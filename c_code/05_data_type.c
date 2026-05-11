#include <stdio.h>

int main(void)
{
    int age = 25;
    char grade = 'A';
    float weight = 68.5000000f;
    double height = 172.50;
    
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Weight: %.2f\n", weight);
    printf("Height: %f\n", height);
    return 0;
}