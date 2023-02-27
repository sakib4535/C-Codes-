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
    } arsenal = {
        {38419, 1913, "Highbury", "Highbury"},  // struct oldhome
        {60245, 2004, "Highbury", "Emirates"},  // struct home
        "KSE INC", "Mikel Arteta", "The Gunners" // struct team
    };

    printf("\nNickname: %s, Manager: %s, Home: %s, Former Stadium: %s",
    arsenal.nickName, arsenal.manager, arsenal.home.name, arsenal.oldHome.name);
}