#include <stdio.h>


int main(void)
{
    int menu = 2;

    switch (menu)
    {
        case 1:
            printf("Start\n");
            break;

        case 2:
            printf("Settings\n");
            break;
        
        case 3:
            printf("Exit\n");
            break;
        
        default:
            printf("Invalid menu\n");
            break;
        
    }
    
    return 0;
}