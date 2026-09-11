#include <stdio.h>

// Basic Arithmetic Calculator
int main()
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int multiple = num1 * num2;
    int division = num1 / num2;

    printf("Sum = %d\n",sum);
    printf("Difference : %d\n",difference);
    printf("Multiple : %d\n",multiple);
    printf("Division : %d",division);

    return 0;
}