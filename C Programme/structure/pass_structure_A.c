#include<stdio.h>
#include<string.h>

char *describe_position(char position) {
    switch(position) {
        case 'Q':
            return("Quarterback");
        case 'R':
            return("Running Back");
        case 'F':
            return("Full Back");
        case 'O':
            return("Offensive Line");
        case 'W':
            return("Wide Receiver");
        default:
            return("Punter");
    }
}

void main()
{
    struct player {
        char name[32];
        char position;
        char team[32];
    } jock;

    strcpy(jock.name, "Lamer Jackson");
    jock.position = 'Q';
    strcpy(jock.team, "Ravens");

    printf("\n\t%s, ranked #%d, is a %s, '%s'", jock.name,
    1, jock.team, describe_position(jock.position));
}