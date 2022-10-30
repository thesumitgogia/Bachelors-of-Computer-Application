// three digit number 
#include <stdio.h>

int main()
{
    // intialize variables 
    int num, sum = 0, m;
    // get number from user 
    printf("Enter a number:");
    scanf("%d", &num);  // 123

    // sum of three digit number
    while (num > 0)
    {
        m = num % 10; // 3  m = 3          |  12 % 10  m = 2   | 1   
        sum = sum + m; // 3              |  3 + 4  sum = 5   | 6
        num = num / 10; // 123 / 10  num = 12  |  12 / 10  num = 1   | 0
    }

    printf("Sum of %d is: %d", num, sum);
    return 0;
}