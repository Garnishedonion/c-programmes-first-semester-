#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf( "first element = %d", *ptr);
    ptr++;
    printf( "\nsecond element = %d", *ptr);
    ptr++;
    printf( "\nthird element = %d", *ptr);

    return 0;

}    
