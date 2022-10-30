// perimeter of square 
#include <stdio.h>

int main()
{
	// initialize side and permiter variables
	int side, perimeter;

	// Get value from user
	printf("Enter the Length of Side:\n");
	scanf("%d", &side);

	// formula to calculate the perimeter of square (side * 4)
	perimeter = side * 4;

	//Print result
	printf("Perimeter of Square is : %d", perimeter);

	return 0;
}