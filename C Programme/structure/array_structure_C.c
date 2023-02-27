#include<stdio.h>
#include<string.h>

void main()
{
    struct player {
        char name[32];
        char position[32];
        char team[32];
    } jock[3] = {
        {"Mike Trout", "CF", "LA Angels"},
        {"Mookie Betts", "RF", "LA Dodgers"},
        {"Nolan Arenado", "3B", "CO Rockies"}  
    };

int index;

/*Interate the arrays*/
for(index=0; index<3; index++){
    printf("\n\t%s, ranked #%d, is a '%s' \'%s\'",
    jock[index].name, index+1, jock[index].team, jock[index].position);
    }
}