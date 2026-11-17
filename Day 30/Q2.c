/*
Question 60: Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main()
{
    int n;
    int x;
    int p = 0;
    int m = 0;
    int z = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (x > 0)
            p++;
        else
            if (x < 0)
            m++;
        else
            z++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", p, m, z);
}
