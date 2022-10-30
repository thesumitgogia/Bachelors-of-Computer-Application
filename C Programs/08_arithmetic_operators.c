// arithmetic operators
#include <stdio.h>

int main()
{
    // intialize variables
    int a, b;

    // get number first
    printf("Enter first number:\n");
    scanf("%d", &a);

    // get number second
    printf("Enter second number:\n");
    scanf("%d", &b);

    // use of all arithmetic operators 
    printf("Addition: %d \n", a + b);
    printf("Subtraction: %d \n", a - b);
    printf("Multiply: %d \n", a * b);
    printf("Reminder: %d \n", a / b);
    printf("Quoteint: %d", a % b);

    return 0;
}