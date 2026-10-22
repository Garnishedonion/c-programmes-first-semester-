#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("C prog:check for +ve,-ve and zero\n");
    printf("---------------------------------\n");
    printf("enter number a: \n");
    scanf("/od",&a);
    if (a>0)
    {
    printf("Display positive number");
    }
    else if (a<0)
    {
    printf("Display negative number ");
    }
    else
    {
    printf("Display 0")
    }
    return 0;
}