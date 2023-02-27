#include<stdio.h>
#include<stdlib.h>

int WinMain()
{
    int password;
    int FakeInput;

    printf("\n\nPlease Type Your Password...");
    scanf("%d", &password);

    if (password == "bbb@##jhbn")
    {
        printf("The Password is Correct Mr. Sakib");
    }
    else
    {
        printf("The Password is Wrong *__*");

        if(password == 2005)
        {
            printf("\nThe Password Is Correct");
        }
        else
        {
            printf("\nGot You Wrong Person!");
        }
    }
    return 0;
}
