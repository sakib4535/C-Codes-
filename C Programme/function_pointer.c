#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person {
    char* name;
    int age;
    void(*greeting)();
} person;

/*Declaring the Function*/

void say_eng_greeting();
void say_spa_greeting();

int main(int argc, char *argv[]){
    void(*greeting)();

    if(argc > 1){
        greeting = !strcmp("spanish", argv[1]) ? &say_spa_greeting : &say_eng_greeting;
    } else {
        printf("Please pass a Greeting Argument");
        return 1;
    }

    person fred= {"Fred", 24, greeting};

    fred.greeting();

    return 0;
}

void say_eng_greeting(){
    printf("Hello\n");
}

void say_spa_greeting(){
    printf("Hola! \n"); 
}