/*
Question 39: Find the product of odd digits of a number.
*/

#include <stdio.h>

int main()
{
    long long n;
    long long p = 1;
    scanf("%lld", &n);
    while (n)
    {
        int d = n % 10;
        if (d % 2)
            p *= d;
        n /= 10;
    }

    printf("%lld", p);
}
