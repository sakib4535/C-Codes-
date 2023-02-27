#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

typedef struct {
    uint8_t employeeNro;
    char name[200];
    float salary;
    int age;
    struct tm dob;
} employee;

employee employeeArray[100];

void readEmployees(int nEmployees) {
    employee * employees = employeeArray;

    for (int i = 0; i < nEmployees; i++) {
        printf("Processing Employee %d\n", i+1);
        printf("Please Provide the Name, Number, Salary, DOB (dd/mm/yyyy): ");

        char empName[200];
        int dayDob, monDob, yearDob;
        scanf("%s %d %f %d/%d/%d", empName, &employees[i].employeeNro, &employees[i].salary, &dayDob, &monDob, &yearDob);

        strcpy(employees[i].name, empName);

        struct tm dobObj;
        dobObj.tm_yday = dayDob;
        dobObj.tm_mon = monDob-1;
        dobObj.tm_year = yearDob-1900;

        time_t currentTimeSec;
        time(&currentTimeSec);
        struct tm * currTime = localtime(&currentTimeSec);

        employees[i].age = currTime->tm_year + 1900 - dobObj.tm_year;

        if (currTime->tm_mon < dobObj.tm_mon || (currTime->tm_mon == dobObj.tm_mon && currTime->tm_mday < dobObj.tm_mday)) {
            employees[i].age--;
        }

        employees[i].dob = dobObj;
    }
}

void printEmployees(int nEmployees) {
    printf("\n");
    setlocale(LC_ALL, "");
    struct lconv * currentLocale = localeconv();

    printf("Printing Employees List\n");
    for (int i = 0; i < nEmployees; i++){
        employee emp = employeeArray[i];
        printf("Name: %s Employee NRO: %d, Salary: %.2f %s, DOB: %02");
    }
