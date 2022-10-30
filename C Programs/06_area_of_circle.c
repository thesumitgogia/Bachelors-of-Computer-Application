#include <stdio.h>

#define PI 3.14
int main()
{
    // Pi value 
    // intialize variable
	int area, radius;

    // get radius of circle from user 
	printf("Enter radius of circle:\n");
	scanf("%d", &radius);

    // formula of area of circle: (PI * Radius * Radius)
	area = PI * radius * radius;

	//Print result
	printf("Area of circle is: %d", area);
	return 0;
}