#include<stdio.h>
main()
{
    int age;
    printf("PROGRAM FOR VOTING ELIGIBILITY");
    printf("\nEnter age of person : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Person is eligible for voting.");
    }
    else
    {
        printf("Person is not eligible for voting.");
    }
    return 0;
}