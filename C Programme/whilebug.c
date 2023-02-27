#include<stdio.h>

int main(void)
{
    int i = 64;

    while(i = 64) /*Here we used = for assignment instead of == using this which comes with the equal to*/
    {
        printf("Please Enter a Number: ");
        scanf("%d", &i);
    }

    printf("You Entered: %d \n\n", i);

    return 0;
}