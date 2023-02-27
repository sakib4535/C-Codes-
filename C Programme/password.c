#include<stdio.h>
#include<string.h>

int main()
{
    char password[20];
    printf("Please Enter the Password: ");
    scanf("%19s", password);

    if(strcmp(password, "Hasnain") == 0)
    {
        printf("This is Correct password!");
    }
    else{
        printf("It is Wrong!");
    }
    return 0;
}