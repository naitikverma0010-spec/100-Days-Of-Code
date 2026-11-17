/*
Question 52: Print the irregular star pattern shown in the challenge.
*/

#include <stdio.h>

int main()
{
    int a[] = {1, 3, 5, 3, 1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < a[i]; j++)
            puts("*");

        putchar('\n');
    }

}
