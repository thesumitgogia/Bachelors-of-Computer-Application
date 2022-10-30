// subtract two numbers
#include <stdio.h>

int main()
{
    // initalize variables
    int a, b, result;

    // Get first number from user
    printf("Enter first number: \n");
    scanf("%d", &a);

    // Get first number from user
    printf("Enter second number: \n");
    scanf("%d", &b);

    // subtarct two numbers
    result = a - b;

    // print result
    printf("Subtraction of %d and %d is: %d", a, b, result);
    return 0;
}
