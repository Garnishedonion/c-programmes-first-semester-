
#include <stdio.h>
int main(void)
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    printf("Length = %d\n", i);
    return 0;
}