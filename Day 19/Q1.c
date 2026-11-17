/*
Question 37: Find the LCM of two numbers.
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int x;
    int y;
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while (y)
    {
        int t = x % y;
        x = y;
        y = t;
    }

    printf("%d", (a / x) * b);
}
