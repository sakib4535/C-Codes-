#include<stdio.h>
#include<string.h>

int main(void) 
{
    struct player {
        int age;
        float height;
        char position[8];
    } lebron, steph, kevin;

    /*struct player {
    int age;
    float height;
    char position[8];
} lebron = {35, 2.10, "PF"},
  steph = {32, 2.11, "PG"},
  kevin = {45, 2.19, "SF"};
*/

    lebron.age = 35;
    lebron.height = 2.10;
    strcpy(lebron.position, "PF");

    steph.age = 32;
    steph.height = 2.11;
    strcpy(steph.position, "PG");

    kevin.age = 45;
    kevin.height = 2.19;
    strcpy(kevin.position, "SF");

    printf("\n Lebron James \nAge: %d, Height: %.2f, Position: %s", lebron.age, lebron.height,
        strcmp(lebron.position, "PF") == 0 ? "Power Forward" : "NA");

    printf("\n Steph Curry \nAge: %d, Height: %.2f, Position: %s", steph.age, steph.height,
        strcmp(steph.position, "PG") == 0 ? "Point Guard" : "NA");
    printf("\n Kevin Durrant\n Age: %d, Height: %.2f, Position: %s", kevin.age, kevin.height,
        strcmp(kevin.position, "SF") == 0 ? "Small Forward" : "NA");
}