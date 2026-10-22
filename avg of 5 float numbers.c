#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, n5, average;

    printf("Enter 5 float numbers: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    average = (n1 + n2 + n3 + n4 + n5) / 5;

    printf("Average = %.2f\n", average);

    return 0;
}