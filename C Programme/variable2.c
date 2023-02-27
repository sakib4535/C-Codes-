#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>

struct employee
{
    uint8_t employeeNro;
    char name[200];
    float salary;
    int age :7;
    struct tm dob;
};

const char companyName[100] = "Singularsight";

void readEmployees(struct employee * employees, int nEmployees);
void printEmployees(struct employee employees[100], int nEmployees);

int main()
{
    struct employee employees[100];
    int nEmployees;

    printf("Welcome to the Employee System %s\n", companyName);
    printf("Please Provide the number of employees you want to import:");

    scanf("%d", &nEmployees);

    readEmployees(employees, nEmployees);
    printEmployees(employees, nEmployees);
    exit(0);
}

void readEmployees(struct employee *employees, int nEmployees){
    for(int i = 0; i <nEmployees; i++){
        printf("Processing employee %d\n", i+1);
        printf("Please Provide the employee name, number, salary and DOB: ");

        char empName[200];
        int dayDob, monthDob, YearDOb;
        scanf("%s %d %f %d/%d/%d", empName, &employees[i].employeeNro, &employees[i].salary, &dayDob, &monthDob, &YearDOb);

        strcpy(employees[i].name, empName);

        struct tm dobObj;
        dobObj.tm_mday = dayDob;
        dobObj.tm_mon = monthDob-1;
        dobObj.tm_year = YearDOb-1900;

        time_t currTimeSec;
        struct tm * currTime = localtime(&currTimeSec);
        if(currTime -> tm_mon < dobObj.tm_mon || 
        (currTime -> tm_mon == dobObj.tm_mon && currTime -> tm_mday < dobObj.tm_mday)){
            employees[i].age++;
        }

        employees[i].dob = dobObj;

    }
}

void printEmployees(struct employee employees[100], int nEmployees){

    printf("\n");
    setlocale(LC_ALL, "");
    struct lconv * currentLocale = localeconv();

    for(int i = 0; i < nEmployees; i++)
    {
        struct employee emp = employees[i];
        printf("Name: %s, Employee Nro: %d, Salary: %.2f %s, DOB: %d/%d/%d, Age: %d\n",
        emp.name, emp.employeeNro, emp.salary, currentLocale -> int_curr_symbol, emp.dob.tm_mday, emp.dob.tm_mon+1, emp.dob.tm_year+1900, emp.age);
    } 
}