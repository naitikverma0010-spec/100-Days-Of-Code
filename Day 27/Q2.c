/*
Question 54: Print a centered diamond star pattern.
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; i += 2)
    {
        for (int s = 0; s < ((7 - i) / 2); s++)
            putchar(' ');

        for (int j = 0; j < i; j++)
            putchar('*');

        puts("");
    }

    for (int i = 5; i >= 1; i -= 2)
    {
        for (int s = 0; s < ((7 - i) / 2); s++)
            putchar(' ');

        for (int j = 0; j < i; j++)
            putchar('*');

        puts("");
    }

}
