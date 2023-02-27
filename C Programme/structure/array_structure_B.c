#include<stdio.h>
#include<string.h>

void main()
{
    struct player {
        char name[32];
        char position[32];
        char team[32];
    } jock[3];

int index;


strcpy(jock[0].name, "Mike Trout");
strcpy(jock[0].position, "CF");
strcpy(jock[0].team, "LA Angels");

strcpy(jock[1].name, "Mookie Betts");
strcpy(jock[1].position, "RF");
strcpy(jock[1].team, "LA Dodgers");

strcpy(jock[2].name, "Noaln Arenado");
strcpy(jock[2].position, "3B");
strcpy(jock[2].team, "CO Rockies");

/*Interate the arrays*/
for(index=0; index<3; index++){
    printf("\n\t%s, ranked #%d, is a '%s' \'%s\'",
    jock[index].name, index+1, jock[index].team, jock[index].position);
    }
}