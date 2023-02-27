#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    printf("Please Enter the Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // remove the newline character

    if(strcmp(password, "Hasnain") == 0)
    {
        printf("This is Correct password!");
    }
    else{
        printf("It is Wrong!");
    }
    return 0;
}
