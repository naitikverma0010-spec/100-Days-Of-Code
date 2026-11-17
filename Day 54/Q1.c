/*
Question 104: For positive n, find pivot integer x where sum 1..x equals sum x..n; print -1 if absent.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long s = (n * (n + 1)) / 2;
    long long x = (long long) sqrt((double) s);
    printf("%lld", ((x * x) == s) ? (x) : (-1));
}
