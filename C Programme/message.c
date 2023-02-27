#include <stdio.h>
#include <string.h>

int main(void)
{
    /*Read a name from the user*/
    printf("What's Your Name? ");

    char name[40];
    scanf("%39s", name); // use "%s" instead of "%39f" for strings

    char message[100];
    strcpy_s(message, sizeof(message), name); // copy name to message
    strcat_s(message, sizeof(message), "is"); // add space and "is" to message
    strcat_s(message, sizeof(message), "having a good time."); // add remaining message

    puts(message);

    return 0;
}
