#include <stdio.h>
#include <string.h>
int main(void)
{
    char source[] = "Computer";
    char destination[10];
    strncpy(destination, source, 4);
    destination[4] = '\0';
    printf("%s\n", destination);
    return 0;
}