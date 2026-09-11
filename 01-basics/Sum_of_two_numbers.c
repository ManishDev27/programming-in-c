#include <stdio.h>

// Sum of Two Numbers
int main()
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    int sum = num1 + num2;

    printf("Sum of numbers : %d",sum);

    return 0;
}