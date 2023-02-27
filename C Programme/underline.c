#include<stdio.h>
#include<string.h>

int main(void)
{
    /*String to Underline*/
    char str[] = "Welcome to Base, Sakib!";
    printf("%s \n", str);

    /*Print the Underline*/
    int len = strlen(str);
    for(int i = 0; i < len ; i++)
    {
        putchar('-');
    }
    putchar('\n');
}