// swap two numbers using thrid variable
#include <stdio.h>

int main()
{
    // intialize variables
    int a, b, c;

    // get value for a and b variable
    printf("Enter value for A and B: \n");
    scanf("%d %d", &a, &b);

    // before swapping
    printf("Value of A: %d and B: %d before swapping: \n", a, b);

    // swap two numbers
    c = b;
    b = a;
    a = c;

    // after swapping
    printf("Value of A: %d and B: %d after swapping: \n", a, b);
    return 0;
}