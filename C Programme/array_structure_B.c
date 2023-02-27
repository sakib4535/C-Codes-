#include<stdio.h>
#include<string.h>

struct player {
    char name[32];
    char position[2]; // change to char array
    char team[32];
};

char *describe_position(struct player p) {
    switch(p.position[0]) { // use first character of position array
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

int main(){

    struct player jock;

    strcpy(jock.name, "Lamer Jackson");
    strcpy(jock.position, "Q"); // assign position as a string
    strcpy(jock.team, "Ravens");

    printf("\n\t%s, ranked #%d, is a %s, '%s'", jock.name,
    1, jock.team, describe_position(jock));

    return 0;
}
