#include <stdio.h>

int main(void)
{
    int score = 85;
    int menu = 1;

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

    switch (menu)
    {
        case 1:
            printf("Menu: Start\n");
            break;
        
        case 2:
            printf("Menu: Settings\n");
            break;

        case 3:
            printf("Menu: Exit\n");
            break;

        default:
            printf("Menu: Invalid");
            break;
    }

    return 0;
}