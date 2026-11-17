/*
Question 24: Calculate electricity bill based on units consumed and slab rates.
*/

#include <stdio.h>

int main()
{
    int u;
    double b = 0;
    scanf("%d", &u);
    if (u > 300)
    {
        b += (u - 300) * 12;
        u = 300;
    }
    if (u > 200)
    {
        b += (u - 200) * 10;
        u = 200;
    }
    if (u > 100)
    {
        b += (u - 100) * 7;
        u = 100;
    }
    b += u * 5;
    printf("Bill: Rs %.0f", b);
}
