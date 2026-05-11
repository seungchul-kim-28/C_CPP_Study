#include <stdio.h>

int main(void)
{
    int age = 20;
    int has_ticket = 1;
    
    printf("Can enter: %d\n", age >= 18 && has_ticket == 1);
    printf("Needs Check: %d\n", age < 18 || has_ticket == 1);
    printf("Is not adult: %d\n", !(age >= 18));

    return 0;
}