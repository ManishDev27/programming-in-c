#include <stdio.h>

// Area and Perimeter of Rectangle
int main()
{
    int length, breath;

    printf("Enter the length of Rectangle : ");
    scanf("%d",&length);
    printf("Enter the breath of Rectangle : ");
    scanf("%d",&breath);

    int area = length * breath;
    int perimeter = 2 * (length + breath);

    printf("Area of Rectangle : %d\n",area);
    printf("Perimeter of Rectangle : %d",perimeter);

    return 0;
}