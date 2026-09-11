#include <stdio.h>

// Average of three subject's marks and calculate the Percentage
int main()
{
    int sub1, sub2, sub3;

    printf("Enter marks of first subject : ");
    scanf("%d",&sub1);
    printf("Enter marks of second subject : ");
    scanf("%d",&sub2);
    printf("Enter marks of thired subject : ");
    scanf("%d",&sub3);

    float avg = (sub1 + sub2 + sub3) / 3.0;

    printf("Total Percentage : %.2f",avg);

    return 0;
}