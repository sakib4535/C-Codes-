#include<stdio.h>

float minimumBasicRateBand = 0;
float maximumBasicRateBand = 12000;
float basicRate = 0.1;

float minimumHigherRateBand = 12000;
float maximumHigherRateBand = 50000;
float higherRate = 0.4;

float minimumMaxRateBand = 50000;
float maximumMaxRateBand = 150000;
float maxRate = 0.4;

int main(){
    // Read Salary

    float userSalary;
    float taxRateApplied;
    float netSalary;
    float totalTaxesPaid;

    // Error handling for invalid input
    while(1) {
        printf("Please specify your salary: ");
        if (scanf("%f", &userSalary) == 1) {
            break;
        }
        printf("Invalid input. Please enter a number.\n");
        scanf("%*[^\n]");  // Clear input buffer
    }

    // Calculate net salary and taxes - Basic Rate
    if(userSalary >= minimumBasicRateBand && userSalary < maximumBasicRateBand){
        taxRateApplied = basicRate;
        netSalary = userSalary * (1-basicRate);
        totalTaxesPaid = userSalary * basicRate;
    }

    // Calculate taxes and net salary - Higher Rate
    if(userSalary >= minimumHigherRateBand && userSalary < maximumHigherRateBand){
        taxRateApplied = higherRate;
        netSalary = userSalary * (1-higherRate);
        totalTaxesPaid = userSalary * higherRate;
    } 

    // Calculate taxes and net salary - Max Rate
    if(userSalary >= minimumMaxRateBand && userSalary < maximumMaxRateBand){
        taxRateApplied = maxRate;
        netSalary = userSalary * (1-maxRate);
        totalTaxesPaid = userSalary * maxRate;
    }

    // Handle salary below minimum basic rate band
    if(userSalary < minimumBasicRateBand){
        taxRateApplied = 0;
        netSalary = userSalary;
        totalTaxesPaid = 0;
    }

    // Handle salary above maximum max rate band
    if(userSalary >= maximumMaxRateBand){
        taxRateApplied = maxRate;
        netSalary = userSalary * (1-maxRate);
        totalTaxesPaid = userSalary * maxRate;
    }

    // Print net salary and paid taxes

    printf("Your net salary is %f\n",
