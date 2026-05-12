#include <stdio.h>

int main(void)
{
    char initial = 'K';
    int age = 19;
    double height = 172.5;
    int score = 73;
    int a = 10;
    int b = 3;
    int menu = 4;
    
    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("10 + 3 = %d\n", a + b);
    printf("10 - 3 = %d\n", a - b);
    printf("10 * 3 = %d\n", a * b);
    printf("10 / 3 = %d\n", a / b);
    printf("10 %% 3 = %d\n", a % b);
    
    printf("Age >= 20: %d\n", age >= 20);
    printf("Score >= 60: %d\n", score >= 60);

    printf("Adult and tall: %d\n", age >= 20 && height >= 170);
    printf("Pass of adult: %d\n", score >= 60 || age >= 20);
    printf("Not adult check: %d\n", !(age >= 20));

    if (score >= 90)
    {
        printf("Grade: A\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B\n");
    }
    else if (score >= 70)
    {
        printf("Grade: C\n");
    }
    else if (score >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    if (score >= 60)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    if (age >= 20)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Not adult\n");
    }

    switch (menu)
    {
        case 1:
            printf("Menu: Start\n");
            break;

        case 2:
            printf("Menu: Save\n");
            break;

        case 3:
            printf("Menu: Exit\n");
            break;

        default:
            printf("Menu: Invalid\n");
            break;
    }

    return 0;
}