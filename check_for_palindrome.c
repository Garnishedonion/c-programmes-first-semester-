#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    int i, j, palindrome = 1;
    printf("Enter a word: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;
    str[strcspn(str, "\n")] = '\0';
    i = 0;
    j = (int)strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}