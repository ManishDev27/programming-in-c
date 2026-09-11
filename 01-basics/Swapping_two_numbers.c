#include <stdio.h>

// Swapping two Number By using temp variable
int main()
{
    // int a = 10, b = 20, temp;
    // temp = a;
    // a = b;
    // b = temp;
    int a, b, temp;

    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d",a,b);

    return 0;
}