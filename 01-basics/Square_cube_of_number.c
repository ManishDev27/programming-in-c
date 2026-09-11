#include <stdio.h>

// Square and Cube of a number 
int main()
{
    int n, square, cube;

    printf("Enter Number : ");
    scanf("%d",&n);

    square = n * n;
    cube = n * square;

    printf("Square of number : %d\n",square);
    printf("Cube of number : %d",cube);

    return 0;
}