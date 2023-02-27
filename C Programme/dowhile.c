#include<stdio.h>

int main(void)
{
    char answer[10];

    int i = 0;

    do 
    {
        i++;
        printf("Iteration %d \n", i);

        printf("Do you want to continue? [Enter No to quit]");
        scanf("%9s", answer);
    } while(strcmp(answer, "NO") != 0);

    return 0;
}