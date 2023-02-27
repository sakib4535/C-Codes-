#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int metric_count = 0;

/*functionm/structure declaration*/

typedef struct Metric {
    int sequence_number;
    float power_used;
} Metric;

/*Define our CoffeMachine type*/

typedef struct CoffeMachine {
    int(*)(int, struct CoffeMachine*);
    Metric **metrics;
    int pour_duration;
} CoffeMachine;


// CoffeMachine Coreate/Destroy API
int init_coffee_machine(CoffeMachine**);
void cleanup_machine(CoffeeMachine*);

//Different Pourhandler function declaration
int pour_decaf(int, CoffeMachine**);
int pour_classic(int, CoffeMachine*);
int pour_rich(int, CoffeMachine*);
