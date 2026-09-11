#include <stdio.h>

// Celcius to Fahrenheit converter Program
int main()
{
    int tempC;

    printf("Enter Temperature in Celcius : ");
    scanf("%d",&tempC);

    float tempF = (tempC * 9.0/5) + 32;

    printf("Temperature in Fahrenheit : %.1f",tempF);

    return 0;
}