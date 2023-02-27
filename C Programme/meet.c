#include<stdio.h>

int main(void)
{
    printf("What's Your Name? ");

    char name[40];
    scanf("%39s", name);

    printf("\n");
    printf("Nice to Meet You, %s\n", name);

    return 0;
}
