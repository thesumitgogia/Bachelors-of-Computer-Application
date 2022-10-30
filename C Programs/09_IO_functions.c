// Input/Output functions
// Formatted 
// * scanf()
// * printf()
// ----------------
// Unformatted
// * getch()
// * getchar()
// * putchar()
// * puts()
// * putch()
// * getche()


#include <stdio.h>
#include <conio.h>
int main()
{
    // getchar(), getche(), getch()

    // name    ||  echo || enter
    // getchar ||  yes  ||  yes
    // getche  ||  yes  ||  no
    // getch   ||  no   ||  no

    char getchar1, getche1, getch1, num;

    getchar1 = getchar();
    putchar(getchar1);

    getche1 = getche();
    putchar(getche1);

    getch1 = getch();
    putch(getch1);

    puts("Sumit Gogia.");

    scanf("%d", &num);
    printf("%d", num);

    return 0;
}
