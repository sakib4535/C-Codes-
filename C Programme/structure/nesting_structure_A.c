#include<stdio.h>
#include<string.h>

void main()
{
    struct stadium {
        int capacity;
        int built;
        char location[32];
        char name[32];
    };

    struct team {
        struct stadium oldHome;
        struct stadium home;
        char owner[32];
        char manager[32];
        char nickName[32];
    };

    struct team arsenal;

    arsenal.home.capacity = 60234;
    arsenal.home.built = 2004;
    strcpy(arsenal.oldHome.name, "Highbury");
    strcpy(arsenal.home.location, "Highbury");
    strcpy(arsenal.home.name, "Emirates"); 

    strcpy(arsenal.owner, "KSE INC");
    strcpy(arsenal.manager, "Mikel Arteta");
    strcpy(arsenal.nickName, "The Gunner");

    printf("\nNickname: %s, Manager: %s, Home: %s, Former Stadium: %s",
    arsenal.nickName, arsenal.manager, arsenal.home.name, arsenal.oldHome.name);
}