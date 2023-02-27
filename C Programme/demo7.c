#include<stdio.h>
#include<stdbool.h>

int arithmaticOperation(int val1, int val2, char operator);

int main(){

    const int nEmployees = 10;
    int salary[10] = {65788, 42324, 64644, 32324, 64645, 46454, 43432, 65767, 87878, 76543};
    int bonus = 1000;
    float salaryIncrease = 1.15; //15%

    for(int i = 0; i < nEmployees; i++)
    {
        int currentSalary = salary[i];
        int finalSalary = arithmaticOperation(currentSalary, bonus, '+');

        if(finalSalary < 30000)
        {
            finalSalary *= salaryIncrease;
            printf("Original Salary: %d | Final Salary:%d (Raised)\n", currentSalary, finalSalary);
        }
        else
        {
            printf("Original Salary: %d | Final salary: %d \n", currentSalary, finalSalary);
        }
    }
}

int arithmaticOperation(int val1, int val2, char operator){

    int result = 0;
    switch(operator)
    {
    case '+':
        result = val1 + val2;
        break;
    case '-':
        result = val1 - val2;
        break;
    case '*':
        result = val1 * val2;
        break;
    case '/':
        result = val1 / val2;
        break;
    case '%':
        result = val1 % val2;
        break;
    default:
        break;
    }

    return result;
    
}
