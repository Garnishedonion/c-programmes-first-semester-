#include <stdio.h>
int main(void)
{
    char source[100];
    char destination[100];
    int i = 0;
    printf("Enter a string: ");
    if (fgets(source, sizeof(source), stdin) == NULL)
        return 1;
    while (source[i] != '\0' && source[i] != '\n')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    printf("Copied string = %s\n", destination);
    return 0;
}