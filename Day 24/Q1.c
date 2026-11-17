/*
Question 47: Print a left-aligned increasing triangle of stars (1 to 5).
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            putchar('*');

        putchar('\n');
    }

}
