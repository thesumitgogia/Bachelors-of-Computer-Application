// add two numbers
#include <stdio.h>

int main()
{
    // initalize variables 
	int a, b, sum;

	// Get first number from user
	printf("Enter first number:\n");
	scanf("%d", &a);

	// Get second number from user
	printf("Enter second number:\n");
	scanf("%d", &b);

    // add two numbers 
	sum = a + b;

	//Print result
	printf("Sum of %d and %d: %d", a, b, sum);
	return 0;
}