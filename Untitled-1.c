#include<stdio.h>
main()
{
    int a, b, sum;
    int *p1, *p2;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    p1=&a;
    p2=&b;

    sum=*p1+*p2;

    printf("sum is %d", sum);

    return 0;
}   
