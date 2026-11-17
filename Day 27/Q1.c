/*
Question 53: Print a diamond-like star pattern with widths 1,3,5,7,9,7,5,3,1.
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 0; j < i; j++)
            putchar('*');

        puts("");
    }

    for (int i = 7; i >= 1; i -= 2)
    {
        for (int j = 0; j < i; j++)
            putchar('*');

        puts("");
    }

}
