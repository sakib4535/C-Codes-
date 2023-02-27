#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "demo5.c"
const static char companyName[100] = "Hasnain Imtiaz Sakib";

int main(){
    static int nEmployees;

    printf("welcome to the Employee of %s \n", companyName);
    printf("Please Provide the number of employees you want to import: ");

    scanf("%d", &nEmployees);

    readEmployees(nEmployees);
    printEmployees(nEmployees);
}

