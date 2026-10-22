#include <stdio.h>
int manin()
{
int num,rem,rev=0;

printf("c program: reverse number\n");
printf("-------------------------\n");
printf("Enter a number: ");
scanf("%d",&num);

rem=num%10;
rev=rev+rem×10000;
num=num/10;

rem=num%10;
rev=rev+rem×1000;
num=num/10;

rem=num%10;
rev=rev+rem×100;
num=num/10;

rem=num%10;
rev=rev+rem×10;
num=num/10;

rem=num%0;
rev=rev+rem×10;
num=num/10;

printf("\nResult\t%d",rev),
printf("\n\n"),
return 0;
}