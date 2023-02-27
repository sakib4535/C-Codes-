#include <stdio.h>

int main(){
    printf("CHAT GPT -  Open AI");
    printf("Please Enter The Temperature (in Celcius) in Your Location(Bangladesh): ");

    float TemperatureinF;
    scanf("%f", &TemperatureinF);
    float TemperatureinC = (TemperatureinF - 32.0) * 5.0 / 9.0;
    printf("Here is the Temperature in Your Local Area"); 

    return 0;
}