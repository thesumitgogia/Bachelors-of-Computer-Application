#include <stdio.h>

int main()
{
    // intialize variables
    int a, b;

    // get value for a and b
    printf("Enter value for A and B: \n");
    scanf("%d %d", &a, &b);

    // before swap
    printf("Value of A: %d and B: %d before swapping: \n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    // after swap
    printf("Value of A: %d and B: %d after swapping: \n", a, b);
    return 0;
}