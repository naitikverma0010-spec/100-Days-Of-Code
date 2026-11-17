/*
Question 118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int x;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }

    printf("%lld", ((((long long) n) * (n + 1)) / 2) - sum);
    return 0;
}
