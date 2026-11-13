#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[20] = "tahiti";
    char second[] = "micah";
    strncat(first, second, 3);
    printf("%s\n", first);
    return 0;
}