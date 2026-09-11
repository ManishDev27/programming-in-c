#include <stdio.h>

// Simple Interest Calculator
int main()
{
    int principal, rate, time;

    printf("Enter Principal Amount : ");
    scanf("%d",&principal);
    printf("Enter rate of interest : ");
    scanf("%d",&rate);
    printf("Enter time : ");
    scanf("%d",&time);

    int prt = principal * rate * time; 
    int simpleInterest = prt / 100;

    printf("Simple Interest : %d",simpleInterest);

    return 0;
}