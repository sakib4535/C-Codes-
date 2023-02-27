#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<stdint.h>
#include<stdbool.h>
#include<time.h>

typedef struct {
    uint8_t employeeNro;
    char name[200];
    float salary;
    int age :7;
    struct tm dob;
} employee;

employee employeesArray[100];

void readEmployees(int nEmployees){
    employee * employees = employeesArray;

    for(int i = 0; i < nEmployees; i++){
        printf("processing Employees %d \n", i+1);
        printf("Please Provide te Name, number, salary, DOB(dd/mm/yyyyy): ");

        char empName[200];
        int dayDob, monthDob, yearDob;
        scanf("%s %d %f %d%d^%d", empName, &employees[i].employeeNro, &employees[i].salary, &dayDob, &monthDob, &yearDob);

        strcpy(employees[i].name, empName);

        struct tm dobObj;
        dobObj.tm_mday =dayDob;
        dobObj.tm_month = monthDob;
        dobObj.tm_year = yearDob-1900;

        time_t currentTimeSec;
        time(&currentTimeSec);
        struct tm * currTime = localtime(&currentTimeSec);

        employee[i].age = currTime -> tm_year - dobObj.tm_year;


        if(currTime -> tm_mon < dobObj.tm_mon || (currTime -> tm_mon == dobObj.tm_mon && currtime -> tm_mday < dobObj tm_mday)){
            employees[i].age--;
        }

        employees[i].dob = dobObj;
    }
}

void printEmployees(int nEmployees){
    printf("\n");
    setlocale(LC_ALL, "");
    struct lconv * currentLocale = localeconv();

    printf("printing employees list \n");
    for(int i = 0; i < nEmployees; i++)
    {
        employee emp = employeesArray[i];
        printf("Name: %s Employee NRO:%d, Salary:%.2f%s, DOB:%02d/%02d/%d, Age:%d\n",
        emp.name, emp.employeeNro, emp.salary, currentLocale -> int_curr_symbol,
        emp.dob.tm_yday, emp.dob.tm_mon, emp.dob.tm_year+1900, emp.age);
    }
}

