// circumference of circle
#include <stdio.h>
#define PI 3.14

int main()
{
	// intialize variables
	int circumference, radius;

	// get radius of circle from user
	printf("Enter radius of circle:\n");
	scanf("%d", &radius);

	// formula of circumference of circle (PI * circumference * 2)
	circumference = PI * radius * 2;

	// Print result
	printf("Circumference of circle is: %d", circumference);
	return 0;
}