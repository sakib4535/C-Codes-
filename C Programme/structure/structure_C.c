#include<stdio.h>
#include<string.h>

void main()
{
    struct player {
        int age;
        float height;
        char position[8];
    };

    struct player lebron;
    struct player steph;

    lebron.age = 35;
    lebron.height = 2.09;
    strcpy(lebron.position, "PF");

    printf("\nLebron James\nAGe: %d, Height: %.2f, Position: %s", lebron.age, lebron.height,
    strcmp(lebron.position, "PF")== 0 ? "Power Forward" : "NA");
}