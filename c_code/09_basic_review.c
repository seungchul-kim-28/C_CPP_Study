#include <stdio.h>

int main(void)
{
    char initial = 'K';
    int age = 25;
    double height = 172.50;

    int a = 10;
    int b = 3;

    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("10 + 3 = %d\n", a + b);
    printf("10 - 3 = %d\n", a - b);
    printf("10 * 3 = %d\n", a * b);
    printf("Age >= 20: %d\n", age >= 20);
    printf("Adult and tall: %d\n", age >= 20 && height >= 170);
    

    return 0;
}