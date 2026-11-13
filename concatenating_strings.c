#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[30] ="lennyy";
    char second[] = "tahiti";
    strcat(first, second);
    printf("Combined string = %s\n", first);
    return 0;
}