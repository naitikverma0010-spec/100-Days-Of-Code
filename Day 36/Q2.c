/*
Question 72: Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main()
{
    int r;
    int c;
    int x;
    int s = 0;
    scanf("%d%d", &r, &c);
    for (int i = 0; i < (r * c); i++)
    {
        scanf("%d", &x);
        s += x;
    }

    printf("%d", s);
}
