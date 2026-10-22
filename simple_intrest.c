#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Simple Interest Calculator\n");
    printf("__________________________\n");

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
