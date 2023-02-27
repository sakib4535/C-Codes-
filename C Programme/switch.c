#include <stdio.h>

int main(void)
{
    int number;
    printf("Please Enter an Integer number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("You entered One\n");
            break;
        case 10:
            printf("You entered ten\n");
            break;
        case 64:
            printf("You entered 64\n");
            break;
        default:
            printf("You entered a number different than 1, 10, or 64\n");
            break;
    }
    return 0;
}
