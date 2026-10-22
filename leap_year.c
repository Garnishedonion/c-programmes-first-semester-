#include<stdio.h>
int main()
{ int year;
    printf("program_to_check_for_leap_year\n");
    printf("_______________________________\n");

    printf("enter a year: ");
    scanf("%d",&year);

    if((year%400==0)||(year%4==0)&&(year%100!=0))
    {
        printf("%d is a leap year ");
    
    }
    else
    {
    printf("not_a_leap_year");
    }
    return 0; 
    }