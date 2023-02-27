#include<stdio.h>

float minimumBasicRateBand = 0;
float maximumBasicRateBand = 12000;
float basicRate = 0.1;

float minimumHigherRateBand = 12000;
float maximumHigherRateBand = 150000;
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

    printf("Please SPecify your salary: ");
    scanf("%f", &userSalary);

    //Calculate net salary and taxes - Basic Rate
    if(userSalary >= minimumBasicRateBand && userSalary < maximumBasicRateBand){
        taxRateApplied = basicRate;
        netSalary = userSalary * (1-basicRate);
        totalTaxesPaid = userSalary * basicRate;
    }

    //Calculate taxes and net salary - Higher Rate
    if(userSalary >= minimumHigherRateBand && userSalary < maximumHigherRateBand){
        taxRateApplied = higherRate;
        netSalary = userSalary * (1-higherRate);
        totalTaxesPaid = userSalary * higherRate;
    } 

    //Calculate taxes and net salary - Max Rate
    if(userSalary >= minimumMaxRateBand && userSalary < maximumMaxRateBand){
        taxRateApplied = maxRate;
        netSalary = userSalary * (1-maxRate);
        totalTaxesPaid = userSalary * maxRate;
    }

    // Print net salary and paid taxes

    printf("Your net salary is %f\n", netSalary);
    printf("Thel total  of taxes paid is %f\n", totalTaxesPaid);
    printf("The Tax Rate applied is %d%%", (int)(taxrateApplied*100));


}