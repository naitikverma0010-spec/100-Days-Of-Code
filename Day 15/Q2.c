/*
Question 30: Reverse a given number.
*/

#include <stdio.h>

int main()
{
    long long n;
    long long r = 0;
    scanf("%lld", &n);
    while (n)
    {
        r = (r * 10) + (n % 10);
        n /= 10;
    }

    printf("%lld", r);
}
