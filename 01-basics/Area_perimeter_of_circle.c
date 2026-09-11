#include <stdio.h>

// Area and Parameter of circle
int main()
{
    int radius;

    printf("Enter Radius of the circle : ");
    scanf("%d",&radius);

    float area = 3.1415 * radius * radius;
    float perimeter = 2 * 3.1415 * radius;

    printf("Area of Circle : %.2f\n",area);
    printf("Perimeter of Circle : %.2f",perimeter);

    return 0;
}