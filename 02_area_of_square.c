// calculate the area of square
#include <stdio.h>

int main()
{
    // initialize side and area variables
    int side, area;

    // Get value from user
    printf("Enter the Length of Side:\n");
    scanf("%d", &side);

    // formula to calculate the area of square (side * side)
    area = side * side;

    // Print result
    printf("Area of Square is : %d", area);

    return 0;
}