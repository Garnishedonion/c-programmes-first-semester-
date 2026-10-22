#include <stdio.h>

int main()
{
    int i,j,m;
    printf("enter the value m: ");
    scanf("%d",&m);
    
    for (int i=1;i<=m;i++){//outer loop for rows
    for (int j=1;j<=m;j++){//inner loop for columns
    printf ("*");}
    printf("\n");
    }
    return 0;
}