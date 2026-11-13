#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[20] = "lime";
    char s2[20] = "lemon";
    if (strcmp(s1, s2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    return 0;
}