#include <stdio.h>
int main()
{
int a,b,choice;
printf("c program: calculator using switch case\n");
printf("---------------------------------------\n");
printf("Enter value for a: ");
scanf("%d", &a);
printf("Enter value for b: ");
scanf("%d", &b);
printf("1. Addition\n2. Subtraction\n3. Multiplication\n 4. Division\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
  { 
    case 1:
        printf("Sum = %d\n", a + b);
        break;
    case 2:
        printf("Difference = %d\n", a - b);    
        break;
    case 3:
        printf("product = %d\n", a * b);
        break;
    case 4:
        if(b != 0)
            printf("Quotient = %d, Remainder = %d\n", a / b,a % b);
        else
            printf("Error! Division by zero.\n");

        break;

    default:

      printf("Invalid Choice\n");
    }
      return 0; 
}      